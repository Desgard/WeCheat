//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WCListViewController;

@protocol WCListViewDelegate <NSObject>
- (void)onDataChanged:(NSArray *)arg1;
- (void)refreshFooterEnd:(unsigned int)arg1;
- (void)refreshHeaderEnd:(unsigned int)arg1;
- (void)reloadBackGround;
@property(nonatomic) WCListViewController *viewController;
- (void)shouldReloadData:(NSArray *)arg1;

@optional
- (void)didReceiveMemoryWarning;
- (void)onNoMoreDataWithRet:(int)arg1;
@end

