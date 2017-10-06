//
//  WECSportStepHook.m
//  WeCheat
//
//  Created by Harry Twan on 12/09/2017.
//  Copyright © 2017 Harry Twan. All rights reserved.
//

#import "WeCheatDevDylib.h"

typedef void (^CMStepQueryHandler)(NSInteger numberOfSteps, NSError *error);
CMStepQueryHandler origHandler = nil;

CMStepQueryHandler newHandler = ^(NSInteger numberSteps, NSError *error){
    NSLog(@"获取到的步数  %lu", numberSteps);
    if(pluginConfig.stepCount != 0) {
        numberSteps = pluginConfig.stepCount;
    }
    // 此处可以修改步数
    // 希望可以通过UI 方式动态注入数据
    // 修改前请注意，貌似 wechat 在服务端对数据进行判断
    // 所以修改时一旦数值过大无法手动修改回原始状态
    
    origHandler(numberSteps,error);
};

CHDeclareClass(CMStepCounter);

CHOptimizedMethod4(self, void, CMStepCounter, queryStepCountStartingFrom, NSData*, from, to, NSData*, to, toQueue, NSOperationQueue*, queue, withHandler, CMStepQueryHandler, handler){
    origHandler = [handler copy];
    handler = newHandler;
    
    CHSuper4(CMStepCounter, queryStepCountStartingFrom, from, to, to, toQueue, queue, withHandler, handler);
}

CHConstructor{
    CHLoadLateClass(CMStepCounter);
    CHClassHook4(CMStepCounter, queryStepCountStartingFrom, to, toQueue, withHandler);
}
