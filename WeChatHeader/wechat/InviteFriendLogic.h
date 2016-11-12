//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMMFacebookMgrExt.h"
#import "InviteFriendViewDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "MMTwitterAuthExt.h"
#import "PBMessageObserverDelegate.h"

@class InviteFriendView, NSDictionary, NSMutableDictionary, NSString, UIColor;

@interface InviteFriendLogic : NSObject <MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate, MMTwitterAuthExt, IMMFacebookMgrExt, PBMessageObserverDelegate, InviteFriendViewDelegate>
{
    id <InviteFriendLogicDelegate> m_delegate;
    NSMutableDictionary *m_dicMsg;
    NSMutableDictionary *m_dicSubject;
    _Bool m_bDefaultWording;
    InviteFriendView *m_inviteMsgView;
    UIColor *m_oldBarTintColor;
    NSDictionary *m_oldTitleTextAttributes;
    long long m_oldUIBarStyle;
}

+ (_Bool)isEntryOnTheTop;
+ (_Bool)isShowEmail;
+ (_Bool)isShowEntryInContactList;
+ (_Bool)isShowEntryInMainFrame;
+ (_Bool)isShowFacebook;
+ (_Bool)isShowInvite;
+ (_Bool)isShowSMS;
+ (_Bool)isShowTwitter;
+ (_Bool)isShowWhatsapp;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (void)doInviteFacebook;
- (void)doSentInviteTwitter;
- (void)facebookCheckAccessTokenValidFinished:(_Bool)arg1;
- (void)facebookTryAuth;
- (id)getMsg:(unsigned int)arg1;
- (id)getSubject:(unsigned int)arg1;
- (void)handleGetMsg:(id)arg1;
- (void)handlePostMsg:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)onInviteFriendViewCancel:(id)arg1;
- (void)onInviteFriendViewPost:(id)arg1 View:(id)arg2;
- (void)onTwitterStartAuth;
- (void)postInviteMsg:(unsigned int)arg1 msg:(id)arg2;
- (void)recoverOldSetting;
- (void)saveOldSetting;
- (void)showInviteList:(id)arg1;
- (void)startAgain:(id)arg1;
- (void)startInviteEmail;
- (void)startInviteFacebook;
- (void)startInviteMessage;
- (void)startInviteTwitter;
- (void)startInviteWhatsapp;
- (void)twitterAuthFinished:(int)arg1;
- (void)twitterCheckAccessTokenValidFinished:(int)arg1;
- (void)twitterWillStartOpenSafari;
- (void)updateWording:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

