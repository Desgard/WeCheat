//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, UITableView, UIView;
@protocol WASearchGuideDelegate, WASearchGuideViewDataSource;

@interface WASearchGuideView : MMUIView <UITableViewDelegate, UITableViewDataSource>
{
    id <WASearchGuideDelegate> _delegate;
    id <WASearchGuideViewDataSource> _dataSource;
    UITableView *_tableView;
    UIView *_whiteLayerView;
    NSMutableArray *_cellInfos;
    NSDictionary *_nearAppInfo;
}

- (void).cxx_destruct;
- (void)addBlurEffectForView:(id)arg1 atPoint:(struct CGPoint)arg2;
@property(retain, nonatomic) NSMutableArray *cellInfos; // @synthesize cellInfos=_cellInfos;
@property(nonatomic) __weak id <WASearchGuideViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WASearchGuideDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initCellInfo;
- (void)initSubViews;
- (void)initTableView;
- (void)initWhiteLayerView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSDictionary *nearAppInfo; // @synthesize nearAppInfo=_nearAppInfo;
- (void)onTap:(id)arg1;
- (void)reload;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *whiteLayerView; // @synthesize whiteLayerView=_whiteLayerView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

