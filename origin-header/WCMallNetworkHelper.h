//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@protocol WCMallNetworkHelperDelegate;

@interface WCMallNetworkHelper : MMObject <PBMessageObserverDelegate>
{
    id <WCMallNetworkHelperDelegate> m_oWCMallNetworkHelperDelegate;
}

- (void).cxx_destruct;
- (void)GetWCMallFunctionList:(id)arg1;
- (void)GetWCMallFunctionProductList:(id)arg1;
- (void)GetWCMallLatestPayProductInfo:(id)arg1;
- (void)GetWCMallPayChargeProxyRequets:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetWCMallFunctionListMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetWCMallFunctionProductListMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetWCMallLatestPayProductInfoMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetWCMallPayChargeProxyReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (id)init;
@property(nonatomic) __weak id <WCMallNetworkHelperDelegate> m_oWCMallNetworkHelperDelegate; // @synthesize m_oWCMallNetworkHelperDelegate;

@end

