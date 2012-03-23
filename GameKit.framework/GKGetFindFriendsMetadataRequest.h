/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKDataRequest.h>

@class NSString;

@interface GKGetFindFriendsMetadataRequest : GKDataRequest
{
    NSString *_buttonUsageHelp;
    NSString *_buttonTitle;
    NSString *_sectionTitle;
    BOOL _friendFinderVisible;
}

@property(nonatomic) BOOL friendFinderVisible; // @synthesize friendFinderVisible=_friendFinderVisible;
@property(retain, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *buttonUsageHelp; // @synthesize buttonUsageHelp=_buttonUsageHelp;
- (void)handleResponseFromServer:(id)arg1;
- (id)request;
- (id)key;
- (void)dealloc;

@end

