/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVVideoOutputSettings.h>

#import "AVReencodedVideoSettingsForFig-Protocol.h"

@class NSDictionary;

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig>
{
    BOOL _dictionaryWasFullyFormed;
    NSDictionary *_adaptedVideoCompressionProperties;
}

+ (BOOL)_validateVideoCompressionProperties:(id)arg1 againstSupportedPropertyDictionary:(id)arg2 forCodecType:(id)arg3 exceptionReason:(id *)arg4;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;
@property(readonly, nonatomic) NSDictionary *videoCompressionProperties;
@property(readonly, nonatomic) NSDictionary *videoEncoderSpecification;
@property(readonly, nonatomic) unsigned long videoCodecType;
- (int)height;
- (int)width;
- (BOOL)isDictionaryFullyFormed;
- (BOOL)willYieldCompressedSamples;
- (void)dealloc;
- (id)initWithAVVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

@end

