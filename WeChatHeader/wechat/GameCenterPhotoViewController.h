//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMFullScreenViewController.h"

#import "BaseScanLogicDelegate.h"
#import "IHttpCacheExt.h"
#import "MultiImageScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMUIWindow, MultiImageScrollView, NSArray, NSMutableArray, NSString, ScanQRCodeLogicController, UIPageControl;

@interface GameCenterPhotoViewController : MMFullScreenViewController <WCActionSheetDelegate, BaseScanLogicDelegate, MultiImageScrollViewDelegate, IHttpCacheExt>
{
    MultiImageScrollView *pagingScrollView;
    NSMutableArray *m_arrayImageDatas;
    NSMutableArray *m_arrImageScrollView;
    _Bool m_bAnimating;
    _Bool m_isFromWebview;
    MMUIWindow *m_bgWindow;
    NSArray *m_originalFrameInScreen;
    _Bool _oldNavigationBarAlpha;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    UIPageControl *m_pageCtrl;
    unsigned int m_httpType;
    id <GameCenterPhotoViewControllerDelegate> delegate;
    double m_animationTime;
}

- (void).cxx_destruct;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(_Bool)arg4;
- (void)OnLongPress:(id)arg1;
- (void)OnMMUIHookViewFrameChanged:(id)arg1;
- (void)PreScanQRCode;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addToFavorites;
- (void)dealloc;
@property(nonatomic) __weak id <GameCenterPhotoViewControllerDelegate> delegate; // @synthesize delegate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)forwardMessage;
- (id)genKeyForUrl:(id)arg1;
- (unsigned long long)getIndexArrayImageUrl:(id)arg1;
- (unsigned long long)getIndexArrayImageUrlCacheKey:(id)arg1;
- (void)hideSelf;
- (id)imageAtPage:(unsigned int)arg1;
- (id)init;
- (void)initImageViewerWithItems:(id)arg1 current:(id)arg2;
- (void)initScrollView;
- (void)initWindow;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) double m_animationTime; // @synthesize m_animationTime;
@property(nonatomic) unsigned int m_httpType; // @synthesize m_httpType;
- (void)onAnimationDidStop;
- (void)onChangePage;
- (void)onMainWindowFrameChanged;
- (void)onOperate;
- (void)onRightButtonTouchDown:(id)arg1;
- (void)onSavedPhotosAlbum;
- (void)onSingleTap:(id)arg1;
- (void)setPage:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)showAnimationWithIndex:(unsigned int)arg1;
- (void)showAnimationWithUrl:(id)arg1;
- (void)showSelf;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tryGetResource:(id)arg1;
- (void)updatePhotoatIndex:(unsigned int)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (void)viewDidLoad;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

