/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKTableViewControllerV2.h>

#import "GKLeaderboardDelegate-Protocol.h"

@class GKGame, GKLeaderboardDataSource, GKLeaderboardViewController, GKPlayer, GKSparseLeaderboard, GKUITheme, NSString, UISegmentedControl, UIView;

@interface GKAbstractLeaderboardViewController : GKTableViewControllerV2 <GKLeaderboardDelegate>
{
    GKGame *_game;
    GKPlayer *_player;
    NSString *_categoryID;
    int _timeScope;
    UIView *_scopeControlContainer;
    UISegmentedControl *_portraitScopeControl;
    UISegmentedControl *_landscapeScopeControl;
    GKLeaderboardDataSource *_leaderboardDataSource;
    id <GKLeaderboardViewControllerPrivateDelegate> _delegate;
    GKUITheme *_theme;
    BOOL _allowsFriendSelection;
    BOOL _translucentNavBar;
    GKSparseLeaderboard *_friendLeaderboard;
    GKSparseLeaderboard *_globalLeaderboard;
    id <GKLeaderboardViewControllerDelegate> _leaderboardDelegate;
    GKLeaderboardViewController *_controllerForDelegate;
    int _navbarStyle;
    NSString *_localizedLeaderboardTitle;
}

@property(retain, nonatomic) NSString *localizedLeaderboardTitle; // @synthesize localizedLeaderboardTitle=_localizedLeaderboardTitle;
@property(retain, nonatomic) UISegmentedControl *landscapeScopeControl; // @synthesize landscapeScopeControl=_landscapeScopeControl;
@property(retain, nonatomic) UISegmentedControl *portraitScopeControl; // @synthesize portraitScopeControl=_portraitScopeControl;
@property(nonatomic) int navbarStyle; // @synthesize navbarStyle=_navbarStyle;
@property(retain, nonatomic) UIView *scopeControlContainer; // @synthesize scopeControlContainer=_scopeControlContainer;
@property(nonatomic) GKLeaderboardViewController *controllerForDelegate; // @synthesize controllerForDelegate=_controllerForDelegate;
@property(nonatomic) id <GKLeaderboardViewControllerDelegate> leaderboardDelegate; // @synthesize leaderboardDelegate=_leaderboardDelegate;
@property(retain, nonatomic) GKSparseLeaderboard *globalLeaderboard; // @synthesize globalLeaderboard=_globalLeaderboard;
@property(retain, nonatomic) GKSparseLeaderboard *friendLeaderboard; // @synthesize friendLeaderboard=_friendLeaderboard;
@property(nonatomic) int timeScope; // @synthesize timeScope=_timeScope;
@property(nonatomic) BOOL translucentNavBar; // @synthesize translucentNavBar=_translucentNavBar;
@property(nonatomic) BOOL allowsFriendSelection; // @synthesize allowsFriendSelection=_allowsFriendSelection;
@property(retain, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(readonly, nonatomic) GKUITheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(nonatomic) id <GKLeaderboardViewControllerPrivateDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GKLeaderboardDataSource *leaderboardDataSource; // @synthesize leaderboardDataSource=_leaderboardDataSource;
- (void)playTapped;
- (void)_timeFilterSegmentedControlChanged:(id)arg1;
- (void)donePressed:(id)arg1;
- (void)setupScopeContainer:(id)arg1;
- (void)layoutSubviewsForOrientation:(int)arg1;
- (float)marginForTableView:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)authenticatedStatusChanged;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)_gkResetContents;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (void)updateNavbarButtons;
- (void)leaderboardDidFinishLoading:(id)arg1;
- (void)leaderboardDidBeginLoading:(id)arg1;
- (void)reloadScoresWithCompletionHandlerAndError:(id)arg1;
- (void)setCategoryID:(id)arg1 timeScope:(int)arg2;
- (void)updateCategorySubtitle;
- (void)prepareDataSource;
- (void)viewDidLoad;
- (Class)dataSourceClass;
- (void)dealloc;
- (id)initWithGame:(id)arg1;

@end

