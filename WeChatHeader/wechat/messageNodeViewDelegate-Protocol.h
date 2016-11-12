//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBaseContact, CContact, CMessageWrap, CPushContact, MMUIViewController, MultiTalkSessionItem, NSArray, NSString, PushMailWrap;

@protocol messageNodeViewDelegate <NSObject>

@optional
- (void)BeginPlaying:(CMessageWrap *)arg1 FromTouch:(_Bool)arg2;
- (void)EndPlaying:(CMessageWrap *)arg1;
- (void)OnEndPlaying:(CMessageWrap *)arg1;
- (void)PlayShortVideo:(CMessageWrap *)arg1;
- (void)PlayVideo:(CMessageWrap *)arg1;
- (void)SetMsgPlayed:(CMessageWrap *)arg1;
- (void)StartDownloadShortVideo:(CMessageWrap *)arg1;
- (void)StartDownloadVideo:(CMessageWrap *)arg1;
- (void)StartUploadVideo:(CMessageWrap *)arg1;
- (void)StopDownloadVideo:(CMessageWrap *)arg1;
- (void)StopDownloadVideoWithKVReport:(CMessageWrap *)arg1;
- (void)StopUploadVideo:(CMessageWrap *)arg1;
- (void)clickLinkToDealWithSysXml:(CMessageWrap *)arg1 fromScene:(NSString *)arg2;
- (void)clickLinkToExpose;
- (void)clickNewAASysMsg:(NSString *)arg1 withMsgLocalID:(unsigned int)arg2;
- (void)clickReceiveBrandMsg;
- (void)clickShieldBrandMsg;
- (void)deleteNode:(CMessageWrap *)arg1;
- (void)enterChat:(CContact *)arg1;
- (CMessageWrap *)getLastSentMsg;
- (double)getMaxContentHeightForNodeView:(id)arg1;
- (MMUIViewController *)getViewController;
- (void)hasTapReaderNodeView;
- (void)headerImageClicked:(CBaseContact *)arg1;
- (void)headerImageClickedWithMsg:(CMessageWrap *)arg1;
- (_Bool)isChatStatusNotifyOpen;
- (_Bool)isInputViewPositionDown;
- (_Bool)isLastMsg:(CMessageWrap *)arg1;
- (_Bool)isMsgCanRevoke:(CMessageWrap *)arg1;
- (_Bool)isMsgLastSend:(CMessageWrap *)arg1;
- (_Bool)isRectVisibleInTableView:(struct CGRect)arg1;
- (void)jumpToShakeView:(unsigned int)arg1;
- (void)jumpToUserProfile:(NSString *)arg1 Displayname:(NSString *)arg2 Scence:(unsigned int)arg3;
- (void)longPressOnHeadImage:(CBaseContact *)arg1;
- (void)longPressOnHeadImageForDebug:(CMessageWrap *)arg1;
- (void)onCommentOnMessageWrap:(CMessageWrap *)arg1;
- (void)onExposeTemplateMsg:(CMessageWrap *)arg1;
- (void)onForwardMessageOK;
- (void)onFullScreenWindowWillHide;
- (void)onHideKeyboard;
- (void)onMassSendSendAgain:(NSArray *)arg1;
- (void)onMoreOperateWithMsgId:(NSString *)arg1;
- (void)onNodeViewChanged;
- (void)onScrollToBottom;
- (void)readerViewClickedWithMsg:(CMessageWrap *)arg1;
- (void)reloadNodeWithMessageWrap:(CMessageWrap *)arg1;
- (void)revokeMsgByNodeView:(CMessageWrap *)arg1;
- (void)scrollRectToVisiblePosition:(struct CGRect)arg1;
- (void)shareMsgToOpenSDKByNodeView:(CMessageWrap *)arg1;
- (void)showMultiTalkMessageInfoWithSessionItem:(MultiTalkSessionItem *)arg1 msgLocalID:(unsigned int)arg2;
- (void)showMultiTalkSessionInfo:(MultiTalkSessionItem *)arg1;
- (void)switchEarMode;
- (void)tagHeadImage_NodeView:(id)arg1;
- (void)tagLink:(NSString *)arg1 messageWrap:(CMessageWrap *)arg2;
- (void)tapAppNodeView:(id)arg1;
- (void)tapEmoticon_NodeView:(id)arg1;
- (void)tapFriendCard_NodeView:(id)arg1 WithContact:(CContact *)arg2 WithMsg:(CMessageWrap *)arg3;
- (void)tapImage_NodeView:(id)arg1;
- (void)tapLocation_NodeView:(id)arg1;
- (void)tapPushContact_NodeView:(CPushContact *)arg1;
- (void)tapPushMail_NodeView:(id)arg1 withPushMailWrap:(PushMailWrap *)arg2;
- (void)tapReader_NodeView:(id)arg1;
- (void)tapStatus_NodeView:(id)arg1;
- (void)tapText_NodeView:(id)arg1;
- (void)tapVideoStatus_NodeView:(id)arg1;
- (void)tapVoipNodeView:(id)arg1;
- (void)willShowMenuController:(id)arg1;
@end

