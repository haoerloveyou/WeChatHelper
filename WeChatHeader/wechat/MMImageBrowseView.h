//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "MMImageScrollViewHelperDelegate.h"
#import "UIScrollViewDelegate.h"

@class MMEmoticonView, MMImageScrollViewHelper, NSArray, NSString, UIView;

@interface MMImageBrowseView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate>
{
    id <MMImgageBrowseViewDelegate> m_delegate;
    UIView *m_vImage;
    struct CGSize m_szFit;
    MMEmoticonView *m_emoticonView;
    MMImageScrollViewHelper *m_scrollViewHelper;
}

- (void).cxx_destruct;
- (void)InitEmoticonView:(id)arg1;
- (void)InitImageView;
- (void)ResetScroll;
- (void)UpdateData:(id)arg1;
- (void)UpdateData:(id)arg1 orientation:(long long)arg2;
- (void)UpdateEmoticon:(id)arg1;
- (void)UpdateImage:(id)arg1;
- (void)UpdateImage:(id)arg1 orientation:(long long)arg2;
- (void)ZoomForPoint:(struct CGPoint)arg1;
- (id)getScrollView;
- (id)init;
@property(nonatomic) __weak id <MMImgageBrowseViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMEmoticonView *m_emoticonView; // @synthesize m_emoticonView;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
@property(nonatomic) struct CGRect frame;
- (id)viewForZooming;
- (id)viewForZoomingInScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;

@end

