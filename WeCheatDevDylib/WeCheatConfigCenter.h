//
//  WeCheatConfigCenter.h
//  WeCheat
//
//  Created by Harry Twan on 06/10/2017.
//  Copyright © 2017 Harry Twan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface WeCheatConfigCenter : NSObject<NSCoding>

@property(nonatomic) BOOL isNightMode;
@property(nonatomic) NSUInteger stepCount;
@property(nonatomic) BOOL isRevokeMsg;

+ (instancetype)shareInstance;
- (void)handleNightMode:(UISwitch *)sender;
- (void)handleRevokeMsg:(UISwitch *)sender;
- (void)handleStepCount:(UITextField *)sender;

@end
