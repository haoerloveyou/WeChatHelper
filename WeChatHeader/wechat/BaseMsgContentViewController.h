//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "AppDetailDelegate.h"
#import "BadRoomLogicControllerDelegate.h"
#import "BannerToastExt.h"
#import "ChatBackgroundExt.h"
#import "FirstUnReadTipViewDelegate.h"
#import "IMsgExt.h"
#import "IMsgRevokeExt.h"
#import "IVOIPExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "IdleTimerUtilExt.h"
#import "MMInputToolViewDelegate.h"
#import "MMMultiSelectToolViewDelegate.h"
#import "MMReadMailViewDelegate.h"
#import "MMScrollActionSheetDelegate.h"
#import "MessageObserverDelegate.h"
#import "MsgDelegate.h"
#import "MsgImgFullScreenViewControllerDelegate.h"
#import "MsgImgFullScreenWindowDelegate.h"
#import "MsgSearchHelperDelegate.h"
#import "MultiSelectContactsViewControllerDelegate.h"
#import "ShareMessageConfirmLogicHelperDelegate.h"
#import "TipsViewDelegate.h"
#import "TrackRoomTipsViewDelegate.h"
#import "TypingControllerDelgate.h"
#import "UIAlertViewDelegate.h"
#import "UIDocumentInteractionControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCanvasPageViewControllerDelegate.h"
#import "WCNetworkMediaPlayerDelegate.h"
#import "WXGestureDelegate.h"
#import "contactInfoDelegate.h"
#import "messageNodeViewDelegate.h"
#import "tableViewDelegate.h"

@class BadRoomLogicController, CMessageNodeData, CMessageWrap, FirstUnReadTipView, MMInputToolView, MMLoadingView, MMMultiSelectToolView, MMScrollActionSheet, MMTableView, MMTimer, MMUIWindow, MsgImgFullScreenWindow, MsgSearchHelper, NSMutableArray, NSMutableDictionary, NSString, ShareMessageConfirmLogicHelper, TipsView, TrackRoomTipsView, UIActivityIndicatorView, UIImageView, UIView, WXGesture;

@interface BaseMsgContentViewController : MMSearchBarDisplayController <MsgSearchHelperDelegate, MsgImgFullScreenWindowDelegate, BannerToastExt, IdleTimerUtilExt, BadRoomLogicControllerDelegate, MsgImgFullScreenViewControllerDelegate, WCCanvasPageViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, UIAlertViewDelegate, UINavigationControllerDelegate, UIDocumentInteractionControllerDelegate, tableViewDelegate, TypingControllerDelgate, messageNodeViewDelegate, contactInfoDelegate, MsgDelegate, MMInputToolViewDelegate, ChatBackgroundExt, ShareMessageConfirmLogicHelperDelegate, MMReadMailViewDelegate, IVOIPExt, AppDetailDelegate, TipsViewDelegate, TrackRoomTipsViewDelegate, IMsgExt, IMsgRevokeExt, IVOIPUILogicMgrExt, WXGestureDelegate, MMMultiSelectToolViewDelegate, MultiSelectContactsViewControllerDelegate, MMScrollActionSheetDelegate, MessageObserverDelegate, FirstUnReadTipViewDelegate, WCNetworkMediaPlayerDelegate>
{
    NSMutableArray *m_arrMessageNodeData;
    unsigned int m_uLastTime;
    unsigned int m_uLastMoreMsgTime;
    _Bool m_bKeyboardShow;
    _Bool m_bToolViewHidden;
    unsigned long long m_moreMsgIndex;
    _Bool m_bReadtToLoadMoreMsg;
    id <BaseMsgContentDelgate> m_delegate;
    id <BaseMsgContentInBackgroundThreadDelgate> m_backgroundThreadDelegate;
    Class m_delegateClass;
    MMTimer *m_LockerTimer;
    MMTimer *m_updateTimeLabelTimer;
    MMTableView *m_tableView;
    UIActivityIndicatorView *m_activityView;
    UIView *m_headerView;
    MMInputToolView *_inputToolView;
    UIView *m_backgroundView;
    NSMutableArray *m_arrDeleteRows;
    UIView *m_deleteContainView;
    _Bool m_bViewDidAppear;
    TrackRoomTipsView *m_trackTipsView;
    struct vector<Class, std::__1::allocator<Class>> m_messageNodeClass;
    _Bool m_bViewUnloaded;
    struct CGPoint m_pTableViewOffset;
    long long m_keyboardHeight;
    NSString *m_text;
    int m_inputMode;
    int m_positionMode;
    int m_contentMode;
    double m_fKeyboardAnimationDuration;
    MsgSearchHelper *m_oMsgSearchHelper;
    int m_iInitTableViewContentOffset;
    _Bool m_bNeedAdjustTableViewContentOffset;
    unsigned int m_uiSearchResultNodeViewHeight;
    long long m_uiInterfaceOrientation;
    MMLoadingView *m_loadingView;
    ShareMessageConfirmLogicHelper *_shareMessageConfirmLogicHelper;
    WXGesture *_gesture;
    MMMultiSelectToolView *_multiSelectView;
    NSMutableArray *m_arrSelectMsgLocalID;
    UIView *m_msgReceivingTipsView;
    unsigned int m_uiSelectSearchMsgID;
    TipsView *m_chatAddFriend;
    TipsView *m_recommandFriend;
    TipsView *m_securityBanner;
    _Bool m_bChatAddFriendShow;
    _Bool m_bSecurityBannerShow;
    _Bool m_bShouldShowKeyboardAnimation;
    _Bool m_bNeedToUpdateTitle;
    _Bool m_bIsRevokeAdding;
    int m_msgCounerDurOneSync;
    _Bool m_bHightlightedSearchedMsgNode;
    NSMutableDictionary *m_dicMesIdForCellIndex;
    struct CGPoint m_decelerateTarget;
    CMessageWrap *m_firstUnReadMsg;
    FirstUnReadTipView *m_jumpFirstUnReadBtn;
    unsigned long long m_unreadCount;
    MMScrollActionSheet *m_scrollActionSheet;
    MMUIWindow *m_fullScreenWindow;
    CMessageNodeData *m_fullScreenNodeData;
    CMessageWrap *m_firstNewInvMsg;
    _Bool m_isMsgReceiveTipsJacking;
    unsigned int m_openTrackScene;
    struct timeval m_menuHideTime;
    _Bool m_shouldScrollToBottomAfterRotate;
    _Bool m_resignInputToolViewFirstResponder;
    _Bool m_textFloatPreviewHiding;
    _Bool m_scrollingTableToBottom;
    struct _NSRange m_scrollingInvisibleRange;
    _Bool m_scrollingToFirstUnRead;
    CMessageWrap *m_lastMsgInNewArray;
    UIView *m_footerView;
    UIActivityIndicatorView *m_footerActivityView;
    _Bool m_needLoadMoreWhenScrollToFistUnRead;
    _Bool m_needHideFirstUnReadBtn;
    _Bool m_isInGestureTransition;
    _Bool m_bMovingToMainFrameTab;
    double m_bannerHeight;
    _Bool m_isPeekPreview;
    MsgImgFullScreenWindow *m_imgFullScreenWnd;
    unsigned int m_uiEnterRoomTime;
    unsigned int m_uiEnterRoomUnreadCount;
    _Bool m_bCloseForViewDetail;
    UIImageView *m_showNewView;
    unsigned int _startTime;
    _Bool _m_bIsInMainFrame;
    int m_searchScene;
    NSMutableArray *m_shareContacts;
    BadRoomLogicController *_m_badRoomLogicController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)AsyncSendMessage:(id)arg1;
- (void)BeginPlaying:(id)arg1 FromTouch:(_Bool)arg2;
- (void)CancelRecording;
- (void)EndPlaying:(id)arg1;
- (id)GetContact;
- (id)GetCurrentViewController;
- (id)GetMessageNodeDataArray;
- (id)GetMessagesWrapArray;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(_Bool *)arg1;
- (void)JumpToViewStreamVideo:(id)arg1;
- (void)MenuControllerWillHide:(id)arg1;
- (void)MenuControllerWillShow:(id)arg1;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)MoreMsgBtnUpdate:(unsigned int)arg1 unReadCount:(unsigned int)arg2;
- (void)OnAppDataPreview:(id)arg1 MsgWrap:(id)arg2;
- (void)OnEndPlaying:(id)arg1;
- (void)OnFinished;
- (void)OnMsgDownloadAppAttachCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (void)OnMultiDeleteMessage:(id)arg1;
- (void)OnMultiEmailMessage:(id)arg1;
- (void)OnMultiFavAddMessage;
- (void)OnMultiForwardMessage;
- (void)OnMultiMsgMoreOperation:(id)arg1;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)PlayShortVideo:(id)arg1;
- (void)PlayVideo:(id)arg1;
- (void)PreviewAppNode:(id)arg1 MsgWrap:(id)arg2 Pop:(_Bool)arg3;
- (void)PreviewImage:(id)arg1;
- (id)QueryMsgText:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 LeftCount:(unsigned int *)arg5;
- (void)ReloadView;
- (void)Reset;
- (void)ScrollToBottomAnimated:(_Bool)arg1;
- (void)ScrollToBottomAnimatedAndLoadMoreNode;
- (void)SendEmojiArtMessageToolView:(id)arg1;
- (void)SendEmoticonMesssageToolView:(id)arg1;
- (void)SendTextMessageToolView:(id)arg1;
- (void)SetMsgPlayed:(id)arg1;
- (void)SetVoiceEnabled:(_Bool)arg1;
- (_Bool)ShouldShowKeyboardAnimation;
- (void)ShowEarBackTips;
- (void)ShowEarTips;
- (void)ShowMultiSelectMoreOperation:(id)arg1;
- (void)ShowVolumeTips;
- (void)StartDownloadShortVideo:(id)arg1;
- (void)StartDownloadVideo:(id)arg1;
- (void)StartPlayingNodeView:(unsigned int)arg1;
- (void)StartRecording;
- (void)StartUploadVideo:(id)arg1;
- (void)StopDownloadVideo:(id)arg1;
- (void)StopDownloadVideoWithKVReport:(id)arg1;
- (void)StopPlayingNodeView:(unsigned int)arg1;
- (void)StopRecording;
- (void)StopUploadVideo:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)ToolViewPositionDidChanged:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)ToolViewStatusCanSupportAutorotateToInterfaceOrientation:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addMessageNode:(id)arg1 layout:(_Bool)arg2 addMoreMsg:(_Bool)arg3;
- (void)addReceiveMessageNode:(id)arg1;
- (id)addSplitNode:(id)arg1 addMoreMsg:(_Bool)arg2;
- (void)addTimeNode:(id)arg1 layout:(_Bool)arg2 addMoreMsg:(_Bool)arg3;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)adjustDeleteViewRect;
- (void)adjustTableViewOffset;
- (void)adjustTableViewRect;
- (void)adjustViewAndNavBarRect;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)animateHideFirstUnReadButton;
- (void)animateShowFirstUnReadButton:(float)arg1;
- (void)beginLabelTimer;
- (void)beginLockerTimer;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canShowEnterpriseBrandEntry;
- (_Bool)canShowFavEntry;
- (_Bool)canShowLocation;
- (_Bool)canShowSight;
- (id)captureViewParams;
- (id)chatContactForMessageWrap:(id)arg1;
- (void)checkShowRecommandFriendTip:(_Bool)arg1;
- (void)checkShowSecurityBannerTip:(_Bool)arg1;
- (void)checkTips:(_Bool)arg1;
- (void)clearCaptureViewParams;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)clickLinkToExpose;
- (void)clickNewAASysMsg:(id)arg1 withMsgLocalID:(unsigned int)arg2;
- (void)clickReceiveBrandMsg;
- (void)clickShieldBrandMsg;
- (void)contactInfoReturn;
- (id)contactShareMsgFromUser:(id)arg1 toUser:(id)arg2 sharedContact:(id)arg3;
- (void)dealloc;
- (void)deleteAllMessage;
- (void)deleteMail:(id)arg1;
- (void)deleteNode:(id)arg1;
- (void)deleteNode:(id)arg1 withDB:(_Bool)arg2 animated:(_Bool)arg3;
- (void)didExitRoom;
- (void)didFinishedLoading:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)didSelectSearchResultForMessageWrap:(id)arg1;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)endSearchAndDisplay;
- (void)enterChat:(id)arg1;
- (id)findImageNodeView:(unsigned int)arg1;
- (id)findNodeDataByLocalId:(unsigned int)arg1;
- (id)findNodeDataByView:(id)arg1;
- (unsigned long long)findNodeIndexByLocalId:(unsigned int)arg1;
- (id)findSearchedMsgIndexPath;
- (void)fixInputToolViewKeyboard;
@property(retain, nonatomic) WXGesture *gesture; // @synthesize gesture=_gesture;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)gestureWillBeginTransition:(id)arg1;
- (void)gestureWillEndTransition:(id)arg1 isCanceld:(_Bool)arg2;
- (double)getAddFriendTipHeight;
- (id)getAttachmentViewServiceAppList;
- (unsigned long long)getCurContentSizeHeight;
- (id)getCurrentChatName;
- (double)getCustomizedAreaWidth;
- (id)getFirstContentMessageNodeFromArray:(id)arg1;
- (unsigned long long)getFirstUnReadMessageIndex;
- (unsigned long long)getFirstUnReadSplitNodeIndex;
- (id)getHomePageBarButton;
- (struct CGRect)getImageNodeRectInScreen:(unsigned int)arg1;
- (struct CGRect)getInnerVisibleRectInScreen:(struct CGRect)arg1;
- (double)getInvisibleHeight;
- (id)getLastContentMessageNodeFromArray:(id)arg1;
- (unsigned long long)getLastNodePreContentSizeHeight;
- (id)getLastSentMsg;
- (id)getLeftBarButton;
- (double)getMaxContentHeightForNodeView:(id)arg1;
- (id)getMessageChatContactByMessageWrap:(id)arg1;
- (long long)getMessageNodePosition:(id)arg1;
- (unsigned long long)getMsgContentSizeHeight:(unsigned int)arg1;
- (unsigned long long)getMsgNodeCount;
- (id)getNavigationButton:(id)arg1;
- (id)getNodeDataByIndex:(unsigned long long)arg1;
- (struct CGRect)getNodeRectInScreen:(unsigned int)arg1;
- (id)getParentTableView;
- (id)getParentView;
- (id)getRightBarButton;
- (unsigned long long)getRowHeight:(id)arg1;
- (double)getSearchBarHeight;
- (double)getSecurityBannerTipHeight;
- (id)getServiceAppList;
- (double)getTableViewVisibleHeightWithOrientation:(long long)arg1;
- (double)getTipsHeight;
- (id)getTitleLableViewWithMaxWidth:(double)arg1 title:(id)arg2;
- (id)getViewController;
- (double)getVisibleHeight;
- (struct CGRect)getVisibleRectInScreen:(id)arg1;
- (id)getVoipBarButton;
- (void)handleAfterDeleteAllMessage;
- (void)handleDeleteAllMessage;
- (_Bool)hasCardPkgEntry;
- (_Bool)hasGroupPayEntry;
- (_Bool)hasRedEnvelopesEntry;
- (_Bool)hasServiceEntry;
- (void)hasTapReaderNodeView;
- (_Bool)hasTransferMoneyEntry;
- (void)headerImageClicked:(id)arg1;
- (void)headerImageClickedWithMsg:(id)arg1;
- (void)hideToolViewAnimated:(_Bool)arg1;
- (void)hideTrackRoomTips;
- (void)highLightSelectSearchCell;
- (_Bool)ifJumpToPreviewAfterDownloadSuccess:(unsigned int)arg1;
- (id)init;
- (void)initAllowMultiTalk;
- (void)initAllowNameCardFollowRedEnvelope;
- (void)initAllowRecommendApp;
- (void)initAllowVoiceInput;
- (void)initAllowVoip;
- (void)initAllowWxTalk;
- (void)initAllowWxTalkFollowSight;
- (void)initData;
- (void)initGestureRecognizer;
- (void)initHistroyMessageNodeData;
- (void)initMessageNodeClass;
- (void)initMsgSearchHelper:(int)arg1;
- (void)initMultiSelectToolView;
- (void)initNavigationView;
- (void)initSearchBar;
- (void)initTableHeaderView;
- (void)initTableView;
- (void)initToolEmoticonView;
- (void)initToolView;
- (void)initView;
- (_Bool)isAllowVoiceInput;
- (_Bool)isAllowVoip;
- (_Bool)isAllowWxTalk;
- (_Bool)isChatStatusNotifyOpen;
- (_Bool)isContactSizeOverScreen;
- (_Bool)isInputViewPositionDown;
- (_Bool)isLastMsg:(id)arg1;
- (_Bool)isMessageShowInTableViewWithLocalID:(unsigned int)arg1;
- (_Bool)isMsgCanRevoke:(id)arg1;
- (_Bool)isMsgLastSend:(id)arg1;
- (_Bool)isPeekPreview;
- (_Bool)isRectVisibleInTableView:(struct CGRect)arg1;
- (_Bool)isScrollToBottom;
- (_Bool)isShowHeadImage:(id)arg1;
- (_Bool)isViewControllerAnimated;
- (void)jumpToDetail:(id)arg1;
- (void)jumpToShakeView:(unsigned int)arg1;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned int)arg3;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned int)arg3 fromBanner:(_Bool)arg4;
- (void)keyboardWillHide;
- (void)loadingAfterForwardMessageOK;
- (void)locateTableViewWithLocalID:(unsigned int)arg1;
- (void)locateToMsg:(id)arg1;
- (void)lockerTimesup;
- (void)longPressOnHeadImage:(id)arg1;
- (void)longPressOnHeadImageForDebug:(id)arg1;
@property(retain, nonatomic) MMTimer *m_LockerTimer; // @synthesize m_LockerTimer;
@property(nonatomic) _Bool m_bIsInMainFrame; // @synthesize m_bIsInMainFrame=_m_bIsInMainFrame;
@property(nonatomic) __weak id <BaseMsgContentInBackgroundThreadDelgate> m_backgroundThreadDelegate; // @synthesize m_backgroundThreadDelegate;
@property(retain, nonatomic) BadRoomLogicController *m_badRoomLogicController; // @synthesize m_badRoomLogicController=_m_badRoomLogicController;
@property(nonatomic) __weak id <BaseMsgContentDelgate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIView *m_msgReceivingTipsView; // @synthesize m_msgReceivingTipsView;
@property(nonatomic) int m_searchScene; // @synthesize m_searchScene;
@property(retain, nonatomic) NSMutableArray *m_shareContacts; // @synthesize m_shareContacts;
@property(retain, nonatomic) MMTimer *m_updateTimeLabelTimer; // @synthesize m_updateTimeLabelTimer;
- (void)makeCell:(id)arg1 row:(unsigned long long)arg2;
- (void)msgSearchBarCancel;
- (void)msgSearchBarDoSearch;
- (void)msgSearchBarSearchByName;
- (void)msgSearchBarSearchByTime;
- (void)my_viewDidUnload;
- (void)my_viewWillUnload;
- (void)newMessageFromContactInfo:(id)arg1;
- (id)newMessageNodeViewForMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (long long)numberOfSections;
- (void)onBackButtonClicked:(id)arg1;
- (void)onChatBackgroundChanged:(id)arg1;
- (void)onClickFavVideoMenu;
- (void)onClosePlayer;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onCommentOnMessageWrap:(id)arg1;
- (void)onCurrentPageMsgReMoved:(id)arg1;
- (void)onDeleteAllMsg;
- (void)onDeleteMessage:(id)arg1;
- (void)onEditMessage:(id)arg1;
- (void)onExposeTemplateMsg:(id)arg1;
- (void)onFinishMultiSelect:(id)arg1;
- (void)onForwardMessageOK;
- (void)onFullScreenWindowWillHide;
- (void)onGroupPayButtonClick;
- (void)onHideKeyboard;
- (void)onHideMultiSelectView;
- (void)onIdleTimerUtilVoipQuit;
- (void)onImgMsgLocate:(id)arg1 vc:(id)arg2;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onLoadDownMoreMessage:(id)arg1;
- (void)onLoadFirstScreenMsg:(_Bool)arg1;
- (void)onLoadFirstUnreadMsg:(id)arg1;
- (void)onLoadMessageFail;
- (void)onLoadMoreMessage;
- (void)onMassSendSendAgain:(id)arg1;
- (void)onMoreOperateWithMsgId:(id)arg1;
- (void)onMsgImgPreviewDataRequired:(id)arg1;
- (void)onMsgImgWindowDidHideToMsg:(id)arg1;
- (void)onMsgImgWindowDidShowFromMsg:(id)arg1;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1;
- (void)onMsgImgWindowWillShowFromMsg:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiTalkButtonClick;
- (void)onNodeViewChanged;
- (void)onOpenMyCardPkgViewController;
- (void)onOpenTrackRoom:(unsigned int)arg1;
- (void)onPan:(id)arg1;
- (void)onPerformAction:(id)arg1;
- (void)onPerformExposeAction:(id)arg1;
- (void)onPerformIconAction:(id)arg1;
- (void)onPlayAttachVideo:(id)arg1 vc:(id)arg2;
- (void)onPositionModeChangeTo:(int)arg1 Animated:(_Bool)arg2;
- (void)onReceiveSecurityBannerMsg:(id)arg1 withWording:(id)arg2;
- (void)onReturn:(id)arg1;
- (void)onSYncEnd;
- (void)onScrollToBottom;
- (void)onScrollToFirstUnReadMsg;
- (void)onSelectLocation;
- (void)onShareCard;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 sentImmediately:(_Bool)arg3;
- (void)onSightPictureTaken:(id)arg1;
- (void)onSightTipsOK;
- (void)onSightViewDetail:(id)arg1 vc:(id)arg2;
- (void)onSwipeGestureRecognizer:(id)arg1;
- (void)onTextDeleteAll;
- (void)onTipViewClick:(id)arg1;
- (void)onTipsViewClick:(id)arg1;
- (void)onTipsViewClose:(id)arg1;
- (void)onToolViewDidMoveToWindow;
- (void)onTopBarFrameChanged;
- (void)onTouchDown;
- (void)onTrackRoomTipsViewClick;
- (void)onTrySHowFirstUnReadButton;
- (void)onUpdateTimeLabelTimer:(id)arg1;
- (void)onVideoVoipInvite;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onViewDisappear;
- (void)onVoipInvite;
- (void)openCameraController;
- (void)openChatInfo:(id)arg1;
- (void)openHomePage:(id)arg1;
- (void)openMediaBrowser;
- (void)openMyFavoritesListController;
- (void)openServiceApp:(id)arg1;
- (void)openServiceAppListController;
- (void)openVideoCall;
- (void)openVoiceCall;
- (void)pasteImage:(id)arg1;
- (void)preCreateMessageContentNode:(id)arg1;
- (void)preCreateMessageSplitNode:(id)arg1;
- (void)preCreateMessageTimeNode:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)previewActionItems;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)readerViewClickedWithMsg:(id)arg1;
- (void)redEnvelopesLogic;
- (void)reloadBackgroundView;
- (void)reloadMessagesInternal;
- (void)reloadNodeWithMessageWrap:(id)arg1;
- (void)reloadTableHeaderView:(_Bool)arg1;
- (void)reloadTableViewNode;
- (void)removeAllObjectsFromMessageNodeDatas;
- (void)removeLastTimeNode;
- (void)removeObjectsFromMessageNodeDatas:(id)arg1;
- (void)removeVoiceTip;
- (void)removeVoipAndPhoneTip;
- (void)resetMsgSearchHelper;
- (void)resetToolView;
- (void)revokeMsgByNodeView:(id)arg1;
- (void)rotate:(long long)arg1 duration:(double)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollRectToVisiblePosition:(struct CGRect)arg1;
- (void)scrollTableToBottomAnimated:(_Bool)arg1 init:(_Bool)arg2;
- (void)scrollToFirstUnReadMessage:(id)arg1 animated:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)sendCaptruedImage:(id)arg1;
- (void)sendMessageWithMsgWrap:(id)arg1;
- (void)sendShortVideoMsg:(id)arg1 thumbImg:(id)arg2;
- (void)setAddFriendTipShow:(_Bool)arg1 contact:(id)arg2;
- (void)setIsPeekPreview:(_Bool)arg1;
- (void)setSecurityTipShow:(_Bool)arg1;
- (void)setTableFooterView:(_Bool)arg1;
@property(retain, nonatomic) MMInputToolView *toolView; // @synthesize toolView=_inputToolView;
- (void)shareMsgToOpenSDKByNodeView:(id)arg1;
- (_Bool)shouldEnableKeyboardInteractivePop;
- (_Bool)shouldHideOrginInputToolView;
- (_Bool)shouldHideToolViewOnKeyboardHide;
- (_Bool)shouldInitWXEmoticonView;
- (_Bool)shouldInteractivePop;
- (_Bool)shouldShowOpenTrackRoom;
- (void)showAddFriendTip:(_Bool)arg1;
- (void)showAlertTooMany;
- (void)showAttachmentView;
- (void)showEarModeTips;
- (void)showExposeViewController;
- (void)showLoadingView;
- (void)showLoadingViewWithText:(id)arg1;
- (void)showMultiTalkMessageInfoWithSessionItem:(id)arg1 msgLocalID:(unsigned int)arg2;
- (void)showMultiTalkSessionInfo:(id)arg1;
- (void)showReceiveMsgTips;
- (_Bool)showTrackExitAlert;
- (void)showTrackRoomTips;
- (void)startReceiveMsgWithTips:(id)arg1;
- (void)startVoiceAnimatingAtNodeId:(unsigned int)arg1;
- (void)statEnterMsgChat;
- (void)stopAllShortVideo;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)stopLabelTimer;
- (void)stopLoading;
- (void)stopLoadingAndShowOk;
- (void)stopLoadingAndShowOkWithText:(id)arg1;
- (void)stopLockerTimesup;
- (void)stopReceiveMsg;
- (void)switchEarMode;
- (void)systemActived:(id)arg1;
- (void)systemResigned:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tagForActivePage;
- (id)tagForCurrentPage;
- (void)tagLink:(id)arg1 messageWrap:(id)arg2;
- (void)tapAppNodeView:(id)arg1;
- (void)tapFriendCard_NodeView:(id)arg1 WithContact:(id)arg2 WithMsg:(id)arg3;
- (void)tapImage_NodeView:(id)arg1;
- (void)tapLocation_NodeView:(id)arg1;
- (void)tapPushContact_NodeView:(id)arg1;
- (void)tapPushMail_NodeView:(id)arg1 withPushMailWrap:(id)arg2;
- (void)tapReader_NodeView:(id)arg1;
- (void)tapStatus_NodeView:(id)arg1;
- (void)tapText_NodeView:(id)arg1;
- (void)tapVideoStatus_NodeView:(id)arg1;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded_TableView:(id)arg1 withEvent:(id)arg2;
- (void)transferMoneyLogic;
- (void)tryAddUnReadSplitNode;
- (void)tryMoveToMainFrame;
- (void)tryScrollToBottomAnimated:(_Bool)arg1;
- (void)trySetInputToolviewFirstResponder;
- (void)tryShowFirstUnReadButtonAnimated:(_Bool)arg1;
- (void)unHighLightSelectSearchCell;
- (void)updateBanner;
- (void)updateChatRoomData:(id)arg1;
- (void)updateDeleteCount;
- (void)updateFirstUnReadButtonOnShowBanner:(double)arg1;
- (void)updateMessageNodeImageLoadingPercent:(unsigned int)arg1 percent:(unsigned int)arg2;
- (void)updateMessageNodeStatus:(id)arg1;
- (void)updateMessageNodeViewForOrientation:(id)arg1;
- (void)updateOpBtnState:(_Bool)arg1;
- (void)updateRightBar;
- (void)updateTableContentOffsetAnimated:(_Bool)arg1 OffsetDelta:(float)arg2;
- (void)updateTableLayoutAnimateDuration:(double)arg1 Orientation:(long long)arg2;
- (void)updateTableViewRowWithLocalID:(unsigned int)arg1;
- (void)updateTimeNodeViewForOrientation:(id)arg1;
- (void)updateTitleView:(id)arg1;
- (void)updateToolViewOrigin;
- (void)updateTypingTitle:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidUnload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAppear;
- (void)willDismissAndShow;
- (void)willDisshow;
- (void)willEnterRoom;
- (void)willShow;
- (void)willShowMenuController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

