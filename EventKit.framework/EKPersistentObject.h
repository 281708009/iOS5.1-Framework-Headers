/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EKEventStore, NSMutableDictionary, NSMutableSet;

@interface EKPersistentObject : NSObject
{
    EKEventStore *_eventStore;
    id _objectID;
    struct __CFDictionary *_loadedProperties;
    NSMutableDictionary *_referencers;
    NSMutableSet *_dirtyProperties;
    unsigned int _flags;
    NSMutableDictionary *_committedProperties;
}

+ (id)relations;
+ (id)defaultPropertiesToLoad;
@property(retain, nonatomic) NSMutableDictionary *committedProperties; // @synthesize committedProperties=_committedProperties;
- (id)dump;
- (void)_loadDefaultPropertiesIfNeeded;
- (id)_loadChildIdentifiersForKey:(id)arg1;
- (BOOL)_loadRelationForKey:(id)arg1 value:(id *)arg2;
- (void)primitiveSetDataValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveDataValueForKey:(id)arg1;
- (void)primitiveSetURLValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveURLValueForKey:(id)arg1;
- (void)primitiveSetUnboundedStringValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveUnboundedStringValueForKey:(id)arg1;
- (void)primitiveSetStringValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveStringValueForKey:(id)arg1;
- (id)_loadStringValueForKey:(id)arg1;
- (void)primitiveSetDateValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveDateValueForKey:(id)arg1;
- (void)primitiveSetBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)primitiveBoolValueForKey:(id)arg1;
- (void)primitiveSetDoubleValue:(double)arg1 forKey:(id)arg2;
- (double)primitiveDoubleValueForKey:(id)arg1;
- (void)primitiveSetIntValue:(int)arg1 forKey:(id)arg2;
- (int)primitiveIntValueForKey:(id)arg1;
- (void)primitiveSetNumberValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveNumberValueForKey:(id)arg1;
- (void)primitiveValueChangedForKey:(id)arg1;
- (void)_primitiveSetValue:(id)arg1 forKey:(id)arg2 daemonSetter:(id)arg3;
- (id)_primitiveValueForKey:(id)arg1 loader:(id)arg2;
- (void)primitiveSetRelationValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveRemoveRelatedObject:(id)arg1 forKey:(id)arg2;
- (void)primitiveAddRelatedObject:(id)arg1 forKey:(id)arg2;
- (void)_removeObjectCore:(id)arg1 fromValues:(id)arg2 relation:(id)arg3;
- (void)_addObjectCore:(id)arg1 toValues:(id)arg2 relation:(id)arg3;
- (id)primitiveRelationValueForKey:(id)arg1;
- (id)committedValueForKey:(id)arg1;
- (void)unloadPropertyForKey:(id)arg1;
- (void)_clearWeakRelations;
- (void)_clearReferences;
- (void)_removeReference:(id)arg1 forKey:(id)arg2;
- (void)_addReference:(id)arg1 forKey:(id)arg2;
- (void)_releaseLoadedProperties;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_propertyForKey:(id)arg1;
- (BOOL)_shouldRetainPropertyForKey:(id)arg1;
- (id)_relationForKey:(id)arg1;
- (BOOL)_areDefaultPropertiesLoaded;
- (void)_setDefaultPropertiesLoaded:(BOOL)arg1;
- (BOOL)_isPendingDelete;
- (void)_setPendingDelete:(BOOL)arg1;
- (BOOL)_isPendingUpdate;
- (void)_setPendingUpdate:(BOOL)arg1;
- (BOOL)_isPendingInsert;
- (void)_setPendingInsert:(BOOL)arg1;
- (void)rollback;
- (void)reset;
- (void)saved;
- (BOOL)pushDirtyProperties:(id *)arg1;
- (BOOL)validate:(id *)arg1;
- (BOOL)isPropertyLoaded:(id)arg1;
- (void)_addDirtyProperty:(id)arg1;
- (id)dirtyProperties;
- (BOOL)isPropertyDirty:(id)arg1;
- (BOOL)refreshExcludingProperties:(id)arg1;
- (BOOL)refresh;
- (id)_loadedPropertyKeys;
- (void)changed;
- (BOOL)isDirty;
- (BOOL)isNew;
- (BOOL)existsInStore;
- (void)_setObjectID:(id)arg1;
- (id)objectID;
- (void)_setEventStore:(id)arg1;
@property(readonly, nonatomic) EKEventStore *eventStore;
- (int)entityType;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)init;
- (id)initCommon;

@end

