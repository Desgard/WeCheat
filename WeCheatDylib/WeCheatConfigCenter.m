//
//  WeCheatConfigCenter.m
//  WeCheat
//
//  Created by Harry Twan on 06/10/2017.
//  Copyright © 2017 Harry Twan. All rights reserved.
//

#import "WeCheatConfigCenter.h"

@implementation WeCheatConfigCenter

- (instancetype)init {
    self = [super init];
    if (self) {
        self.isRevokeMsg = NO;
        self.isNightMode = NO;
        self.stepCount = 100;
    }
    return self;
}

+ (instancetype)shareInstance {
    static dispatch_once_t onceToken;
    static WeCheatConfigCenter *_instance;
    dispatch_once(&onceToken, ^{
        _instance = [WeCheatConfigCenter new];
    });
    return _instance;
}

#pragma MARK - NSCoding
- (void)encodeWithCoder:(nonnull NSCoder *)aCoder {
    [aCoder encodeBool:self.isNightMode forKey:@"isNightMode"];
    [aCoder encodeBool:self.isRevokeMsg forKey:@"isRevokeMsg"];
    [aCoder encodeInteger:self.stepCount forKey:@"stepCount"];
}

- (nullable instancetype)initWithCoder:(nonnull NSCoder *)aDecoder {
    if (self = [super init]) {
        self.isNightMode = [aDecoder decodeBoolForKey:@"isNightMode"];
        self.isRevokeMsg = [aDecoder decodeBoolForKey:@"isRevokeMsg"];
        self.stepCount = [aDecoder decodeIntegerForKey:@"stepCount"];
    }
    return self;
}

@end
