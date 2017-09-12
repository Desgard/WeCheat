//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "MMImageLoaderObserver-Protocol.h"

@class MMTimer, NSString, NSURL;
@protocol MMImageLoadingTaskDelegate;

@interface MMImageLoadingTask : MMObject <MMImageLoaderObserver>
{
    NSURL *_url;
    MMTimer *_timeoutTimer;
    id <MMImageLoadingTaskDelegate> _delegate;
    id _userInfo;
}

- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <MMImageLoadingTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithURL:(id)arg1 userInfo:(id)arg2;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
- (_Bool)startLoadingWithTimeout:(double)arg1;
- (void)startTimerWithTimeout:(double)arg1;
- (void)stopTimeoutTimer;
- (void)timeoutHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
