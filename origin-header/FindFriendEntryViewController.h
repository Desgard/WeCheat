//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTabBarBaseViewController.h"

#import "EditBottleProfileDelegate-Protocol.h"
#import "FriendAsistSessionExt-Protocol.h"
#import "IBottleSessionExt-Protocol.h"
#import "IClearDataMgrExt-Protocol.h"
#import "IGameCenterExt-Protocol.h"
#import "IGameCenterMsgNotifyExt-Protocol.h"
#import "IMMFontMgrExt-Protocol.h"
#import "IOnlineClientMgrExt-Protocol.h"
#import "ISearchConfigDataExt-Protocol.h"
#import "ISettingExtChange-Protocol.h"
#import "IShakeCardMgrExt-Protocol.h"
#import "IWCJdBussinessMgrExt-Protocol.h"
#import "IWCLabsMgrExt-Protocol.h"
#import "IWebSearchRedPointMgrExt-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "MainTableDelegate-Protocol.h"
#import "ShakeMgrExt-Protocol.h"
#import "ShakeViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCBeaconGuideModeExt-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "WCTimeLineViewControllerDelegate-Protocol.h"
#import "settingMyAccountExtInfoDelegate-Protocol.h"

@class GameIndexSettingControl, MMHeadImageView, MMMainTableView, MMTimer, NSIndexPath, NSString, UIImageView, WCDataItem, WCTimeLineViewController;

@interface FindFriendEntryViewController : MMTabBarBaseViewController <IClearDataMgrExt, MainTableDelegate, IWebSearchRedPointMgrExt, UIAlertViewDelegate, settingMyAccountExtInfoDelegate, ShakeViewDelegate, EditBottleProfileDelegate, UITableViewDataSource, UITableViewDelegate, IBottleSessionExt, WCFacadeExt, WCTimeLineViewControllerDelegate, FriendAsistSessionExt, ISettingExtChange, ShakeMgrExt, MMConfigMgrExt, IOnlineClientMgrExt, WCActionSheetDelegate, IMMFontMgrExt, IWCJdBussinessMgrExt, IGameCenterExt, IGameCenterMsgNotifyExt, MMWebImageViewDelegate, IShakeCardMgrExt, WCBeaconGuideModeExt, ISearchConfigDataExt, IWCLabsMgrExt>
{
    _Bool m_hasInitData;
    MMMainTableView *m_tableView;
    struct stEntryRow *m_aryEntryRow;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapSectionType;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeSocial;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeMotion;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeSearch;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeOpen;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeAdd;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeWCO;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeAppBrand;
    NSIndexPath *m_WCTimeLineIndexPath;
    WCDataItem *m_latestSeenDataItem;
    WCDataItem *m_latesetDataItem;
    NSIndexPath *m_lbsIndexPath;
    NSIndexPath *m_shakeIndexPath;
    NSIndexPath *m_bottleIndexPath;
    NSIndexPath *m_gameIndexPath;
    _Bool m_needDoGameSync;
    WCTimeLineViewController *m_timelineViewController;
    MMTimer *m_timelineCacheTimer;
    MMHeadImageView *m_timelineHeadView;
    UIImageView *m_timelineRedDotView;
    _Bool m_inTimeline;
    int m_gameNotifyType;
    _Bool m_bNeedToDestroySelf;
    _Bool m_bBeingAppear;
    NSString *m_gameCenterNoticeID;
    NSString *m_gameCenterAppIDForStat;
    unsigned int _startTime;
    GameIndexSettingControl *m_gameEntrySetting;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)BottlePluginChanged:(_Bool)arg1;
- (void)BottleTotalUnreadCountChanged;
- (void)OnShakeVCDealloc;
- (void)OpenSandyBeach;
- (void)SettingMyAccountExtInfoExit;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkDBAutoRecover;
- (void)checkIfAnimationFail;
- (void)closeAlbum;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)doSelectCell:(long long)arg1;
- (unsigned int)getBottleUnreadCountAtCell;
- (unsigned int)getBottleUnreadCountAtTarbar;
- (long long)getCurrentTotalCount;
- (id)getGameCenterHomeViewController:(int)arg1 EntranceRedDot:(id)arg2;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)goToSandyBeach;
- (void)goToShakeWithAnimate:(_Bool)arg1;
- (void)handleAppBrandCell:(id)arg1;
- (void)handleGameCenterLongPress:(id)arg1;
- (void)handleJDStoreCell:(id)arg1;
- (void)handleSelectedEntryCell:(unsigned long long)arg1;
- (void)handleWCOCell:(id)arg1;
- (id)init;
- (void)initDeepLinkConfig;
- (void)initRow;
- (void)initSearchInfo;
- (void)initTableView;
- (void)initTitle;
- (void)initView;
- (void)layoutGameCell:(id)arg1 rowType:(unsigned long long)arg2;
@property(retain, nonatomic) NSIndexPath *m_bottleIndexPath; // @synthesize m_bottleIndexPath;
@property(retain, nonatomic) NSIndexPath *m_gameIndexPath; // @synthesize m_gameIndexPath;
@property(retain, nonatomic) NSIndexPath *m_lbsIndexPath; // @synthesize m_lbsIndexPath;
@property(retain, nonatomic) NSIndexPath *m_shakeIndexPath; // @synthesize m_shakeIndexPath;
- (void)makeEntryCell:(id)arg1 rowType:(unsigned long long)arg2;
- (void)makeJDStoreEntryCell:(id)arg1;
- (void)makeSearchCell:(id)arg1 rowType:(int)arg2;
- (void)makeWCOEntryCell:(id)arg1;
- (void)makeWeAppEntryCell:(id)arg1 rowType:(int)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCloseAlbumTimeOut;
- (void)onDatabaseReloaded;
- (void)onDidFetchedContent:(id)arg1;
- (void)onDidFetchedNoContentWithError:(unsigned long long)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onFontSizeChange;
- (void)onFriendAssistUnreadCountChanged;
- (void)onGameCenterClearAllRedDot;
- (void)onGameCenterDeleteAllMsg;
- (void)onGameCenterDeleteOneMsg:(unsigned int)arg1;
- (void)onGameCenterEntryIconStatusChanged;
- (void)onGameCenterMessageReceived;
- (void)onGameEntryChanged;
- (void)onGameGiftInfoChanged;
- (void)onGameMessageUnReadCountChanged;
- (void)onGameNewAppCountChanged;
- (void)onHomepageUpdate:(int)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4;
- (void)onJdBussinessEntranceChanged;
- (void)onJdBussinessReloadTip;
- (void)onLabAppSwitchChanged:(id)arg1;
- (void)onLatestWCObjectChanged:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)onMMDynamicConfigUpdated;
- (void)onMarkTimelineListReadWithTid:(id)arg1 andCreateTime:(unsigned long long)arg2;
- (void)onMarkWCObjectAsRead:(id)arg1;
- (void)onMessageUnReadCountChanged;
- (void)onNewGameAdChanged;
- (void)onNotificationShowSettingChanged;
- (void)onReveiceWCMessage:(id)arg1;
- (void)onSearchConfigDataFailToUpdate;
- (void)onSearchConfigDataUpdated;
- (void)onSettingExtChanged:(int)arg1;
- (void)onShakeCardRedDotChange;
- (void)onShakeMsgUnreadCountChanged;
- (void)onShakeStatusChanged;
- (void)onTimeLineViewReturn;
- (void)onWebSearchRedPointChange;
- (void)openAlbum;
- (void)openAlbumAnimated:(_Bool)arg1;
- (void)openBrowseEntry;
- (void)openCameraScan:(int)arg1;
- (void)openFloatBottle;
- (void)openGameCenter:(int)arg1;
- (void)openLBS;
- (void)openNormalShake;
- (void)openSearchEntry;
- (void)openShakeFromInnerWithAnimate:(_Bool)arg1;
- (void)openShakeWithAnimate:(_Bool)arg1;
- (void)openWeAppDestopWithAnimate:(_Bool)arg1;
- (void)pluginsChanged:(id)arg1;
- (id)preOpenAlbumView;
- (void)preloadAppStoreViewContreller;
- (void)promptForProfileExtInfo;
- (void)reloadData;
- (void)reloadGameRow;
- (void)resetRowType;
- (void)resetSectionType;
- (void)selectGameCenterVersion;
- (_Bool)shouldShowBrowseEntry;
- (_Bool)shouldShowSearchEntry;
- (_Bool)shouldShowTabBarBadgeForWCUploadFail;
- (void)statViewOrClickJDCell:(unsigned int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tryInit;
- (void)trySetDefaultHeadImage;
- (void)updateBottleEntryRow;
- (void)updateSearchInfo;
- (void)updateTabBarBadge;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (void)updateWCTimeLineView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

