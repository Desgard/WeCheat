//
//  WECUINightModeHook.m
//  WeCheatDylib
//
//  Created by 段昊宇 on 2017/9/20.
//  Copyright © 2017年 Harry Twan. All rights reserved.
//

#import "WeCheatDylib.h"
#import "CaptainHook.h"
#import <UIKit/UIKit.h>
#import <Cycript/Cycript.h>
#import "WeChatServiceManager.h"

#import "WeChatUIHeader.h"

#define UIColorFromRGB(rgbValue) \
    [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
        green:((float)((rgbValue & 0x00FF00) >>  8))/255.0 \
        blue:((float)((rgbValue & 0x0000FF) >>  0))/255.0 \
        alpha:1.0]

#define nightBackgroundColor UIColorFromRGB(0x343434)
#define nightSeparatorColor  UIColorFromRGB(0x313131)
#define nightTextColor       UIColorFromRGB(0xffffff)
#define nightTabBarColor     UIColorFromRGB(0x444444)

void toNight(UIView *view) {
    if ([view isKindOfClass:UILabel.class]) {
        UILabel *label = (UILabel *)view;
        [label setBackgroundColor:[UIColor clearColor]];
        label.textColor = nightTextColor;
        label.tintColor = nightTextColor;
    }
    else if ([view isKindOfClass:UIButton.class]) {
        UIButton *button = (UIButton *)view;
        button.tintColor = nightTextColor;
    }
    else {
        [view setBackgroundColor:[UIColor clearColor]];
        for (UIView *subView in view.subviews) {
            toNight(subView);
        }
    }
}

CHDeclareClass(UILabel);

CHOptimizedMethod1(self, void, UILabel, setBackgroundColor, UIColor *, color) {
    CHSuper1(UILabel, setBackgroundColor, color);
    toNight(self);
}

CHOptimizedMethod1(self, void, UILabel, setTextColor, UIColor *, color) {
    CHSuper1(UILabel, setTextColor, color);
    toNight(self);
}
