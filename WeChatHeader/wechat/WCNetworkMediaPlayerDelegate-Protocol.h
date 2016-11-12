//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBaseContact, NSString;

@protocol WCNetworkMediaPlayerDelegate <NSObject>
- (void)onClosePlayer;

@optional
- (_Bool)needHiddenMoreMenu;
- (void)onCancelShareVideoToFriend;
- (void)onClickFavVideoMenu;
- (void)onClosePlayerForViewDetail:(NSString *)arg1;
- (void)onEndPlayer;
- (void)onPausePlayer;
- (void)onShareVideoToFriend:(CBaseContact *)arg1;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onStartPlayer;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)willAnimateRotation:(_Bool)arg1;
@end

