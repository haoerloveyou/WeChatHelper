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

@class MultiImageScrollView, NSMutableArray, NSString, ScanQRCodeLogicController, WCActionSheet;

@interface PhotoViewController : MMFullScreenViewController <WCActionSheetDelegate, BaseScanLogicDelegate, MultiImageScrollViewDelegate, IHttpCacheExt>
{
    MultiImageScrollView *pagingScrollView;
    NSMutableArray *m_arrayImageUrl;
    NSMutableArray *m_arrImageScrollView;
    _Bool m_bAnimating;
    _Bool m_isFromWebview;
    _Bool _oldNavigationBarAlpha;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheet *m_actionSheet;
    NSString *m_appID;
}

- (void).cxx_destruct;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(_Bool)arg4;
- (void)OnLongPress:(id)arg1;
- (void)OnLongPressBegin:(id)arg1;
- (void)OnMMUIHookViewFrameChanged:(id)arg1;
- (void)PreScanQRCode;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addToFavorites;
- (void)dealloc;
- (void)delayHideViewBySetAlpha;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)forwardMessage;
- (id)genKeyForUrl:(id)arg1;
- (unsigned long long)getIndexArrayImageUrl:(id)arg1;
- (unsigned long long)getIndexArrayImageUrlCacheKey:(id)arg1;
- (void)hideFullScreen;
- (void)hideStatusBar;
- (id)imageAtPage:(unsigned int)arg1;
- (id)imageDataAtPage:(unsigned int)arg1;
- (id)imageWithData:(id)arg1;
- (id)init;
- (void)initImageViewerWithUrls:(id)arg1 current:(id)arg2;
- (void)initImageViewerWithUrls:(id)arg1 current:(id)arg2 appID:(id)arg3;
- (void)initNavigationBar;
- (void)initScrollView;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) _Bool isFromWebview; // @synthesize isFromWebview=m_isFromWebview;
- (void)onAnimationDidStop;
- (void)onMainWindowFrameChanged;
- (void)onOperate;
- (void)onRightButtonTouchDown:(id)arg1;
- (void)onSavedPhotosAlbum;
- (void)onScanEnds;
- (void)onSingleTap:(id)arg1;
- (void)setPage:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)showFullScreen;
- (void)showFullScreenAnimated:(_Bool)arg1;
- (void)showStatusBar;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tryGetResource:(id)arg1;
- (void)updatePhotoatIndex:(unsigned int)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillDismiss:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

