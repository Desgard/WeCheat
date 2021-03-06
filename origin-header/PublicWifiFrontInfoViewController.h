//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "IPublicWifiManagerExt-Protocol.h"
#import "PublicWifiCompletePageViewControllerDelegate-Protocol.h"
#import "PublicWifiConnectedViewControllerDelegate-Protocol.h"
#import "PublicWifiViewControllerDelegate-Protocol.h"
#import "WCAccountBindPhoneControlLogicDelegate-Protocol.h"

@class APBase, MMScrollView, MMWebImageView, NSString, RichTextView, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView, WCAccountBindPhoneControlLogic, WCBizLoadingView;
@protocol PublicWifiFrontInfoViewControllerDelegate;

@interface PublicWifiFrontInfoViewController : MMUIViewController <IPublicWifiManagerExt, ILinkEventExt, PublicWifiViewControllerDelegate, PublicWifiConnectedViewControllerDelegate, PublicWifiCompletePageViewControllerDelegate, WCAccountBindPhoneControlLogicDelegate>
{
    _Bool _isGuideViewShowed;
    _Bool _isLoading;
    id <PublicWifiFrontInfoViewControllerDelegate> _delegate;
    UIImageView *_logoImageView;
    WCBizLoadingView *_connectingView;
    UIView *_grayView;
    MMScrollView *_scrollView;
    MMWebImageView *_brandImage;
    UILabel *_brandNameLbl;
    UILabel *_ssidLbl;
    RichTextView *_failedLbl;
    UIButton *_confirmBtn;
    UIButton *_connectingBtn;
    UIActivityIndicatorView *_loadingView;
    RichTextView *_helpTextView;
    UILabel *_phoneNumNoticeLbl;
    APBase *_apbase;
    unsigned long long _viewState;
    WCAccountBindPhoneControlLogic *_m_bindLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) APBase *apbase; // @synthesize apbase=_apbase;
- (void)autoContinueWithProto3;
@property(retain, nonatomic) MMWebImageView *brandImage; // @synthesize brandImage=_brandImage;
@property(retain, nonatomic) UILabel *brandNameLbl; // @synthesize brandNameLbl=_brandNameLbl;
- (void)buttonPressed:(id)arg1;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *connectingBtn; // @synthesize connectingBtn=_connectingBtn;
@property(retain, nonatomic) WCBizLoadingView *connectingView; // @synthesize connectingView=_connectingView;
- (void)dealStatusChanged:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <PublicWifiFrontInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doBack;
@property(retain, nonatomic) RichTextView *failedLbl; // @synthesize failedLbl=_failedLbl;
- (id)genConnecttingButton;
- (id)genFailRichTextView;
- (id)genPhoneNumNoticeTbl;
- (id)genRichTextView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)getWelcomMsg;
@property(retain, nonatomic) UIView *grayView; // @synthesize grayView=_grayView;
@property(retain, nonatomic) RichTextView *helpTextView; // @synthesize helpTextView=_helpTextView;
- (id)init;
- (void)initViewForReadyState;
- (id)initWithApBase:(id)arg1;
@property(nonatomic) _Bool isGuideViewShowed; // @synthesize isGuideViewShowed=_isGuideViewShowed;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void)jumpToBrandProfile;
- (float)largeSapce;
- (void)layout;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) WCAccountBindPhoneControlLogic *m_bindLogic; // @synthesize m_bindLogic=_m_bindLogic;
- (void)onBackToMainUI;
- (void)onBind;
- (void)onCancel;
- (void)onConfirmToConnect;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onPublicWifiStatusChangedWithApBase:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
@property(retain, nonatomic) UILabel *phoneNumNoticeLbl; // @synthesize phoneNumNoticeLbl=_phoneNumNoticeLbl;
@property(retain, nonatomic) MMScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *ssidLbl; // @synthesize ssidLbl=_ssidLbl;
@property(nonatomic) unsigned long long viewState; // @synthesize viewState=_viewState;
- (void)showBindPhoneView;
- (void)showConnenctedViewController;
- (float)smallSapce;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)wifiCompletePageViewControlerWillDone:(_Bool)arg1;
- (void)wifiConnenctedViewControlerWillDone:(_Bool)arg1;
- (void)wifiViewControllerWillGoBack;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

