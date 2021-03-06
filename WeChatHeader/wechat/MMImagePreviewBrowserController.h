//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MultiImageScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MultiImageScrollView, NSMutableArray, NSMutableDictionary, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface MMImagePreviewBrowserController : MMUIViewController <MultiImageScrollViewDelegate, WCActionSheetDelegate>
{
    MultiImageScrollView *_pagingScrollView;
    UIButton *_selectedButton;
    UIImageView *_selectedBackImageView;
    UIView *_bottomBar;
    UIButton *_sendButton;
    UIButton *_originImageCheck;
    UIButton *_sendBadge;
    UIImageView *_sendBadgeBackImageView;
    UILabel *_originImageLabel;
    UILabel *_imageLocalNameInfoLabel;
    UILabel *_imageCreateTimeLabel;
    UIView *oTitleBackGroundView;
    NSMutableArray *_imageScrollViewPool;
    NSMutableDictionary *originImageSizeDictionary;
    NSMutableDictionary *imageLocalNameInfoDictionary;
    NSMutableDictionary *imageCreateTimeDictionary;
    UIActivityIndicatorView *_originIndictorView;
    unsigned int startLoadIndex;
    _Bool showTopAndBottonBar;
    int _compressType;
    _Bool m_hasClickSendButton;
    NSMutableArray *_selectedAssetInfos;
    NSMutableDictionary *_thumbImages;
    id <MMImagePickerControlCenter> controlCenter;
    id <MMImagePreviewBrowserControllerDelegate> m_delegate;
    id <MMImagePreviewBrowserControllerDataSource> _m_dataSource;
}

- (void).cxx_destruct;
- (unsigned int)IndexFromSelectedAssetInfosOfPageIndex:(unsigned int)arg1;
- (void)OnCancel:(id)arg1;
- (void)OnClickBackBarButton:(id)arg1;
- (void)OnClickDoneBarButton;
- (void)OnFullScreenChanged;
- (void)OnOriginSizeGot:(id)arg1;
- (void)OnSelectedButtonDone;
- (void)OnSend:(id)arg1;
- (void)baseLoadImage:(id)arg1 isCurrentImage:(_Bool)arg2;
- (void)clearImagePool;
- (void)clearThumbImageCache;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)displayImage:(id)arg1 withPageIndex:(int)arg2;
- (void)getOriginSize;
- (void)getOriginSize:(id)arg1;
- (void)getThumbImage:(id)arg1;
- (void)getThumbImageAtIndex:(unsigned int)arg1;
- (id)imageAtPage:(unsigned int)arg1;
- (id)init;
- (void)initBackBarButton;
- (void)initBackgroundView;
- (void)initBottomBar;
- (void)initData;
- (void)initDoneBarbutton;
- (void)initSelectionControlView;
- (void)initTitle;
- (void)initView;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)loadImage:(id)arg1;
@property(nonatomic) __weak id <MMImagePreviewBrowserControllerDataSource> m_dataSource; // @synthesize m_dataSource=_m_dataSource;
@property(nonatomic) __weak id <MMImagePreviewBrowserControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_hasClickSendButton; // @synthesize m_hasClickSendButton;
- (void)multiImageScrollViewWillBeginDragging;
- (void)onChangePage;
- (void)onGetOriginSize:(id)arg1;
- (void)onImageInfoGot:(id)arg1 withDate:(id)arg2 ofAsset:(id)arg3;
- (void)onOriginImageCheck:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)preloadImage:(id)arg1;
- (void)prepareImagePool:(id)arg1;
- (void)prepareSend;
@property(retain, nonatomic) NSMutableArray *selectedAssetInfos; // @synthesize selectedAssetInfos=_selectedAssetInfos;
- (void)sendSelectedImage;
- (void)setBottomAndTopBarHidden:(_Bool)arg1;
- (void)setCreateTimeAndLocationWithAnimation:(id)arg1;
- (void)setCreateTimeInMiddleLocation:(id)arg1;
- (void)setOriginImageButtonCheck:(_Bool)arg1 SelectedButton:(_Bool)arg2;
- (void)setPageAtIndex:(unsigned int)arg1;
@property(retain, nonatomic) NSMutableDictionary *thumbImages; // @synthesize thumbImages=_thumbImages;
- (void)startBottomBadgePopUpAnimation;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2;
- (void)stopLoadingAfterSent;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

