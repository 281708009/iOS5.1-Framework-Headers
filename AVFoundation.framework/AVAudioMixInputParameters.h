/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class AVAudioMixInputParametersInternal;

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying>
{
    AVAudioMixInputParametersInternal *_inputParameters;
}

- (id)_volumeCurveAsString;
- (id)_audioVolumeCurve;
- (void)_setRamps:(id)arg1;
- (BOOL)getVolumeRampForTime:(CDStruct_1b6d18a9)arg1 startVolume:(float *)arg2 endVolume:(float *)arg3 timeRange:(CDStruct_e83c9415 *)arg4;
- (void)setVolume:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)setTrackID:(int)arg1;
@property(readonly, nonatomic) int trackID;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

