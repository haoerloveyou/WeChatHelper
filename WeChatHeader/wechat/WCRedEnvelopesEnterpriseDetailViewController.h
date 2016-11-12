//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCRedEnvelopesBaseViewController.h"

#import "IZCWScrollNumViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCRedEnvelopesCommentInputToolViewDelegate.h"
#import "WebAddContactDelegate.h"

@class MMTableView, NSString, UIButton, UIImageView, UIView, WCRedEnvelopesCommentInputToolView, WCUITextField;

@interface WCRedEnvelopesEnterpriseDetailViewController : WCRedEnvelopesBaseViewController <WebAddContactDelegate, IZCWScrollNumViewDelegate, UITableViewDelegate, UITableViewDataSource, WCRedEnvelopesCommentInputToolViewDelegate>
{
    id <WCRedEnvelopesEnterpriseDetailViewControllerDelegate> m_delegate;
    _Bool m_loadingMoreOrderList;
    MMTableView *m_tableView;
    _Bool m_bDidBack;
    WCUITextField *m_oWishingTextField;
    UIView *m_oHeaderView;
    WCRedEnvelopesCommentInputToolView *oWCRedEnvelopesCommentInputToolView;
    UIView *oMsgAnimationView;
    UIView *oMoneyAnimationView;
    UIView *oTableAnimationView;
    UIView *oTopHeaderView;
    UIView *oNavigationBarView;
    UIImageView *commentImageView;
    UIButton *commentButton;
    _Bool m_bEnterpriseRedEnvelopes;
    int enWCRedEnvelopesEnterpriseDetailViewControllerScene;
    unsigned int m_uiStatFromScene;
}

- (void).cxx_destruct;
- (id)GetHeaderView:(id)arg1;
- (id)GetNavigationBarViewHeader:(id)arg1;
- (id)GetViewHeader:(id)arg1;
- (void)OnLeftBarButtonDone;
- (void)OnLeftBarButtonDoneLogic;
- (void)OnRealnameVerfitySuccess:(id)arg1;
- (void)OnToolViewDissmiss;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (void)OnWebAddContactReturn;
- (void)SendTextMessageToolView:(id)arg1;
- (void)animationForLabel;
- (void)commentRedEnvelopes;
- (void)dealloc;
@property(nonatomic) int enWCRedEnvelopesEnterpriseDetailViewControllerScene; // @synthesize enWCRedEnvelopesEnterpriseDetailViewControllerScene;
- (id)genNumView;
- (id)getAnimationView:(id)arg1;
- (id)getBottomView;
- (struct CGRect)getFinalBoundsForDetailView;
- (id)getNoMoreBottomView;
- (void)gotoBalanceDetail;
- (void)gotoUrl;
- (void)handleRedEnvelopesOperation:(id)arg1;
- (void)handleTailOperation;
- (id)init;
- (void)initContainerView;
- (void)initNavigationBar;
- (void)initTableView;
- (void)loadMoreOrderList;
@property(nonatomic) _Bool m_bEnterpriseRedEnvelopes; // @synthesize m_bEnterpriseRedEnvelopes;
@property(nonatomic) unsigned int m_uiStatFromScene; // @synthesize m_uiStatFromScene;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)reportChangeLinkClick:(unsigned int)arg1 Url:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeftCloseBarButton;
- (void)startOpenAnimation;
- (void)statExpourseOperation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)watchMyRedEnvelopesList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

