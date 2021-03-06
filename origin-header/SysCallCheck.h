//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "AVAudioSessionDelegate-Protocol.h"
#import "JSEventExt-Protocol.h"
#import "MMService-Protocol.h"

@class CTCallCenter, NSString;

@interface SysCallCheck : MMService <MMService, JSEventExt, AVAudioSessionDelegate>
{
    _Bool mIsNeedRestartAudioTalk;
    _Bool mIsInterrupting;
    CTCallCenter *mCallCenter;
}

- (void).cxx_destruct;
- (void)OnMediaPlayStateChanged:(id)arg1;
- (void)appBecomeActive;
- (void)audioSessionInterruption:(id)arg1;
- (void)beginInterruption;
- (void)callBegin;
- (void)callEnd;
- (void)clearInterruptStatus;
- (void)delayRestartTalk;
- (void)endInterruption;
- (void)inputIsAvailableChanged:(_Bool)arg1;
- (_Bool)isInterrupting;
- (_Bool)isPhoneCalling;
- (void)jsAudioStateChanged:(id)arg1;
- (void)jsVideoStateChanged:(id)arg1;
@property(retain, nonatomic) CTCallCenter *mCallCenter; // @synthesize mCallCenter;
@property(nonatomic) _Bool mIsInterrupting; // @synthesize mIsInterrupting;
@property(nonatomic) _Bool mIsNeedRestartAudioTalk; // @synthesize mIsNeedRestartAudioTalk;
- (void)onServiceClearData;
- (void)pauseTalk;
- (void)playBegin;
- (void)playEnd;
- (void)restartTalk;
- (void)startCheck;
- (void)stopCheck;
- (void)swithAudioRoute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

