//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CLLocationManager, MMTimer, NSMutableArray, NSString;

@interface WCBeaconGuideModeMgr : MMService <PBMessageObserverDelegate, CLLocationManagerDelegate, MMService>
{
    MMTimer *m_timer;
    _Bool _m_isPreviousRequestRunning;
    NSMutableArray *_shakeRangeBeacons;
    CLLocationManager *_m_locationMgr;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)addHadRangedDevice:(id)arg1;
- (id)authorizedInfoFilePath;
- (void)cleanGuideModeCache;
- (void)clearIsInShakeViewController;
- (void)clearLastFetchedContent;
- (void)clearRedDot:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned int)getChannelOpenMethod;
- (unsigned int)getChannelOpenTime;
- (unsigned int)getShakeTabDisplay;
- (unsigned long long)getShopId;
- (id)guideSwitchFilePath;
- (void)handlePreGetGuideModeInfoResponse:(id)arg1;
- (_Bool)hasShakeRedDot;
- (_Bool)hasTabRedDot;
- (id)init;
- (_Bool)isChannelOpen;
- (_Bool)isDeviceHasBeenDiscoveredWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)isDeviceHasBeenFirstReadWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)isDeviceHasBeenReadWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)isInShakeViewController;
- (id)lastFetchedContentFilePath;
- (id)loadAuthorizationInfoFromFile;
- (id)loadGuideSwitcgFromFile;
- (id)loadLastFetchedContentFromFile;
- (id)loadRangedDeviceByUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
@property(nonatomic) _Bool m_isPreviousRequestRunning; // @synthesize m_isPreviousRequestRunning=_m_isPreviousRequestRunning;
@property(retain, nonatomic) CLLocationManager *m_locationMgr; // @synthesize m_locationMgr=_m_locationMgr;
- (void)markIsInShakeViewController;
- (void)markRedDot:(unsigned long long)arg1;
- (void)onServiceEnterForeground;
- (void)openGuideChannelForShopId:(unsigned long long)arg1;
- (void)preGetGuideInfoByBeacon:(id)arg1 withOwner:(unsigned long long)arg2 inLocation:(id)arg3;
- (id)rangedDevicesFilePath;
- (_Bool)saveAuthorizationInfo:(id)arg1;
- (_Bool)saveGuideSwitch:(id)arg1;
- (_Bool)saveLastFetchedContent:(id)arg1;
@property(retain, nonatomic) NSMutableArray *shakeRangeBeacons; // @synthesize shakeRangeBeacons=_shakeRangeBeacons;
- (_Bool)shakeBeaconTabShouldStay;
- (id)shakeRedDotFlagFilePath;
- (id)shakeVcFlagFilePath;
- (void)startRangeBeacons;
- (void)stopRangeBeacons;
- (id)tabRedDotFlagFilePath;
- (_Bool)updateRangedDeviceDiscoverStateByUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)updateRangedDeviceFirstReadStateByUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (_Bool)updateRangedDeviceReadStateByUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (void)uploadBeaconsToSvr;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

