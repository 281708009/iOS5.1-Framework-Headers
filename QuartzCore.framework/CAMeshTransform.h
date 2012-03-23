/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSString;

@interface CAMeshTransform : NSObject <NSCoding, NSCopying, NSMutableCopying>
{
    void *_impl;
    unsigned int _normalization;
    int _subdivisionSteps;
}

+ (id)meshTransformWithVertexCount:(unsigned long)arg1 vertices:(const struct CAMeshVertex *)arg2 faceCount:(unsigned long)arg3 faces:(const struct CAMeshFace *)arg4 depthNormalization:(id)arg5;
- (void)dealloc;
- (id)init;
- (id)_init;
- (id)initWithVertexCount:(unsigned long)arg1 vertices:(const struct CAMeshVertex *)arg2 faceCount:(unsigned long)arg3 faces:(const struct CAMeshFace *)arg4 depthNormalization:(id)arg5;
- (id)_initWithMeshTransform:(id)arg1;
@property(readonly) unsigned int vertexCount;
- (struct CAMeshVertex)vertexAtIndex:(unsigned long)arg1;
@property(readonly) unsigned int faceCount;
- (struct CAMeshFace)faceAtIndex:(unsigned long)arg1;
@property(readonly, copy) NSString *depthNormalization;
@property(readonly) int subdivisionSteps;
- (struct Object *)CA_copyRenderValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)_constructWithData:(id)arg1;
- (id)_data;
- (id)_subdivideToDepth:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;
- (float)CA_distanceToValue:(id)arg1;
- (id)meshTransformForLayer:(id)arg1;

@end

