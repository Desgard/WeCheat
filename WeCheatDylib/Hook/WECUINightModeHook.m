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

CHDeclareClass(UILabel);
CHDeclareClass(UIView);

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

BOOL compareColor(UIColor *color1, UIColor *color2) {
    if (color1 == color2) {
        return YES;
    }
    CGFloat red1, red2, green1, green2, blue1, blue2;
    [color1 getRed:&red1 green:&green1 blue:&blue1 alpha:nil];
    [color2 getRed:&red2 green:&green2 blue:&blue2 alpha:nil];
    if (fabsf(red1 - red2) < 0.1 && fabsf(green1 - green2) < 0.1 && fabsf(blue1 - blue2) < 0.1) {
        return YES;
    }
    return NO;
}

CHOptimizedMethod1(self, void, UIView, setBackgroundColor, UIColor *, color) {
    CHSuper1(UIView, setBackgroundColor, color);
    if ([self isKindOfClass:UILabel.class]) {
        CHSuper1(UIView, setBackgroundColor, [UIColor clearColor]);
    }
    else if ([self isKindOfClass:UIButton.class]) {
        UIButton *button = (UIButton *)self;
        button.tintColor = nightTextColor;
    }
    else if ([self isKindOfClass:UITableViewCell.class]) {
        CHSuper1(UIView, setBackgroundColor, nightBackgroundColor);
    }
    else if ([self isKindOfClass:UITableView.class]) {
        ((UITableView *)self).separatorColor = nightSeparatorColor;
    }
    else if (!compareColor(color, nightBackgroundColor) && !compareColor(color, nightSeparatorColor) && !compareColor(color, nightTabBarColor)){
        CHSuper1(UIView, setBackgroundColor, [UIColor clearColor]);
    }
}

CHOptimizedMethod1(self, void, UILabel, setTextColor, UIColor *, color) {
    CHSuper1(UILabel, setTextColor, nightTextColor);
    self.tintColor = nightTextColor;
    self.backgroundColor = [UIColor clearColor];
}

CHOptimizedMethod1(self, void, UILabel, setText, NSString *, text) {
    CHSuper1(UILabel, setText, text);
    self.textColor = nightTextColor;
    self.tintColor = nightTextColor;
    self.backgroundColor = [UIColor clearColor];
}

CHOptimizedMethod1(self, void, UILabel, setBackgroundColor, UIColor *, color) {
    CHSuper1(UILabel, setBackgroundColor, color);
    toNight(self);
}

CHConstructor {
    CHLoadLateClass(UIView);
    CHHook1(UIView, setBackgroundColor);
    CHLoadLateClass(UILabel);
    CHHook1(UILabel, setText);
    CHLoadLateClass(UILabel);
    CHHook1(UILabel, setTextColor);
}

