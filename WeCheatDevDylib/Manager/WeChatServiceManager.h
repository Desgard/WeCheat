//
//  WeChatServiceManager.h
//  WechatPod
//
//  Created by monkey on 2017/8/2.
//  Copyright © 2017年 Coder. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WeChatHeader.h"
#import "WeChatUIHeader.h"

@interface WeChatServiceManager : NSObject

+ (instancetype)shareManager;

+ (CMessageMgr *)sharedCMessageMgr;
- (void)sayTest;

@end
