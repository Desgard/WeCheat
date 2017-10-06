//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  WeCheatDevDylib.m
//  WeCheatDevDylib
//
//  Created by 段昊宇 on 2017/10/6.
//  Copyright (c) 2017年 Desgard_Duan. All rights reserved.
//

#import "WeCheatDevDylib.h"
#import "CaptainHook.h"
#import <UIKit/UIKit.h>
#import <Cycript/Cycript.h>

static __attribute__((constructor)) void entry(){
    NSLog(@"\n               🎉!!！congratulations!!！🎉\n👍----------------insert dylib success----------------👍");
    
    [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidFinishLaunchingNotification object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification * _Nonnull note) {
        
        CYListenServer(6666);
    }];
}

@interface CustomViewController

-(NSString*)getMyName;

@end

CHDeclareClass(CustomViewController)

CHOptimizedMethod(0, self, NSString*, CustomViewController,getMyName){
    //get origin value
    NSString* originName = CHSuper(0, CustomViewController, getMyName);
    
    NSLog(@"origin name is:%@",originName);
    
    //get property
    NSString* password = CHIvar(self,_password,__strong NSString*);
    
    NSLog(@"password is %@",password);
    
    //change the value
    return @"AloneMonkey";
    
}

CHConstructor{
    CHLoadLateClass(CustomViewController);
    CHClassHook(0, CustomViewController, getMyName);
}

