//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "ImageScrollViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMAnimationTipView, MMUIViewController, NSMutableDictionary, NSString;

@interface MsgImgFullScreenContainer : MMUIScrollView <UIScrollViewDelegate, ImageScrollViewDelegate, WCActionSheetDelegate>
{
    NSMutableDictionary *dicVisiblePageIndex;
    int m_iNumberOfPages;
    int m_iCurrentPage;
    MMAnimationTipView *m_tipView;
    _Bool m_bFromPicker;
    struct CGRect _originImageRectInScreen;
    id <MsgImgFullScreenContainerDelegate> m_delegate;
    MMUIViewController *m_viewController;
}

- (void).cxx_destruct;
- (void)ImageScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)OnLongPress:(id)arg1;
- (void)OnLongPressBegin:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addToFavorites;
- (void)animateShowWithOriginRectInScreen:(struct CGRect)arg1;
- (void)clearView;
- (struct CGPoint)contentOffsetForPagingScrollView;
- (struct CGSize)contentSizeForPagingScrollView;
- (void)forwardMessage;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForPagingScrollView:(long long)arg1;
- (id)getPhotoatIndex:(unsigned long long)arg1;
- (id)imageAtPage:(unsigned long long)arg1;
- (unsigned long long)imageCount;
- (void)initScrollView;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isDisplayingPageForIndex:(unsigned long long)arg1;
@property(nonatomic) _Bool m_bFromPicker; // @synthesize m_bFromPicker;
@property(nonatomic) __weak id <MsgImgFullScreenContainerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) int m_iCurrentPage; // @synthesize m_iCurrentPage;
@property(nonatomic) int m_iNumberOfPages; // @synthesize m_iNumberOfPages;
@property(nonatomic) __weak MMUIViewController *m_viewController; // @synthesize m_viewController;
- (void)onDoubleTap:(id)arg1;
- (void)onOperate;
- (void)onSavedPhotosAlbum;
- (void)onSingleTap:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setPage:(unsigned int)arg1 atIndex:(unsigned long long)arg2;
- (void)tilePages;
- (void)transitionToNewSize;
- (void)updatePageCount:(unsigned int)arg1;
- (void)updatePhotoatIndex:(unsigned long long)arg1;
- (id)viewAtPage:(unsigned long long)arg1 frame:(struct CGRect)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

