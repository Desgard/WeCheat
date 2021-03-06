//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTipsViewController.h"

@class MMUILabel, NSMutableArray, NSString, UIButton, UIImageView, UIView;

@interface WCPayTipsViewController : MMTipsViewController
{
    unsigned long long _tipsType;
    NSString *_tipsTitle;
    NSString *_tipsContent;
    NSString *_tipsImgName;
    NSMutableArray *_btnTitleArray;
    NSMutableArray *_btnArray;
    UIButton *_backgroundBtn;
    UIImageView *_contentBg;
    UIImageView *_tipsImgView;
    UIView *_tipsDesView;
    UIView *_contentView;
    MMUILabel *_tipsTitleLabel;
    MMUILabel *_tipsContentLabel;
    UIView *_customView;
    _Bool _isBlurBg;
    UIView *_blurView;
    _Bool bIsForbidCancelBtn;
    _Bool _allGreenButton;
    unsigned long long m_tipsImageLocation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allGreenButton; // @synthesize allGreenButton=_allGreenButton;
- (_Bool)bIsForbidCancelBtn;
- (id)bulidNSAttributedStringText:(id)arg1;
- (void)configBlurBgOnView:(id)arg1;
- (id)create6Or6pFirstLoginView;
- (void)createContainImgTips;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
- (id)getBtnAtIndex:(unsigned int)arg1;
- (id)getContentImageView;
- (id)getContentView;
- (void)hideTips;
- (id)initIphone6LoginTipsWithTitle:(id)arg1 andContent:(id)arg2 andCancelText:(id)arg3;
- (id)initWithTitle:(id)arg1 andContent:(id)arg2 andBtn:(id)arg3;
- (id)initWithTitle:(id)arg1 andImageName:(id)arg2 andContent:(id)arg3 andCancelText:(id)arg4;
- (id)m_imageName;
- (id)m_tipsContentLabel;
- (unsigned long long)m_tipsImageLocation;
- (id)m_tipsTitleLabel;
- (void)onClickBtn:(id)arg1;
- (void)removeAllBtn;
- (void)setBIsForbidCancelBtn:(_Bool)arg1;
- (void)setButtonsEnable:(_Bool)arg1;
- (void)setM_imageName:(id)arg1;
- (void)setM_tipsContentLabel:(id)arg1;
- (void)setM_tipsImageLocation:(unsigned long long)arg1;
- (void)setM_tipsTitleLabel:(id)arg1;
- (void)updateSubViewsFrame;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

