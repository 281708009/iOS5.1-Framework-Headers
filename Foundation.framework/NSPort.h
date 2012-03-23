/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface NSPort : NSObject <NSCopying, NSCoding>
{
}

+ (id)portWithMachPort:(unsigned int)arg1;
+ (id)port;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned int)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned int)arg5;
- (BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned int)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (Class)classForPortCoder;
- (id)replacementObjectForCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)reservedSpaceLength;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)machPort;
- (BOOL)isValid;
- (void)invalidate;
- (id)initWithMachPort:(unsigned int)arg1;

@end

