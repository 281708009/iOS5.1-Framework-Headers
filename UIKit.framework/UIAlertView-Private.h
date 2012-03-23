/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIAlertView.h>

@interface UIAlertView (Private)
+ (id)_popupAlertBackground:(BOOL)arg1;
+ (void)applyTransformToAllAlerts:(struct CGAffineTransform)arg1;
+ (id)_alertWindow;
+ (struct CGSize)minimumSize;
- (BOOL)_isSBAlert;
- (void)_nukeOldTextFields;
- (void)_addSubview:(id)arg1 positioned:(int)arg2 relativeTo:(id)arg3;
- (void)removeFromSuperview;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)_handleKeyEvent:(struct __GSEvent *)arg1;
- (void)_prepareToBeReplaced;
- (void)replaceAlert:(id)arg1;
- (void)_prepareForDisplay;
- (void)presentSheetFromButtonBar:(id)arg1;
- (void)layout;
- (void)_truncateViewHeight:(id)arg1 toFitInFrame:(struct CGRect)arg2 withMinimumHeight:(float)arg3;
- (int)numberOfLinesInTitle;
- (float)_buttonHeight;
- (float)_maxHeight;
- (struct CGRect)titleRect;
- (BOOL)runsModal;
- (void)setRunsModal:(BOOL)arg1;
- (BOOL)blocksInteraction;
- (void)setBlocksInteraction:(BOOL)arg1;
- (int)suspendTag;
- (void)setSuspendTag:(int)arg1;
- (BOOL)dimsBackground;
- (void)setDimsBackground:(BOOL)arg1;
- (void)setAlertSheetStyle:(int)arg1;
- (BOOL)forceHorizontalButtonsLayout;
- (void)setForceHorizontalButtonsLayout:(BOOL)arg1;
- (int)alertSheetStyle;
- (int)numberOfRows;
- (void)setNumberOfRows:(int)arg1;
- (void)_alertSheetAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_appSuspended:(id)arg1;
- (float)_bottomVerticalInset;
- (float)_titleHorizontalInset;
- (float)_titleVerticalBottomInset;
- (float)_titleVerticalTopInset;
- (struct CGSize)backgroundSize;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dismiss;
- (void)_slideSheetOut:(BOOL)arg1;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1;
- (id)_dimView;
- (void)setDimView:(id)arg1;
- (void)presentSheetToAboveView:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)presentSheetFromAboveView:(id)arg1;
- (void)presentSheetFromBehindView:(id)arg1;
- (void)_presentSheetFromView:(id)arg1 above:(BOOL)arg2;
- (void)popupAlertAnimated:(BOOL)arg1;
- (void)popupAlertAnimated:(BOOL)arg1 animationType:(int)arg2;
- (void)popupAlertAnimated:(BOOL)arg1 atOffset:(float)arg2;
- (void)popupAlertAnimated:(BOOL)arg1 animationType:(int)arg2 atOffset:(float)arg3;
- (void)_adjustLabelFontSizes;
- (void)_layoutIfNeeded;
- (void)_layoutPopupAlertWithOrientation:(int)arg1 animated:(BOOL)arg2;
- (int)_alertOrientation;
- (BOOL)isBodyTextTruncated;
- (void)layoutAnimated:(BOOL)arg1;
- (id)taglineTextLabel;
- (id)bodyTextLabel;
- (id)titleLabel;
- (void)_rotatingAnimationDidStop:(id)arg1;
- (void)_updateFrameForDisplay;
- (void)_cancelAnimated:(BOOL)arg1;
- (void)_temporarilyHideAnimated:(BOOL)arg1;
- (void)_removeAlertWindowOrShowAnOldAlert;
- (BOOL)_canShowAlerts;
- (BOOL)_dimsBackground;
- (void)_repopup;
- (void)_repopupNoAnimation;
- (void)_performPopoutAnimationAnimated:(BOOL)arg1;
- (void)_popoutAnimationDidStop:(id)arg1 finished:(id)arg2;
- (BOOL)_isAnimating;
- (void)_jiggleStage6AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_jiggleStage5AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_jiggleStage4AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_jiggleStage3AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_jiggleStage2AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_jiggleStage1AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_bubbleAnimationNormalDidStop:(id)arg1 finished:(id)arg2;
- (void)_bubbleAnimationShrinkDidStop:(id)arg1 finished:(id)arg2;
- (void)_growAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_performPopup:(BOOL)arg1;
- (void)_performPopup:(BOOL)arg1 animationType:(int)arg2;
- (void)_showKeyboard:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_showManualKBIfNecessary;
- (void)_keyboardHiddingAnimationDidStop:(id)arg1 finished:(id)arg2;
- (BOOL)showsOverSpringBoardAlerts;
- (void)setShowsOverSpringBoardAlerts:(BOOL)arg1;
- (BOOL)_shouldOrderInAutomaticKeyboard;
- (BOOL)_needsKeyboard;
- (BOOL)_manualKeyboardIsVisible;
- (id)table;
- (id)tableView;
- (BOOL)tableShouldShowMinimumContent;
- (void)setTableShouldShowMinimumContent:(BOOL)arg1;
- (void)_cleanupAfterPopupAnimation;
- (void)_buttonClicked:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (int)buttonCount;
- (id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2 buttonClass:(Class)arg3;
- (id)_firstOtherButton;
- (id)_destructiveButton;
- (void)_setDestructiveButton:(id)arg1;
- (id)_buttonAtIndex:(int)arg1;
- (id)_addButtonWithTitleText:(id)arg1;
- (id)_defaultButton;
- (void)_setDefaultButton:(id)arg1;
- (id)destructiveButton;
- (void)setDestructiveButton:(id)arg1;
- (id)buttonAtIndex:(int)arg1;
- (id)_addButtonWithTitle:(id)arg1;
- (id)defaultButton;
- (void)setDefaultButton:(id)arg1;
- (id)keyboard;
- (void)_cleanupKBWatcher;
- (void)_setupKBWatcher;
- (void)_alertSheetTextFieldReturn:(id)arg1;
- (void)_updateKeyboardStateForPreviousResponder:(id)arg1;
- (void)_alertSheetTextFieldDidChange:(id)arg1;
- (void)_alertSheetTextFieldDidStartEditing:(id)arg1;
- (void)_alertSheetTextFieldDidEndEditing:(id)arg1;
- (void)setKeyboardShowsOnPopup:(BOOL)arg1;
- (id)textField;
- (int)textFieldCount;
- (id)_textFieldAtIndex:(int)arg1;
- (void)_setTextFieldsHidden:(BOOL)arg1;
- (id)_addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (int)bodyMaxLineCount;
- (void)setBodyTextMaxLineCount:(int)arg1;
- (int)titleMaxLineCount;
- (void)setTitleMaxLineCount:(int)arg1;
- (id)bodyText;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)setTaglineText:(id)arg1;
- (void)setBodyText:(id)arg1;
- (void)_setupTitleStyle;
- (void)_createTaglineTextLabelIfNeeded;
- (void)_createBodyTextLabelIfNeeded;
- (void)_createSubtitleLabelIfNeeded;
- (void)_createTitleLabelIfNeeded;
- (id)buttons;
- (void)_setAlertSheetStyleFromButtonBar:(id)arg1;
- (int)_currentOrientation;
- (BOOL)requiresPortraitOrientation;
- (void)setGroupsTextFields:(BOOL)arg1;
- (BOOL)groupsTextFields;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;
@end

