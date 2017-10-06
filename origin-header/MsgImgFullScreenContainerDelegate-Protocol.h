//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIGestureRecognizer, UIImage, UIScrollView, UIView;

@protocol MsgImgFullScreenContainerDelegate <NSObject>
- (UIImage *)imageAtPage:(unsigned int)arg1;
- (UIView *)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;

@optional
- (void)ImageScrollViewWillBeginZooming:(UIScrollView *)arg1 withView:(UIView *)arg2;
- (NSString *)imagePathAtPage:(unsigned int)arg1;
- (void)multiImageScrollViewDidEndScrolling;
- (void)multiImageScrollViewDidScroll;
- (void)multiImageScrollViewWillBeginDragging;
- (void)onChangePage;
- (void)onChangePageEnd;
- (void)onDoubleTap:(UIGestureRecognizer *)arg1;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onLongPress:(id)arg1;
- (void)onLongPressBegin:(id)arg1;
- (void)onSingleTap:(UIGestureRecognizer *)arg1;
@end
