/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreFoundation/__NSCFType.h>

@interface __NSCFString : __NSCFType
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (unsigned int)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4;
- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned int)arg2;
- (void)setString:(id)arg1;
- (void)appendFormat:(id)arg1;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)appendString:(id)arg1;
- (void)insertString:(id)arg1 atIndex:(unsigned int)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (BOOL)_isCString;
- (Class)classForCoder;
- (unsigned int)smallestEncoding;
- (unsigned int)fastestEncoding;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getLineStart:(unsigned int *)arg1 end:(unsigned int *)arg2 contentsEnd:(unsigned int *)arg3 forRange:(struct _NSRange)arg4;
- (BOOL)hasSuffix:(id)arg1;
- (BOOL)hasPrefix:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)substringWithRange:(struct _NSRange)arg1;
- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;
- (BOOL)getCString:(char *)arg1 maxLength:(unsigned int)arg2 encoding:(unsigned int)arg3;
- (const char *)cStringUsingEncoding:(unsigned int)arg1;
- (unsigned int)cStringLength;
- (const char *)UTF8String;
- (const char *)cString;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (const unsigned short *)_fastCharacterContents;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (unsigned int)length;
- (void)finalize;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (oneway void)release;
- (id)retain;
- (BOOL)isNSString__;

@end

