//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WebResourceCDNUploadHelperDelegate-Protocol.h"

@class MMTimer, NSString, WebResourceCDNUploadHelper;

@interface WAJSEventHandler_uploadEncryptedFileToCDN : WAJSEventHandler_BaseEvent <WebResourceCDNUploadHelperDelegate>
{
    NSString *_tempFilePath;
    _Bool _isShowProgressTips;
    WebResourceCDNUploadHelper *_cdnUploadHelper;
    MMTimer *uploadTimer;
}

- (void).cxx_destruct;
- (id)assembleResItem:(id)arg1;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (id)init;
- (void)onItemUploadCDNFinishedWithoutMediaId:(int)arg1 Item:(id)arg2;
- (void)onItemUploadProgressWithoutMediaId:(int)arg1 Item:(id)arg2;
- (void)setTimeoutTimer;
- (void)stopUpload;
- (_Bool)uploadLocalResItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
