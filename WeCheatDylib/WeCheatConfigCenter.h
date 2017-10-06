//
//  WeCheatConfigCenter.h
//  WeCheat
//
//  Created by Harry Twan on 06/10/2017.
//  Copyright © 2017 Harry Twan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WeCheatConfigCenter : NSObject<NSCoding>

@property(nonatomic) BOOL isNightMode;
@property(nonatomic) NSUInteger stepCount;
@property(nonatomic) BOOL isRevokeMsg;

+ (instancetype)shareInstance;

@end
