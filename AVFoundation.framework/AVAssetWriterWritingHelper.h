/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAssetWriterHelper.h>

@class AVWeakReference;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper
{
    AVWeakReference *_weakReference;
    struct OpaqueFigAssetWriter *_figAssetWriter;
    BOOL _startSessionCalled;
}

- (void)_handleFailedNotificationWithError:(id)arg1;
- (void)_handleServerDiedNotification;
- (void)finishWriting;
- (void)cancelWriting;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (int)status;
- (void)finalize;
- (void)dealloc;
- (id)initWithConfigurationState:(id)arg1 error:(id *)arg2;
- (id)initWithConfigurationState:(id)arg1;

@end

