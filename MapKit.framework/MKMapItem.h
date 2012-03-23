/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MKPlacemark, NSString, NSURL;

@interface MKMapItem : NSObject
{
    NSString *_businessID;
    NSString *_yelpID;
    MKPlacemark *placemark;
    NSString *name;
    NSString *phoneNumber;
    NSURL *url;
    NSString *placeID;
}

+ (id)mapItemWithDictionary:(id)arg1;
@property(retain, nonatomic) NSString *placeID; // @synthesize placeID;
@property(retain, nonatomic) NSString *yelpID; // @synthesize yelpID=_yelpID;
@property(retain, nonatomic) NSString *businessID; // @synthesize businessID=_businessID;
@property(retain, nonatomic) NSURL *url; // @synthesize url;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) MKPlacemark *placemark; // @synthesize placemark;
@property(readonly, nonatomic) BOOL isBusiness;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)initWithPlacemark:(id)arg1;

@end

