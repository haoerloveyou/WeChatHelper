//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AppDetailDelegate.h"
#import "WCNetworkMediaPlayerDelegate.h"

@class CMessageWrap, MMUIViewController, MMUIWindow, NSString;

@interface ViewAppMsgController : NSObject <AppDetailDelegate, WCNetworkMediaPlayerDelegate>
{
    MMUIViewController *m_fromVC;
    id <ViewAppMsgControllerDelegate> m_delegate;
    MMUIWindow *m_fullScreenWindow;
    CMessageWrap *m_curWrapMsg;
}

- (void).cxx_destruct;
- (void)JumpToViewStreamVideo:(id)arg1;
- (void)OnAppDataPreview:(id)arg1 MsgWrap:(id)arg2;
- (void)PreviewAppMsg:(id)arg1 Pop:(_Bool)arg2;
- (void)PreviewImage:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onClickFavVideoMenu;
- (void)onClosePlayer;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)viewAppMsg:(id)arg1;
- (void)viewAppMsg:(id)arg1 msg:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

