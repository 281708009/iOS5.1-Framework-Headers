/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@interface NSString : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
}

+ (id)stringWithContentsOfFile:(id)arg1 usedEncoding:(unsigned int *)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfFile:(id)arg1 encoding:(unsigned int)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfURL:(id)arg1 usedEncoding:(unsigned int *)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfURL:(id)arg1 encoding:(unsigned int)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfURL:(id)arg1;
+ (id)stringWithContentsOfFile:(id)arg1;
+ (id)stringWithFormat:(id)arg1 locale:(id)arg2;
+ (id)stringWithFormat:(id)arg1;
+ (id)localizedStringWithFormat:(id)arg1;
+ (id)stringWithBytes:(const void *)arg1 length:(unsigned int)arg2 encoding:(unsigned int)arg3;
+ (id)stringWithUTF8String:(const char *)arg1;
+ (id)stringWithCString:(const char *)arg1 encoding:(unsigned int)arg2;
+ (id)stringWithCString:(const char *)arg1 length:(unsigned int)arg2;
+ (id)stringWithCString:(const char *)arg1;
+ (id)stringWithCharacters:(const unsigned short *)arg1 length:(unsigned int)arg2;
+ (id)stringWithString:(id)arg1;
+ (id)string;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(void *)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2 encoding:(unsigned int)arg3 freeWhenDone:(BOOL)arg4;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithFormat:(id)arg1 arguments:(void *)arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2;
- (id)initWithFormat:(id)arg1;
- (id)initWithData:(id)arg1 usedEncoding:(unsigned int *)arg2;
- (id)initWithContentsOfFile:(id)arg1 usedEncoding:(unsigned int *)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 usedEncoding:(unsigned int *)arg2 error:(id *)arg3;
- (id)initWithContentsOfFile:(id)arg1 encoding:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 encoding:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)_initWithDataOfUnknownEncoding:(id)arg1;
- (id)_initWithBytesOfUnknownEncoding:(char *)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 usedEncoding:(unsigned int *)arg4;
- (id)initWithData:(id)arg1 encoding:(unsigned int)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned int)arg2;
- (id)initWithUTF8String:(const char *)arg1;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned int)arg2;
- (id)initWithCString:(const char *)arg1;
- (id)initWithCString:(const char *)arg1 length:(unsigned int)arg2;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 encoding:(unsigned int)arg3 error:(id *)arg4;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 encoding:(unsigned int)arg3 error:(id *)arg4;
- (BOOL)getExternalRepresentation:(id *)arg1 extendedAttributes:(id *)arg2 forWritingToURLOrPath:(id)arg3 usingEncoding:(unsigned int)arg4 error:(id *)arg5;
- (id)displayableString;
- (void)enumerateLinesUsingBlock:(id)arg1;
- (void)enumerateSubstringsInRange:(struct _NSRange)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (struct _NSRange)paragraphRangeForRange:(struct _NSRange)arg1;
- (struct _NSRange)lineRangeForRange:(struct _NSRange)arg1;
- (void)getParagraphStart:(unsigned int *)arg1 end:(unsigned int *)arg2 contentsEnd:(unsigned int *)arg3 forRange:(struct _NSRange)arg4;
- (void)getLineStart:(unsigned int *)arg1 end:(unsigned int *)arg2 contentsEnd:(unsigned int *)arg3 forRange:(struct _NSRange)arg4;
- (void)_getBlockStart:(unsigned int *)arg1 end:(unsigned int *)arg2 contentsEnd:(unsigned int *)arg3 forRange:(struct _NSRange)arg4 stopAtLineSeparators:(BOOL)arg5;
- (id)stringByFoldingWithOptions:(unsigned int)arg1 locale:(id)arg2;
- (id)precomposedStringWithCompatibilityMapping;
- (id)decomposedStringWithCompatibilityMapping;
- (id)precomposedStringWithCanonicalMapping;
- (id)decomposedStringWithCanonicalMapping;
- (id)capitalizedString;
- (id)lowercaseString;
- (id)uppercaseString;
- (BOOL)boolValue;
- (int)integerValue;
- (long long)longLongValue;
- (int)intValue;
- (float)floatValue;
- (double)doubleValue;
- (id)stringByAppendingFormat:(id)arg1;
- (id)stringByAppendingString:(id)arg1;
- (id)substringToIndex:(unsigned int)arg1;
- (id)substringFromIndex:(unsigned int)arg1;
- (id)substringWithRange:(struct _NSRange)arg1;
- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;
- (void)getCharacters:(unsigned short *)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)stringByReplacingCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4;
- (id)stringByPaddingToLength:(unsigned int)arg1 withString:(id)arg2 startingAtIndex:(unsigned int)arg3;
- (id)stringByTrimmingCharactersInSet:(id)arg1;
- (BOOL)hasSuffix:(id)arg1;
- (BOOL)hasPrefix:(id)arg1;
- (id)commonPrefixWithString:(id)arg1 options:(unsigned int)arg2;
- (id)componentsSeparatedByCharactersInSet:(id)arg1;
- (id)componentsSeparatedByString:(id)arg1;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned int)arg2;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfString:(id)arg1;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned int)arg2;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (struct _NSRange)rangeOfComposedCharacterSequencesForRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeOfComposedCharacterSequenceAtIndex:(unsigned int)arg1;
- (int)localizedStandardCompare:(id)arg1;
- (int)localizedCaseInsensitiveCompare:(id)arg1;
- (int)localizedCompare:(id)arg1;
- (int)caseInsensitiveCompare:(id)arg1;
- (int)compare:(id)arg1;
- (int)compare:(id)arg1 options:(unsigned int)arg2;
- (int)compare:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (int)compare:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (BOOL)isEqualToString:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)quotedStringRepresentation;
- (id)_stringRepresentation;
- (BOOL)_isCString;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (const unsigned short *)_fastCharacterContents;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (unsigned int)length;

@end

