//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "WCBaseControlLogicDeleagte-Protocol.h"
#import "WCPayGPLaunchViewControllerDelegate-Protocol.h"
#import "WCPayGPMemberFillMoneyControllerDelegate-Protocol.h"
#import "WCPayGPSelectMemberControllerDelegate-Protocol.h"

@class NSString;
@protocol WCPayGPLaunchControlLogicDelegate;

@interface WCPayGPLaunchControlLogic : WCPayControlLogic <WCPayGPLaunchViewControllerDelegate, WCPayGPSelectMemberControllerDelegate, PBMessageObserverDelegate, WCBaseControlLogicDeleagte, WCPayGPMemberFillMoneyControllerDelegate>
{
    _Bool _bEnableReportLocation;
    _Bool _bEnableReportSSID;
    unsigned long long _launchTimeStamp;
    id <WCPayGPLaunchControlLogicDelegate> _launchDelegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)addAAC2CMsgWithMsgContent:(id)arg1;
@property(nonatomic) _Bool bEnableReportLocation; // @synthesize bEnableReportLocation=_bEnableReportLocation;
@property(nonatomic) _Bool bEnableReportSSID; // @synthesize bEnableReportSSID=_bEnableReportSSID;
- (void)dealloc;
- (void)dismissAndStopLogic;
- (id)genWCRealnameInfoFromRealnameItem:(id)arg1;
- (id)initWithChatroomContact:(id)arg1 fromScene:(unsigned long long)arg2;
- (void)launchActivityAARequestWithActivityTheme:(id)arg1 totalAmount:(unsigned long long)arg2 payerItems:(id)arg3;
- (void)launchCommonAARequestWithMemberCount:(unsigned int)arg1 perMemberAmount:(unsigned long long)arg2 activityTheme:(id)arg3 payerUsernameArray:(id)arg4;
@property(nonatomic) __weak id <WCPayGPLaunchControlLogicDelegate> launchDelegate; // @synthesize launchDelegate=_launchDelegate;
@property(nonatomic) unsigned long long launchTimeStamp; // @synthesize launchTimeStamp=_launchTimeStamp;
- (void)onGetActivityAALaunchResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetCommonAALaunchResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetGroupPaySvrConfigResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onWCPayGPLaunchVCClickOrderHistoryEntry;
- (void)onWCPayGPLaunchVCClickSelectMemberBtn:(id)arg1 withIgnoreContact:(id)arg2 withSelectMemberSource:(unsigned long long)arg3;
- (void)onWCPayGPLaunchVCClickToMemberFillMoneyMode;
- (void)onWCPayGPLaunchVCClickToMemberFillMoneyVCWithSelectedContact:(id)arg1 withUserPayAmountDict:(id)arg2;
- (void)onWCPayGPLaunchViewControllerCancel;
- (void)onWCPayGPMemberFillMoneyControllerBackWithSelectContact:(id)arg1 withUserPayAmountDict:(id)arg2;
- (void)onWCPayGPMemberFillMoneyControllerCancel;
- (void)onWCPayGPSelectViewControllerCancel;
- (void)onWCPayGPSelectViewControllerFinish:(id)arg1 isSelectAll:(_Bool)arg2;
- (void)saveGroupPaySvrConfig:(id)arg1;
- (void)sendGroupPaySvrConfigRequest;
- (void)setLaunchLogicDelegate:(id)arg1;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
