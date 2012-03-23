/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPMediaDownloadObserver.h>

@class NSString;

@interface MPAirTrafficMediaDownloadObserver : MPMediaDownloadObserver
{
    NSString *_assetIdentifier;
    double _lastDownloadProgress;
}

+ (void)unregisterObserver:(id)arg1 forAssetID:(id)arg2;
+ (void)registerObserver:(id)arg1 forAssetID:(id)arg2;
+ (void)connection:(id)arg1 updatedProgress:(id)arg2;
+ (void)initialize;
- (double)downloadProgress;
- (void)_onQueue_invalidate;
- (void)dealloc;
- (id)initWithAssetIdentifier:(id)arg1;

@end

