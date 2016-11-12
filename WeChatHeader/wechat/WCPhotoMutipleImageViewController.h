//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseScanLogicDelegate.h"
#import "RichTextLayoutDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCommentDetailViewControllerFBDelegate.h"
#import "WCFacadeExt.h"
#import "WCImageScrollViewDelegate.h"
#import "WCImageViewDelegate.h"
#import "scrollViewDelegate.h"

@class CContact, ForwardMessageLogicController, MMAnimationTipView, MMHeadImageView, MMScrollView, NSMutableArray, NSMutableSet, NSString, RichTextView, ScanQRCodeLogicController, ShareDataToOpenSDKController, UIButton, UIImageView, UILabel, UIView, WCActionSheet, WCLikeButton;

@interface WCPhotoMutipleImageViewController : MMUIViewController <UIScrollViewDelegate, scrollViewDelegate, WCImageViewDelegate, WCActionSheetDelegate, WCFacadeExt, WCImageScrollViewDelegate, WCCommentDetailViewControllerFBDelegate, RichTextLayoutDelegate, UIAlertViewDelegate, BaseScanLogicDelegate>
{
    MMScrollView *pagingScrollView;
    NSMutableArray *m_arrDatas;
    unsigned int m_uiSource;
    _Bool m_isShowingDataItemList;
    int m_logicType;
    NSMutableSet *recycledImagePage;
    NSMutableSet *recycledSightPage;
    NSMutableSet *visiblePages;
    int firstVisiblePageIndexBeforeRotation;
    double percentScrolledIntoFirstVisiblePage;
    int m_iNumberOfPages;
    int m_iCurrentPage;
    MMAnimationTipView *m_tipView;
    _Bool m_hideWhenDisappear;
    CContact *m_contact;
    UIView *m_titleView;
    UILabel *m_titleOne;
    UILabel *m_titleTwo;
    NSMutableArray *menuItems;
    UIView *bottomView;
    UIImageView *redHeartView;
    UIView *descBackgroundView;
    RichTextView *descLabel;
    MMHeadImageView *headImg;
    UIImageView *lockImgView;
    WCLikeButton *btnLike;
    UIButton *btnComment;
    UIButton *rightBottomCtrl;
    UILabel *likeCountLable;
    UILabel *commentCountLable;
    UIImageView *smallLikeImg;
    UIImageView *smallCommentImg;
    UIButton *setBGButton;
    _Bool m_isTileing;
    _Bool m_supportLandscape;
    _Bool m_scrollViewLayouting;
    _Bool m_orientationRotating;
    _Bool m_isBidirectionalFan;
    _Bool m_backing;
    _Bool m_backEnabled;
    _Bool m_forbidSingleTap;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    _Bool _bIsMoreData;
    _Bool _bIsNoMediaDataOverLimitReq;
    _Bool _bIsLoadingMoreData;
    _Bool _bIsLastDataEmpty;
    _Bool _bIsDirectFreshScrollSize;
    _Bool _bIsShow;
    double _startContentOffsetX;
    double _willEndContentOffsetX;
    double _endContentOffsetX;
    unsigned int _uiMaxContiunePreLoadCount;
    ForwardMessageLogicController *m_forwardMsgLogic;
    _Bool _bShouldShowNetworkStatus;
    WCActionSheet *menu_ActionSheet;
    int m_qrcodeActionSheetIndex;
    ShareDataToOpenSDKController *m_shareDataToOpenSDKViewController;
}

- (void).cxx_destruct;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)PreScanQRCode;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)adjustViewAndNavBarRect;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkNoMoreData;
- (void)configureImagePage:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)configureSightPage:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)contactsReturn:(_Bool)arg1 contact:(id)arg2;
- (struct CGPoint)contentOffsetForPagingScrollView;
- (struct CGSize)contentSizeForPagingScrollView;
- (void)dealloc;
- (void)deleteVisibleCache;
- (id)dequeueRecycledImagePage;
- (id)dequeueRecycledSightPage;
- (void)didAppear;
- (void)didDisshow;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)favoritesAddImg;
- (void)favoritesAddSight;
- (void)flashRedHeartView;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForPageAtIndexForSightView:(unsigned long long)arg1;
- (struct CGRect)frameForPagingScrollView:(_Bool)arg1;
- (id)getCurrentViewController;
- (id)getMediaItemWrapAnywayAt:(unsigned int)arg1;
- (id)getMediaItemWrapAt:(long long)arg1;
- (void)goBackAfterSetBackground;
- (void)handleSingleTap;
- (void)hideFullScreen;
- (void)initBottomView;
- (void)initNavigationBar;
- (void)initScrollView;
- (id)initWithDataItems:(id)arg1 currentIndex:(unsigned int)arg2;
- (id)initWithWCMediaItemWraps:(id)arg1 currentIndex:(unsigned int)arg2;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (_Bool)isDisplayingPageForIndex:(unsigned long long)arg1;
- (_Bool)isMyOwnWC;
- (_Bool)isPrivate;
- (void)layoutBottomView:(_Bool)arg1;
- (void)layoutHiddenView:(_Bool)arg1;
- (void)layoutScrollView:(_Bool)arg1;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) int m_logicType; // @synthesize m_logicType;
@property(nonatomic) unsigned int m_uiSource; // @synthesize m_uiSource;
@property(retain, nonatomic) NSMutableArray *menuItems; // @synthesize menuItems;
- (void)noMoreData;
- (void)onBackButtonClicked;
- (void)onBackFromDetailView;
- (void)onBeforeDeleteData;
- (void)onClickFullSightView:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)onCommentFriend;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onDataItemDeleteFinished:(int)arg1 dataItemID:(id)arg2;
- (void)onDeleteData;
- (void)onDeletePhoto;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onGoToWithUserWC;
- (void)onLongPressedFullSightView:(id)arg1;
- (void)onMakePrivate;
- (void)onMakePublic;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onNetworkActivityStatusChanged;
- (void)onPageChangedWithIndex:(long long)arg1;
- (void)onPopupCommentFriend;
- (void)onPresentBackFromViewController;
- (void)onRestartUpload;
- (void)onRightButtonTouchDown:(id)arg1;
- (void)onSaveToWC;
- (void)onScanEnds;
- (void)onSetDataItemPrivateFinished:(int)arg1 dataItemID:(id)arg2;
- (void)onSetDataItemPublicFinished:(int)arg1 dataItemID:(id)arg2;
- (void)onShowMenu:(id)arg1;
- (void)onSingleTapWCImageScrollView;
- (void)onTouchEndOnFullScreenView:(id)arg1;
- (void)preLoadFinishiedAndReloadData:(id)arg1;
- (void)preLoadProcess;
- (void)redHeartEnlarge;
- (void)redHeartReduce;
- (void)redHeartReduceEnd;
- (void)redHeartShowForAWhile;
- (void)reloadImage:(id)arg1;
- (void)removeScanQRMenuItem;
- (void)reportThisPhoto:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setNaviTitleLineOne:(id)arg1 andLineTwo:(id)arg2;
- (void)setWCBackground;
- (void)shareToDevices;
- (_Bool)shouldAnimateFullScreenViewOnShow:(id)arg1;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)showFullScreen;
- (void)showFullScreen:(_Bool)arg1;
- (void)showLastPictureTips;
- (void)showNoMoreDataAtIndex:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tilePages;
- (_Bool)tryAddScanQRMenuItem;
- (id)tryUpdateMedia:(long long)arg1;
- (void)updateButtonStateAnimate:(_Bool)arg1;
- (void)updateNetworkStatus;
- (void)updatePhotoatIndex:(unsigned long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAppear;
- (void)willDisappear;
- (void)willDisshow;
- (void)willShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

