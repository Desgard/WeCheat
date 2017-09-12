//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"

@class MMTableView, NSString, WCDataItem, WCOpLog;
@protocol WCSetPermissionsViewControllerDelegate;

@interface WCSetPermissionsViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCFacadeExt>
{
    MMTableView *_tableView;
    NSString *_userName;
    WCOpLog *_wcOpLog;
    id <WCSetPermissionsViewControllerDelegate> _delegate;
    int _scene;
    WCDataItem *m_oDataItem;
}

- (void).cxx_destruct;
- (void)becomeOutsider:(_Bool)arg1;
- (void)becomeWCBlacklist:(_Bool)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <WCSetPermissionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initView;
- (id)initWithUserName:(id)arg1;
@property(retain, nonatomic) WCDataItem *m_oDataItem; // @synthesize m_oDataItem;
- (void)makeExposeCell:(id)arg1 tip:(id)arg2;
- (void)makeSwitchCell:(id)arg1 tip:(id)arg2 status:(_Bool)arg3 tag:(long long)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onDissmiss;
- (void)onSwitchValueChange:(id)arg1;
- (void)onWCGroupAddMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)onWCGroupModMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)onWCGroupRemoveMemberReturn:(_Bool)arg1 group:(id)arg2;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tipsLabelForSection:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
