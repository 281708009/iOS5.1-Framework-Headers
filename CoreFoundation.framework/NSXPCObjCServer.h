/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreFoundation/NSObject.h>

#import "NSXPCObject-Protocol.h"

@class NSMutableArray, NSString, NSXPCServer, Protocol;

@interface NSXPCObjCServer : NSObject <NSXPCObject>
{
    NSXPCServer *_server;
    int _lock;
    NSString *_serviceName;
    Protocol *_protocol;
    Class _class;
    NSMutableArray *_invalidHandlers;
    int _started;
    int _invalid;
}

- (void)start;
- (void)addInvalidationHandler:(id)arg1;
- (void)invalidate;
- (void)__invalidate;
@property(retain) Class clientClass; // @dynamic clientClass;
@property(retain) Protocol *clientProtocol; // @dynamic clientProtocol;
@property(copy) NSString *serviceName; // @dynamic serviceName;
- (void)dealloc;
- (id)init;

@end

