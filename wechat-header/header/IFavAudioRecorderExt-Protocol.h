//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol IFavAudioRecorderExt

@optional
- (void)OnFavBeginRecording:(int)arg1;
- (void)OnFavEndRecording:(NSString *)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnFavFinishRecord:(NSString *)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnFavLevelMeter:(float)arg1;
@end
