//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseMessageCellView.h"

@class WCPayTransferMessageViewModel;

@interface WCPayTransferMessageCellView : WCPayBaseMessageCellView
{
}

- (void)OnRetrySendMsg;
- (void)initTitleLabel;
- (void)layoutContentView;
- (id)operationMenuItems;
- (void)updateBgImageView;
- (void)updateStatus;

// Remaining properties
@property(readonly, nonatomic) WCPayTransferMessageViewModel *viewModel; // @dynamic viewModel;

@end

