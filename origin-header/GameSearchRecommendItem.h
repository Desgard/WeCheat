//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface GameSearchRecommendItem : MMObject <PBCoding>
{
    unsigned int actionType;
    NSString *appID;
    NSString *recommendKey;
    NSString *desc;
    NSString *targetUrl;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) unsigned int actionType; // @synthesize actionType;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
- (void)dealloc;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *recommendKey; // @synthesize recommendKey;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

