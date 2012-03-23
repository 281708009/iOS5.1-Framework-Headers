/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class MFHeaderLabelView, NSString;

@interface MFComposeHeaderView : UIView
{
    NSString *_label;
    NSString *_navTitle;
    MFHeaderLabelView *_labelView;
    id _delegate;
    UIView *_separator;
}

+ (float)defaultHeight;
- (struct CGColor *)labelColor;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setNavTitle:(id)arg1;
- (id)navTitle;
- (void)setLabel:(id)arg1;
- (void)setLabelHighlighted:(BOOL)arg1;
- (float)maxLabelX;
- (BOOL)_canBecomeFirstResponder;
- (void)handleTouchesEnded;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

