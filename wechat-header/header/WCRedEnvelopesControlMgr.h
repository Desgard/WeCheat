//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseControlMgr.h"

#import "JSEventExt-Protocol.h"
#import "WCHBOpenApiExt-Protocol.h"

@class NSString;

@interface WCRedEnvelopesControlMgr : WCBaseControlMgr <JSEventExt, WCHBOpenApiExt>
{
    _Bool m_bRceivingGreeting;
}

- (void)OnWCHBOpenApi:(id)arg1 withAppID:(id)arg2 andBundleID:(id)arg3;
- (_Bool)UseBalance;
- (void)dealloc;
- (id)init;
- (void)jsGetRecevieBizHongBaoRequest:(id)arg1;
@property(nonatomic) _Bool m_bRceivingGreeting; // @synthesize m_bRceivingGreeting;
- (unsigned int)startBrandServiceControlLogic:(id)arg1 NativeUrl:(id)arg2;
- (unsigned int)startOpenRedEnvelopesDetail:(id)arg1 sendId:(id)arg2;
- (unsigned int)startReceiveGreetingRedEnvelopesLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startReceiveRedEnvEnterpriseLogicWithOpenApiInner:(id)arg1 AppId:(id)arg2 BundleId:(id)arg3 HBParam:(id)arg4;
- (unsigned int)startReceiveRedEnvelopesLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startReceiveRedEnvelopesLogic:(id)arg1 Data:(id)arg2 Scene:(unsigned int)arg3;
- (unsigned int)startReceiveRedEnvelopesLogicByC2C:(id)arg1 Data:(id)arg2;
- (unsigned int)startReceiveRedEnvelopesLogicWithJS:(id)arg1 Data:(id)arg2 Scene:(int)arg3 Event:(id)arg4;
- (unsigned int)startReceivedRedEnvelopesListLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSendEnvelopesReceivedListLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSendGeetingRedEnvelopesLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSendGeetingRedEnvelopesLogicWithShake:(id)arg1 Data:(id)arg2;
- (unsigned int)startSendNotReceivedListEnvelopesReceivedListLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSendRedEnvelopesLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSendRedEnvelopesLogic:(id)arg1 Data:(id)arg2 WithSelectContact:(id)arg3 Scene:(unsigned int)arg4 RedEnvelopesType:(int)arg5;
- (unsigned int)startSendRedEnvelopesLogic:(id)arg1 WithSelectContact:(id)arg2 Scene:(unsigned int)arg3 RedEnvelopesType:(int)arg4;
- (unsigned int)startSystemMessageControlLogic:(id)arg1 NativeUrl:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
