/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class EKEventOccurrenceListItem;

@interface CalendarOccurrenceCell : UITableViewCell
{
    EKEventOccurrenceListItem *_view;
}

- (id)_scriptingInfo;
- (unsigned int)isCancelled;
- (unsigned int)isAllDay;
- (unsigned int)designator;
- (void)setShowsColors:(BOOL)arg1;
- (void)setDotColor:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setTentative:(BOOL)arg1;
- (void)setIsEndDate:(BOOL)arg1;
- (void)setStartDate:(double)arg1;
- (void)setIsBirthday:(BOOL)arg1;
- (void)setIsAllDay:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)updateWithEvent:(id)arg1;
- (BOOL)showDisclosure;
- (void)dealloc;
- (id)init;
- (id)initWithEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 location:(id)arg3 startDate:(double)arg4 allDay:(BOOL)arg5 tentative:(BOOL)arg6;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

