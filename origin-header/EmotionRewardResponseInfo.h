//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class EmotionReward, NSArray, NSString;

@interface EmotionRewardResponseInfo : NSObject <PBCoding>
{
    NSArray *prices;
    unsigned int donorNum;
    NSArray *donors;
    EmotionReward *reward;
    _Bool hasAllInfo;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) unsigned int donorNum; // @synthesize donorNum;
@property(retain, nonatomic) NSArray *donors; // @synthesize donors;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) _Bool hasAllInfo; // @synthesize hasAllInfo;
@property(retain, nonatomic) NSArray *prices; // @synthesize prices;
@property(retain, nonatomic) EmotionReward *reward; // @synthesize reward;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

