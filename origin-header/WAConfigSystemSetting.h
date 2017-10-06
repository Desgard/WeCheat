//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WAConfigSystemSetting : NSObject
{
    NSDictionary *_dicSetting;
}

- (void).cxx_destruct;
- (unsigned int)appMaxRunningCount;
- (unsigned int)appServiceMaxDataSize;
- (unsigned int)attrSyncForceUpdateTime;
- (unsigned long long)cacheTotalFileMaxSize;
- (id)cdnBaseURL;
- (_Bool)containSyncLaunchScene:(unsigned int)arg1;
- (unsigned int)deadThreadBanDuration;
- (unsigned int)deadThreadMaxTimeToLive;
- (unsigned int)defaultAppMaxRunningCount;
- (unsigned int)defaultAppServiceMaxDataSize;
- (unsigned int)defaultAttrSyncForceUpdateTime;
- (id)defaultCDNBaseURL;
- (unsigned long long)defaultCacheTotalFileMaxSize;
- (unsigned long long)defaultDownloadFileMaxSize;
- (id)defaultHttpHeaderReferer;
- (unsigned long long)defaultLocalStorageItemMaxSize;
- (unsigned int)defaultStarNumberLimitation;
- (id)defaultSyncLaunchSceneList;
- (unsigned long long)downloadFileMaxSize;
- (unsigned int)downloadFileMaxTimeoutMS;
- (unsigned int)getValidStarNumberLimitation;
- (id)httpHeaderBlackList;
- (id)httpHeaderMode;
- (id)httpHeaderReferer;
- (id)httpHeaderWhiteList;
- (id)httpSetting;
- (id)initWithSetting:(id)arg1;
- (unsigned long long)localStorageItemMaxSize;
- (_Bool)reloadTaskWithScene:(unsigned int)arg1 homePath:(_Bool)arg2;
- (unsigned int)requestMaxTimeoutMS;
- (unsigned int)starNumberLimitation;
- (id)syncLaunchSceneList;
- (unsigned int)uploadFileMaxTimeoutMS;
- (unsigned int)webSocketMaxTimeoutMS;
- (unsigned int)widgetDrawMinInterval;
- (unsigned int)widgetImageFlowLimitDuration;
- (unsigned int)widgetImageFlowLimitMaxSize;

@end
