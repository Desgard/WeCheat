//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMDBRestoreReport : NSObject
{
}

- (void)reportClearRestore;
- (void)reportRestoreFailed:(id)arg1 isAutoRestore:(_Bool)arg2;
- (void)reportRestoreShow:(_Bool)arg1;
- (void)reportRestoreStart:(_Bool)arg1;
- (void)reportRestoreSucceed:(_Bool)arg1;

@end

