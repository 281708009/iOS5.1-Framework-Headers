/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UILabel;

@interface ABLabelViewWithVariablePositioning : UIView
{
    UILabel *_label;
    float _topPadding;
    float _bottomPadding;
    float _horizontalPadding;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setLabelFont:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setLabelTextColor:(id)arg1;
- (void)setLabelShadowColor:(id)arg1;
- (void)setLabelShadowOffset:(struct CGSize)arg1;
@property(nonatomic) float topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) float bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) float horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
- (void)layoutSubviews;

@end

