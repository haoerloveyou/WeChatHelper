//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMsgContentLogicController.h"

#import "ChatRoomInvitationDetailDelegate.h"
#import "ChatroomMemberRemoveViewControllerDelegate.h"
#import "IAutoSetRemarkExt.h"
#import "IContactMgrExt.h"
#import "IGroupMgrExt.h"
#import "ILinkEventExt.h"
#import "IMMQRCodeExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "RoomContactSelectDelegate.h"
#import "TipsViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "chatRoomInfoDelegate.h"
#import "chatRoomSettingDelegate.h"

@class ChatRoomInfoSettingMgr, NSString, RoomReportController;

@interface RoomContentLogicController : BaseMsgContentLogicController <chatRoomInfoDelegate, chatRoomSettingDelegate, IGroupMgrExt, IContactMgrExt, RoomContactSelectDelegate, IAutoSetRemarkExt, IMMQRCodeExt, TipsViewDelegate, ChatroomMemberRemoveViewControllerDelegate, ILinkEventExt, WCActionSheetDelegate, MMTipsViewControllerDelegate, ChatRoomInvitationDetailDelegate>
{
    _Bool m_bStartShowRoomContactSelector;
    ChatRoomInfoSettingMgr *m_ChatRoomInfoSettingMgr;
    _Bool m_bTipsShow;
    _Bool m_bPresentRoomContactSelector;
    _Bool m_forbidGetGroupMemberDetail;
    RoomReportController *m_reportController;
}

- (void).cxx_destruct;
- (void)AddAtUser:(id)arg1;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)CanLongPressHeadImage;
- (_Bool)CanOpenServiceAppList;
- (_Bool)CanOpenTrackRoom;
- (_Bool)CanRemoteRecord;
- (_Bool)CanSelectMyFavoritesItemForSendingMsg;
- (_Bool)CanSend3rdMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (_Bool)CanSendLocationMsg;
- (_Bool)CanSendTextMsg:(id)arg1;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanSendVoipMsg;
- (void)ClearStatusAndUnRegisterForCacheStatus;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)CustomToolViewEX:(id)arg1;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)DeleteAtUserList;
- (void)DidAddMsg:(id)arg1;
- (_Bool)EnabledOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3 withImageInfo:(id)arg4;
- (id)FormTextMsg:(id)arg1 withText:(id)arg2;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetRightBarBtn;
- (id)GetRightBarButtonImageName;
- (id)GetRightBarButtonTitle;
- (id)GetTitleTailImage;
- (id)GetUsrTitle;
- (id)GetUsrTitleFront;
- (id)GetUsrTitleOld;
- (id)GetUsrTitleTail;
- (id)HighlightedImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)ImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (unsigned int)NumberOfHeaderButtons;
- (void)OnChangeGroup:(id)arg1;
- (void)OnChangeMemberDisplayName:(id)arg1;
- (void)OnChangeMemberShowDisplayName:(id)arg1;
- (void)OnChangeMemberVerifyStatus:(id)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (void)OnInviteChatRoomMember:(id)arg1 Ret:(int)arg2 Error:(id)arg3 withUserData:(id)arg4;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenDetailInfo;
- (void)OpenDetailInfoForDisplayNameSwitch;
- (void)OpenDetailInfoFromTips;
- (void)OpenGroupSetting;
- (void)QuitGroup;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)StateChanged;
- (id)TitleOfHeaderButtonsAtIndex:(unsigned int)arg1;
- (void)ViewDidAppear;
- (void)ViewDidInit;
- (void)ViewWillAppear;
- (void)ViewWillInit;
- (void)WillBePushedLogicController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)approveMemberFromOwner:(id)arg1;
- (void)approveMembersFromApproveScene:(id)arg1;
- (_Bool)canShowChatRoomInfo;
- (void)checkAddFriend;
- (void)checkGetChatRoomInfo:(id)arg1;
- (void)checkSecurityBannerShow;
- (void)clearAllMsg;
- (void)clearAtMeCount;
- (void)clearNewInvApprove;
- (void)clearNewInvCount;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)customCellContentForMsg:(id)arg1;
- (void)dealloc;
- (void)delChatRoomMemberFromInvitionScene:(id)arg1;
- (void)delChatRoomMemberFromQRcodeScene:(id)arg1;
- (void)didSelectContact:(id)arg1;
- (_Bool)existEmptyMemberContact;
- (id)getDefaultChatRoomName;
- (id)getGroupContact;
- (id)getResultWithRegularInString:(id)arg1 WithPatterns:(id)arg2;
- (id)init;
- (_Bool)isLastCharacterAlphaNumeric:(id)arg1;
- (_Bool)isNeedCached;
- (void)modMsgWithoutNotify:(id)arg1;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (void)newMessageFromChatRoomInfo:(id)arg1;
- (void)onApproveInvitationSuccess:(id)arg1;
- (void)onCancelSelectContact;
- (void)onChatroomMemberRemoveViewCancel;
- (void)onGroupSetting:(id)arg1;
- (void)onInputTextDeleteAll;
- (void)onModifyContact:(id)arg1;
- (void)onPerformAction:(id)arg1;
- (void)onPopFromNavigationController;
- (void)onRevokeChatroomQRCode:(id)arg1 success:(_Bool)arg2 errTip:(id)arg3;
- (void)onSetStrangerRemark:(id)arg1;
- (void)onTextChange:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)processNewXMLInApproveScene:(id)arg1;
- (void)processNewXMLInInviteScene:(id)arg1;
- (void)removeChatRoomMember:(id)arg1 scene:(unsigned long long)arg2;
- (void)revokeChatRoomQRCode:(id)arg1;
- (void)sendInviteFromApproveToInviterScene:(id)arg1;
- (_Bool)shouldHideToolViewWhenKeyboardHide;
- (_Bool)shouldPreventViewcontrollerAutorotate;
- (void)showRoomContactSelectorViewController;
- (void)switchEarpieceMode;
- (void)tryGetChatRoomMemberDetail:(id)arg1;
- (void)updateChatroomContact:(id)arg1;
- (void)viewWillRotateToOrientation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

