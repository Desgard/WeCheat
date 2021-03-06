//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"

@class CdnComMediaInfo, NSString;
@protocol WCRedEnvelopesCdnManagerDelegate;

@interface WCRedEnvelopesCdnManager : NSObject <ICdnComMgrExt>
{
    id <WCRedEnvelopesCdnManagerDelegate> _delegate;
    CdnComMediaInfo *_currentUploadingMediaInfo;
    CdnComMediaInfo *_currentDownloadingMediaInfo;
}

- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
@property(retain, nonatomic) CdnComMediaInfo *currentDownloadingMediaInfo; // @synthesize currentDownloadingMediaInfo=_currentDownloadingMediaInfo;
@property(retain, nonatomic) CdnComMediaInfo *currentUploadingMediaInfo; // @synthesize currentUploadingMediaInfo=_currentUploadingMediaInfo;
- (void)dealloc;
@property(nonatomic) __weak id <WCRedEnvelopesCdnManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)downloadImage:(id)arg1;
- (id)init;
- (void)stopDownloadImage;
- (void)stopUploadImage;
- (_Bool)uploadImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

