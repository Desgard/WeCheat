//
//  WeChatServiceManager.m
//  WechatPod
//
//  Created by monkey on 2017/8/2.
//  Copyright © 2017年 Coder. All rights reserved.
//

#import "WeChatHeader.h"
#import "WeChatServiceManager.h"
#import <objc/runtime.h>

@implementation WeChatServiceManager

+(CMessageMgr *)sharedCMessageMgr{
    MMServiceCenter* serviceCenter = [objc_getClass("MMServiceCenter") defaultCenter];
    return [serviceCenter getService:[objc_getClass("CMessageMgr") class]];
}

@end
