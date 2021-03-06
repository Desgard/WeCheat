//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, UILabel, UIView, WCPayOverseaPayFunctionObject;

@interface WCPayOverseaMainWalletCell : UICollectionViewCell
{
    MMWebImageView *_m_iconView;
    MMWebImageView *_m_foregroundIconView;
    UILabel *_m_nameLabel;
    WCPayOverseaPayFunctionObject *_m_data;
    UIView *_m_wLine;
    UIView *_m_hLine;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) WCPayOverseaPayFunctionObject *m_data; // @synthesize m_data=_m_data;
@property(retain, nonatomic) MMWebImageView *m_foregroundIconView; // @synthesize m_foregroundIconView=_m_foregroundIconView;
@property(retain, nonatomic) UIView *m_hLine; // @synthesize m_hLine=_m_hLine;
@property(retain, nonatomic) MMWebImageView *m_iconView; // @synthesize m_iconView=_m_iconView;
@property(retain, nonatomic) UILabel *m_nameLabel; // @synthesize m_nameLabel=_m_nameLabel;
@property(retain, nonatomic) UIView *m_wLine; // @synthesize m_wLine=_m_wLine;
- (void)setHighlighted:(_Bool)arg1;
- (void)setNewHidden:(_Bool)arg1;
- (void)updateCellData:(id)arg1;
- (void)updateForegroundIconView;
- (void)updateIconView;
- (void)updateLine;
- (void)updateNameLabel;
- (void)updateView;

@end

