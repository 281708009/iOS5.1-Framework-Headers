/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class ABModel;

@interface ABAbstractViewController : UIViewController
{
    ABModel *_model;
    id <ABStyleProvider> _styleProvider;
}

- (id)initWithModel:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setAddressBook:(void *)arg1;
- (void)dealloc;
- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_getRotationContentSettings:(CDStruct_af7d35ee *)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)setParentViewController:(id)arg1;
- (struct CGSize)contentSize;
- (id)peoplePickerNavigationController;
- (int)behavior;
- (void)updateNavigationButtons;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) ABModel *model; // @synthesize model=_model;

@end

