/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIViewController;

@interface UIViewControllerAction : NSObject
{
    UIViewController *_viewController;
    NSString *_name;
    BOOL _animated;
    id _completion;
}

@property(copy, nonatomic) id completion; // @synthesize completion=_completion;
@property(nonatomic) BOOL animated; // @synthesize animated=_animated;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 name:(id)arg2 animated:(BOOL)arg3;

@end

