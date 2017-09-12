//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "ShakeCheckerDelegate-Protocol.h"

@class CShakeChecker, MMUIWindow, NSString;
@protocol ShakeControllerDelegate;

@interface ShakeController : MMObject <ShakeCheckerDelegate>
{
    CShakeChecker *_shakeChecker;
    _Bool _bIsShakeViewShow;
    MMUIWindow *_shakeWindow;
    id <ShakeControllerDelegate> _shakeControllerDelegate;
}

- (void).cxx_destruct;
- (void)OnShake;
- (void)Register;
- (void)Reset;
- (void)StartShakeCheck;
- (void)StopShakeCheck;
- (void)UnRegister;
- (void)hideWindowAnimated:(_Bool)arg1;
- (id)init;
- (_Bool)isEarEnabled;
- (void)onCancel:(id)arg1;
- (void)onConfirm:(id)arg1;
- (void)onTouchBackground:(id)arg1;
- (void)setForceEarpieceMode:(_Bool)arg1;
@property(nonatomic) __weak id <ShakeControllerDelegate> shakeControllerDelegate; // @synthesize shakeControllerDelegate=_shakeControllerDelegate;
- (void)showWindowAnimated:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
