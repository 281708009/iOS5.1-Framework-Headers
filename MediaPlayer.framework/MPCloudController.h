/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class HSSagaClient;

@interface MPCloudController : NSObject
{
    BOOL _isCloudEnabled;
    BOOL _isUpdateInProgress;
    HSSagaClient *_sagaClient;
}

+ (id)sharedCloudController;
@property(readonly, nonatomic) BOOL isCloudEnabled; // @synthesize isCloudEnabled=_isCloudEnabled;
- (void)_initializeUpdateInProgressState;
- (void)updatePlaylistWithSagaID:(unsigned long long)arg1 itemSagaIDs:(id)arg2 completionHandler:(id)arg3;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)resignActive;
- (void)removePlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)loadUpdateProgressWithCompletionHandler:(id)arg1;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
@property(readonly, nonatomic) BOOL isUpdateInProgress; // @synthesize isUpdateInProgress=_isUpdateInProgress;
@property(readonly, nonatomic) BOOL isGeniusEnabled;
- (void)incrementItemProperty:(id)arg1 forSagaID:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL hasCloudLockerAccount;
- (void)becomeActive;
- (void)addGeniusPlaylistWithName:(id)arg1 seedItemSagaIDs:(id)arg2 itemSagaIDs:(id)arg3 completionHandler:(id)arg4;
- (void)addPlaylistWithName:(id)arg1 completionHandler:(id)arg2;
- (void)dealloc;
- (id)init;

@end

