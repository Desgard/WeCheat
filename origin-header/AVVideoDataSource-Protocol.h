//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage;

@protocol AVVideoDataSource <NSObject>

@optional
- (void)DidCapturedImage:(UIImage *)arg1;
- (int)GetFrmType;
- (int)VideoDevPutData:(int)arg1 frmData:(char *)arg2 imageWidth:(unsigned int)arg3 imageHeight:(unsigned int)arg4;
- (void)captureVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@end
