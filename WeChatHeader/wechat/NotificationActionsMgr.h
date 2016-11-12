//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class MMDisturbConfirmViewController, MMToastViewController, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface NotificationActionsMgr : MMService <IMsgExt, PBMessageObserverDelegate, MMService>
{
    NSMutableDictionary *_actionCompletions;
    MMToastViewController *_toastView;
    MMDisturbConfirmViewController *_distrubConfirmViewController;
    NSMutableArray *_sendingMessages;
    NSDictionary *_actionMaping;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (void)_muteForSeconds:(unsigned int)arg1;
@property(readonly, retain, nonatomic) NSDictionary *actionMaping; // @synthesize actionMaping=_actionMaping;
- (void)dealloc;
- (unsigned int)genRandomClienMsgId;
- (void)handleActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 isRemote:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)handleConfirmLoginAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleGoToMessageAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleLocalActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleMarkAsReadAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleMuteChatAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleReceiveLocalNotification:(id)arg1;
- (void)handleRemoteActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleReply1Action:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleReplyAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleReplyYoAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleSendMsgResp:(id)arg1;
- (void)handleSetPushMuteResp:(id)arg1;
- (void)handleStatusNotifyResp:(id)arg1;
- (void)handleUnlockDeviceAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (_Bool)isDontDisturbModeAndCheckRestore:(_Bool)arg1;
- (void)markChatRead:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)muteForOneHour;
- (id)notificationCategoryWithIdentifier:(id)arg1 actions:(id)arg2;
- (void)notifyUserSendMessageFailWithClientId:(unsigned int)arg1 toUsername:(id)arg2;
- (void)onServiceTerminate;
- (void)registerNotification;
- (void)replyText:(id)arg1 toUsername:(id)arg2 userInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)showDisturbConfirmViewController;
- (void)unmute;
- (void)updateShortcutsBecauseOfDisturbMayChanged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

