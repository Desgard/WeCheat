//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "MMResourceDownloadDelegate-Protocol.h"

@class MMResourceDownloadTaskContext, MMResourceDownloader, NSString;
@protocol MMResourceDownloadDelegate;

@interface MMResourceDownloadTask : NSOperation <MMResourceDownloadDelegate>
{
    NSString *_resUrl;
    MMResourceDownloadTaskContext *_context;
    MMResourceDownloader *_downloader;
    long long _retryCnt;
    long long _currentCnt;
    id <MMResourceDownloadDelegate> _downloadDelegate;
    _Bool _bExecuting;
    _Bool _bFinished;
    _Bool _bCancelled;
}

- (void).cxx_destruct;
- (void)cancelDownload;
@property(readonly, retain, nonatomic) MMResourceDownloadTaskContext *context; // @synthesize context=_context;
@property(nonatomic) long long currentCnt; // @synthesize currentCnt=_currentCnt;
- (void)dealloc;
@property(nonatomic) id <MMResourceDownloadDelegate> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
- (void)emptyThreadTimer:(id)arg1;
- (id)initWithResUrl:(id)arg1 context:(id)arg2;
- (_Bool)isConcurrent;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (void)onDownloadFinish:(long long)arg1 downloadData:(id)arg2 resUrl:(id)arg3;
@property(readonly, copy, nonatomic) NSString *resUrl; // @synthesize resUrl=_resUrl;
@property(nonatomic) long long retryCnt; // @synthesize retryCnt=_retryCnt;
- (void)start;
- (void)startDownload;
- (void)startRunloop:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

