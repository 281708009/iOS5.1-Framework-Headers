/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TWDSessionProxy;

@interface TWInFlightSessionCallInfo : NSObject
{
    id _remoteCall;
    TWDSessionProxy *_sessionProxy;
}

@property(nonatomic) TWDSessionProxy *sessionProxy; // @synthesize sessionProxy=_sessionProxy;
@property(copy, nonatomic) id remoteCall; // @synthesize remoteCall=_remoteCall;
- (void)dealloc;

@end

