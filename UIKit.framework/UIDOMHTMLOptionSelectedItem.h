/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIWebSelectedItemPrivate-Protocol.h"

@class DOMHTMLOptionElement;

@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate>
{
    BOOL _selected;
    DOMHTMLOptionElement *_node;
}

@property(retain, nonatomic) DOMHTMLOptionElement *_node; // @synthesize _node;
- (void)dealloc;
- (void)unselect;
- (void)setSelected:(BOOL)arg1;
- (BOOL)selected;
- (id)node;
- (id)initWithHTMLOptionNode:(id)arg1;

@end

