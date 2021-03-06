//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, WebviewResDownloadingItem;
@protocol WebviewResourceDownloadHelperDelegate;

@interface WebviewResourceDownloadHelper : MMObject <PBMessageObserverDelegate>
{
    _Bool _isDownloading;
    NSMutableArray *_downloadArray;
    id <WebviewResourceDownloadHelperDelegate> _delegate;
    WebviewResDownloadingItem *_curDownloadingItem;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)addDownloadItem:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <WebviewResourceDownloadHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleDownloadResItemResp:(id)arg1;
- (id)init;
- (void)sendDownloadRequest;
- (void)sendNextResItem;
- (_Bool)startDownload;
- (_Bool)stopDownload;

@end

