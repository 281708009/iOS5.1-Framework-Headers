/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIAlertView.h"

@class UIView;

@interface GKAlertView : UIAlertView
{
    UIView *_clipView;
    UIView *_contentView;
}

+ (struct CGSize)preferredContentViewSize;
+ (void)initialize;
- (void)dealloc;
- (void)setContentView:(id)arg1 animated:(BOOL)arg2;
- (id)contentView;
- (void)_changePanelInAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_changePanelOutAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_replaceContentView:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_canDrawContent;
- (void)layoutAnimated:(BOOL)arg1;
- (id)initAlertView;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

@end

