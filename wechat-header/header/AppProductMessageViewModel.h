//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AppUrlMessageViewModel.h"

@class ScanProductItem;

@interface AppProductMessageViewModel : AppUrlMessageViewModel
{
    ScanProductItem *m_productItem;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)additionalAccessibilityDescription;
- (id)cellViewClassName;
- (id)descText;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (_Bool)isShowSourceView;
- (id)productItem;
- (id)sourceTitle;
- (id)thumbImage;
- (id)titleText;

@end
