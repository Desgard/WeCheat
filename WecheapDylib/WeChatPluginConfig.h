//
//  WeChatPluginConfig.h
//  WechatPod
//
//  Created by monkey on 2017/8/1.
//  Copyright © 2017年 Coder. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@class WeChatPluginConfig;

extern WeChatPluginConfig* pluginConfig;

@interface WeChatPluginConfig : NSObject

+(WeChatPluginConfig*)sharedInstance;

/**
 步数
 */
@property(nonatomic, assign) NSInteger stepCount;


/**
 经纬度
 */
@property(nonatomic, assign) CLLocationCoordinate2D location;


/**
 开启消息防撤回
 */
@property(nonatomic, assign) BOOL enableRevoke;


/**
 游戏作弊
 */
@property(nonatomic, assign) NSInteger gameNumber;

@end
