//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ChatRoomMemberGridViewDelegate.h"
#import "ILinkEventExt.h"
#import "MMToastViewControllerDelegate.h"
#import "SetTrustedFriendEmptyViewDelegate.h"
#import "TrustedFriendsLogicDelegate.h"
#import "UIAlertViewDelegate.h"

@class MMTableViewInfo, MMToastViewController, NSString, SetTrustedFriendEmptyView, TrustedFriendsLogic;

@interface SetTrustedFriendsViewController : MMUIViewController <ChatRoomMemberGridViewDelegate, UIAlertViewDelegate, TrustedFriendsLogicDelegate, SetTrustedFriendEmptyViewDelegate, ILinkEventExt, MMToastViewControllerDelegate>
{
    MMTableViewInfo *_m_tableViewInfo;
    TrustedFriendsLogic *_m_trustedFriendsLogic;
    SetTrustedFriendEmptyView *_m_emptyView;
    MMToastViewController *_m_toastView;
}

- (void).cxx_destruct;
- (void)addMember;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didAddTrustedFriendsLocally:(id)arg1 contacts:(id)arg2;
- (void)didFailedCGI:(unsigned int)arg1 error:(unsigned int)arg2 msg:(id)arg3;
- (void)didFinishGetTrustedFriends:(id)arg1 contacts:(id)arg2;
- (void)didFinishSyncTrustedFriends:(id)arg1 contacts:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)didRemoveTrustedFriendsLocally:(id)arg1 contacts:(id)arg2;
- (void)didStartCGI:(unsigned int)arg1;
- (unsigned long long)getMemberViewColumnCount;
- (void)goBackToMySetting;
- (id)init;
- (void)initEmptyView;
- (void)initMemberView;
- (void)initNavigationBar;
- (void)initTableView;
- (_Bool)isShowEmptyView;
@property(retain, nonatomic) SetTrustedFriendEmptyView *m_emptyView; // @synthesize m_emptyView=_m_emptyView;
@property(retain, nonatomic) MMTableViewInfo *m_tableViewInfo; // @synthesize m_tableViewInfo=_m_tableViewInfo;
@property(retain, nonatomic) MMToastViewController *m_toastView; // @synthesize m_toastView=_m_toastView;
@property(retain, nonatomic) TrustedFriendsLogic *m_trustedFriendsLogic; // @synthesize m_trustedFriendsLogic=_m_trustedFriendsLogic;
- (void)makeFooterView:(id)arg1;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListSection:(id)arg1;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)onAddTrustedFriend;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onPressBackBtn;
- (void)onPressDoneBtn;
- (void)relayoutNaviBarButton:(_Bool)arg1;
- (void)reloadMemberView;
- (void)setAllViewHidden;
- (void)setShowRemoveMember;
- (void)showEnd;
- (void)showSpecificView:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillBePresented:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

