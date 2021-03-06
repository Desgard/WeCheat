//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURL, UIView, WebViewA8KeyLogicImpl;
@protocol WXCustomWebViewControllerDelegate, YYWebViewInterface;

@protocol WXCustomWebViewControllerProtocol <NSObject>
- (_Bool)allowFayByImage;
- (_Bool)allowScanQRCodeByImage;
- (_Bool)allowShareByImage;
- (void)doJsApiInitEvent;
- (NSDictionary *)extraInfo;
- (void)forceShowCloseButton;
- (NSString *)getCurrentAppId;
- (unsigned int)getCurrentScene;
- (NSString *)getCurrentUrl;
- (NSString *)getInitUrl;
- (void)goToURL:(NSURL *)arg1;
- (void)logUseWebviewSchemeToJumpWithUrl:(NSString *)arg1;
@property(readonly, nonatomic) WebViewA8KeyLogicImpl *m_a8KeyLogicImpl;
@property(nonatomic) _Bool m_bIsJsapiUploadVideoUploading;
@property(readonly, nonatomic) _Bool m_bOfflinePage;
@property(copy, nonatomic) CDUnknownBlockType m_blockOnWebViewDidTerminate;
@property(nonatomic) __weak id <WXCustomWebViewControllerDelegate> m_delegate;
@property(retain, nonatomic) NSMutableDictionary *m_extraInfo;
@property(readonly, nonatomic) NSString *m_initUrl;
- (void)sendEventToJSBridge:(NSString *)arg1 Param:(NSDictionary *)arg2;
- (void)setDisableWebAlertView:(_Bool)arg1;
@property(retain, nonatomic) UIView<YYWebViewInterface> *webView;
- (void)startupPreVerifyJSAPI:(NSDictionary *)arg1 failHandleBlock:(void (^)(NSDictionary *))arg2;
@end

