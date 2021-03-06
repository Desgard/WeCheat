//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSDictionary, NSMutableArray, UIButton, UIColor, UIFont, UIView;
@protocol DropdownMenuDataSource, DropdownMenuDelegate;

@interface DropdownMenu : MMObject
{
    UIFont *_submenuTitleFont;
    UIColor *_submenuTitleColor;
    struct CGSize _mainItemSize;
    struct CGSize _submenuItemSize;
    double _animationDuration;
    int _position;
    int _unfoldDirection;
    long long _indexOfOpenSubmenu;
    NSMutableArray *_subItemTitles;
    _Bool _isExpand;
    id <DropdownMenuDelegate> _delegate;
    id <DropdownMenuDataSource> _dataSource;
    UIView *_canvasView;
    UIButton *_mainItemBtn;
    UIView *_submenuView;
    NSDictionary *_options;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *canvasView; // @synthesize canvasView=_canvasView;
- (void)closeSubmenu;
@property(nonatomic) __weak id <DropdownMenuDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)dealloc;
@property(nonatomic) __weak id <DropdownMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchData;
- (id)init;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
- (void)itemTapped:(id)arg1;
@property(nonatomic) __weak UIButton *mainItemBtn; // @synthesize mainItemBtn=_mainItemBtn;
- (void)openSubmenu;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(nonatomic) int position; // @synthesize position=_position;
- (void)reloadData;
- (void)renderSubmenu;
@property(retain, nonatomic) UIView *submenuView; // @synthesize submenuView=_submenuView;
@property(nonatomic) int unfoldDirection; // @synthesize unfoldDirection=_unfoldDirection;
- (void)setupDefaults;
- (void)updateMainItem:(id)arg1 withTitle:(id)arg2;

@end

