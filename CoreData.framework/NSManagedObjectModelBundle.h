/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSBundle, NSDictionary;

@interface NSManagedObjectModelBundle : NSObject
{
    NSBundle *_bundle;
    NSDictionary *_versionInfoDictionary;
}

- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (id)bundle;
- (id)versionInfoDictionary;
- (id)versionHashInfo;
- (id)currentVersion;
- (id)modelVersions;
- (id)urlForModelVersionWithName:(id)arg1;
- (id)currentVersionURL;
- (id)optimizedVersionURL;
- (id)_modelForVersionHashes:(id)arg1;

@end
