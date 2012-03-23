/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ADXPCConnection, NSString;

@interface ADRemoteInvocationProxy : NSObject
{
    ADXPCConnection *_connection;
    NSString *_messageName;
    NSString *_identifier;
    id _connectionDelegate;
}

@property(nonatomic) id connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(retain, nonatomic) ADXPCConnection *connection; // @synthesize connection=_connection;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)sendMessage:(id)arg1;
@property(readonly, nonatomic) BOOL available;
- (void)dealloc;

@end

