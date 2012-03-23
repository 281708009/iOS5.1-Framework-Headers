/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIImage.h>

@interface UIImage (UIImageDeprecatedPrivate)
+ (void)removeImageNameFromCache:(id)arg1;
+ (id)imageAtPath:(id)arg1;
- (id)patternColor;
- (struct CGColor *)_patternColor;
- (void)draw1PartImageInRect:(struct CGRect)arg1 fraction:(float)arg2 operation:(int)arg3;
- (void)draw1PartImageInRect:(struct CGRect)arg1 fraction:(float)arg2;
- (void)draw1PartImageInRect:(struct CGRect)arg1;
- (void)draw3PartImageWithSliceRects:(CDStruct_75b8db5d)arg1 inRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)draw3PartImageWithSliceRects:(CDStruct_75b8db5d)arg1 inRect:(struct CGRect)arg2 fraction:(float)arg3;
- (void)draw3PartImageWithSliceRects:(CDStruct_75b8db5d)arg1 inRect:(struct CGRect)arg2;
- (void)draw9PartImageWithSliceRects:(CDStruct_c8cd2c5d)arg1 inRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)draw9PartImageWithSliceRects:(CDStruct_c8cd2c5d)arg1 inRect:(struct CGRect)arg2 fraction:(float)arg3;
- (void)draw9PartImageWithSliceRects:(CDStruct_c8cd2c5d)arg1 inRect:(struct CGRect)arg2;
- (void)compositeToPoint:(struct CGPoint)arg1 operation:(int)arg2;
- (void)compositeToPoint:(struct CGPoint)arg1 operation:(int)arg2 fraction:(float)arg3;
- (void)compositeToPoint:(struct CGPoint)arg1 fromRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)compositeToRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(float)arg4;
- (struct CGImage *)imageRef;
- (id)initWithImageRef:(struct CGImage *)arg1;
- (id)initWithData:(id)arg1 cache:(BOOL)arg2;
@end

