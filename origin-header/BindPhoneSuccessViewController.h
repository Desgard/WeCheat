//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMTableViewInfo;
@protocol BindPhoneSuccessViewControllerDelegate;

@interface BindPhoneSuccessViewController : MMUIViewController
{
    id <BindPhoneSuccessViewControllerDelegate> _delegate;
    MMTableViewInfo *_tableViewInfo;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BindPhoneSuccessViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning;
- (void)initTableView;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
- (void)showBindedView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

