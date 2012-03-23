/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AVAsynchronousKeyValueLoading-Protocol.h"
#import "NSCopying-Protocol.h"

@class AVAssetCache, AVWeakReference, NSArray, NSString, NSURL;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading>
{
    AVWeakReference *_weakReference;
}

+ (void)initialize;
- (void)_serverHasDied;
@property(readonly, nonatomic) unsigned int referenceRestrictions;
- (id)_mapFigErrorCodeToNSError:(long)arg1;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id)arg3;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
@property(readonly, nonatomic, getter=_isStreaming) BOOL streaming;
@property(readonly, nonatomic) BOOL hasProtectedContent;
@property(readonly, nonatomic) NSURL *downloadDestinationURL;
@property(readonly, nonatomic) NSURL *resolvedURL;
@property(readonly, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;
@property(readonly, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property(readonly, nonatomic) AVAssetCache *assetCache;
@property(readonly, nonatomic) NSArray *chapterGroupInfo;
@property(readonly, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) BOOL compatibleWithSavedPhotosAlbum;
@property(readonly, nonatomic, getter=isComposable) BOOL composable;
@property(readonly, nonatomic, getter=isReadable) BOOL readable;
@property(readonly, nonatomic, getter=isExportable) BOOL exportable;
@property(readonly, nonatomic, getter=isPlayable) BOOL playable;
@property(readonly, nonatomic) NSString *lyrics;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic, getter=_playbackItem) struct OpaqueFigPlaybackItem *playbackItem;
@property(readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset *figAsset;
@property(readonly, nonatomic, getter=_formatReader) struct OpaqueFigFormatReader *formatReader;
@property(readonly, nonatomic) NSURL *URL;
- (void)cancelLoading;
- (id)assetInspector;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (int)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(readonly, nonatomic, getter=_weakReference) AVWeakReference *weakReference;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

