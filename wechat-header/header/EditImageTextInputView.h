//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "EditImageColorSquareBarDelegate-Protocol.h"
#import "IUiUtilExt-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "textViewDelegate-Protocol.h"

@class EditImageColorSquareBar, MMTextView, NSString, UIButton, UIColor, UIView;
@protocol EditImageTextInputDelegate;

@interface EditImageTextInputView : MMUIView <textViewDelegate, UITextViewDelegate, IUiUtilExt, EditImageColorSquareBarDelegate>
{
    MMTextView *_inputView;
    UIButton *_confirmBtn;
    UIButton *_cancelBtn;
    UIView *_colorBarContainerView;
    EditImageColorSquareBar *_colorBar;
    UIColor *_textColor;
    MMUIView *_translucentView;
    id <EditImageTextInputDelegate> _delegate;
    NSString *_textStr;
    UIView *_textView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EditImageTextInputDelegate> _delegate; // @synthesize _delegate;
@property(copy, nonatomic) NSString *_textStr; // @synthesize _textStr;
@property(retain, nonatomic) UIView *_textView; // @synthesize _textView;
- (void)addBlur;
- (void)addTranslucent;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)dropDownAndRemove;
- (id)init;
- (id)initWithDelegate:(id)arg1 withDefaultText:(id)arg2 withDefaultColor:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onCancel;
- (void)onConfirm;
- (void)onMainWindowFrameChanged;
- (void)setSelectedColorFromSquareBar:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
