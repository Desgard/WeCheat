//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMLoadingView;
@protocol ImageScrollViewDelegate;

@interface MsgImageDownloadView : MMUIView
{
    MMLoadingView *m_loadingView;
    id <ImageScrollViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)initGestureRecognizer;
- (id)initWithFrame:(struct CGRect)arg1;
@property __weak id <ImageScrollViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMLoadingView *m_loadingView; // @synthesize m_loadingView;
- (void)onSingleTap:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end

