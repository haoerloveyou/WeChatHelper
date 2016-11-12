//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "WCCanvasPageViewControllerDelegate.h"
#import "WCFacadeExt.h"
#import "WCImageFullScreeViewMgrExt.h"
#import "WCImageViewDelegate.h"

@class MMAdaptiveLabel, MMImageGridView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIButton, WCMediaItem;

@interface WCContentItemViewTemplateGrid : WCContentItemBaseView <WCCanvasPageViewControllerDelegate, WCImageViewDelegate, WCImageFullScreeViewMgrExt, WCFacadeExt>
{
    MMAdaptiveLabel *_descriptionView;
    MMImageGridView *_imageGridView;
    UIButton *_moreButton;
    UIButton *_moreImageButton;
    WCMediaItem *m_currentMediaItem;
    NSMutableArray *m_arrMediaItem;
    NSMutableSet *_setViewMediaIndex;
    unsigned long long _viewInitIndex;
    unsigned int _loadedStartTime;
    unsigned int _loadedEndTime;
    NSMutableDictionary *_dicMediaStartTime;
    NSMutableDictionary *_dicMediaEndTime;
    NSMutableArray *_arrNeedLogMediaID;
    NSMutableArray *_arrPreloadMediaID;
    NSMutableArray *_arrDownloadMediaID;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
- (void)addFavorite;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (void)hideMenu;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)onAddDownloadQueue:(id)arg1 downloadType:(int)arg2;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(int)arg2;
- (void)onClickWCCanvasImage:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)onCloseCanvasPageView;
- (void)onDownloadFinish:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onExposeFromImage:(id)arg1;
- (void)onFavoriteAdd:(id)arg1;
- (void)onLongPressedWCImage:(id)arg1;
- (void)onShareToOpenSDK:(id)arg1;
- (void)onViewAnimationFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)onViewAnimationWillHide;
- (void)shareToOpenSDK;
- (void)throwUrlMessage;
- (void)tryLogClickBigImage;
- (void)tryLogThumbImageLoadedEffiency:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

