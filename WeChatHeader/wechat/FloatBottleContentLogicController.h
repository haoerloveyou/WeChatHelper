//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMsgContentLogicController.h"

#import "BottleMsgViewControllerDelegate.h"

@class CBottle;

@interface FloatBottleContentLogicController : BaseMsgContentLogicController <BottleMsgViewControllerDelegate>
{
    CBottle *m_bottle;
    id <FloatBottleContentLogicDelegate> m_bottleLogicDelegate;
    _Bool m_bFromOpenBottle;
}

- (void).cxx_destruct;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)CanOpenServiceAppList;
- (_Bool)CanRemoteRecord;
- (_Bool)CanSelectMyFavoritesItemForSendingMsg;
- (_Bool)CanSend3rdMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (_Bool)CanSendLocationMsg;
- (_Bool)CanSendTextMsg:(id)arg1;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanSendVoipMsg;
- (_Bool)CanShowSight;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)CustomToolViewEX:(id)arg1;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (_Bool)EnabledOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3 withImageInfo:(id)arg4;
- (id)FormTextMsg:(id)arg1 withText:(id)arg2;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetRightBarButtonImageName;
- (id)GetRightBarButtonTitle;
- (id)GetTitleTailImage;
- (id)GetUsrTitle;
- (id)GetUsrTitleFront;
- (id)GetUsrTitleTail;
- (id)HighlightedImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)ImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (unsigned int)NumberOfHeaderButtons;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenDetailInfo;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)SendEmoticonMessage:(id)arg1;
- (void)StateChanged;
- (id)TitleOfHeaderButtonsAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)formImageMsgByMMAsset:(id)arg1 toUserName:(id)arg2;
- (void)initViewController;
- (id)initWithBottle:(id)arg1 andContact:(id)arg2 andFromOpenBottle:(_Bool)arg3;
- (_Bool)isOpenSingleInfo;
- (_Bool)isShakeEnabled;
@property(retain, nonatomic) CBottle *m_bottle; // @synthesize m_bottle;
@property(nonatomic) __weak id <FloatBottleContentLogicDelegate> m_bottleLogicDelegate; // @synthesize m_bottleLogicDelegate;
- (_Bool)needShowReturnAlert;
- (void)onPopFromNavigationController;
- (void)onThrowBack:(id)arg1;
- (void)setBottleUnread;
- (void)switchEarpieceMode;

@end

