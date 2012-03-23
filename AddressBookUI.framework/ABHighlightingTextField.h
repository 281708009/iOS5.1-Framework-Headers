/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITextField.h"

@class UIColor;

@interface ABHighlightingTextField : UITextField
{
    BOOL _isHighlighted;
    BOOL _isHighlightingEnabled;
    UIColor *_savedTextColor;
    UIColor *_highlightedTextColor;
    BOOL _showsClearButtonWhenEmpty;
    id <ABResponderDelegate> _responderDelegate;
}

- (void)dealloc;
@property(nonatomic, setter=abSetHighlighted:) BOOL abIsHighlighted; // @synthesize abIsHighlighted=_isHighlighted;
- (void)setTextColor:(id)arg1;
@property(nonatomic) BOOL showsClearButtonWhenEmpty; // @synthesize showsClearButtonWhenEmpty=_showsClearButtonWhenEmpty;
- (BOOL)_showsClearButtonWhenEmpty;
- (BOOL)becomeFirstResponder;
- (id)_nextKeyResponder;
- (id)_previousKeyResponder;
@property(nonatomic) id <ABResponderDelegate> responderDelegate; // @synthesize responderDelegate=_responderDelegate;
@property(retain, nonatomic, setter=abSetHighlightedTextColor:) UIColor *abHighlightedTextColor; // @synthesize abHighlightedTextColor=_highlightedTextColor;
@property(nonatomic, setter=abSetHighlightingEnabled:) BOOL abIsHighlightingEnabled; // @synthesize abIsHighlightingEnabled=_isHighlightingEnabled;

@end

