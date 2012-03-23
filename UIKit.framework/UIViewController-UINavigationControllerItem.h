/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

@class UINavigationController, UINavigationItem;

@interface UIViewController (UINavigationControllerItem)
- (void)_setSuppressesBottomBar:(BOOL)arg1;
- (BOOL)_suppressesBottomBar;
@property(nonatomic) BOOL hidesBottomBarWhenPushed;
@property(readonly, nonatomic) UINavigationController *navigationController;
- (BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (void)_toggleEditing:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
- (BOOL)isEditing;
- (id)editButtonItem;
- (void)_editingAnimationFinished;
@property(readonly, nonatomic) UINavigationItem *navigationItem;
@end

