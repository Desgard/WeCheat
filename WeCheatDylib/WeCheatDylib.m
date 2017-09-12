//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  WecheapDylib.m
//  WecheapDylib
//
//  Created by Harry Twan on 11/09/2017.
//  Copyright (c) 2017 Harry Twan. All rights reserved.
//

#import "WeCheatDylib.h"
#import "CaptainHook.h"
#import <UIKit/UIKit.h>
#import <Cycript/Cycript.h>

static __attribute__((constructor)) void entry(){
    NSLog(@"\n               🎉!!！congratulations!!！🎉\n👍----------------insert dylib success----------------👍");
    
    [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidFinishLaunchingNotification object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification * _Nonnull note) {
        
        CYListenServer(6666);
    }];
}
