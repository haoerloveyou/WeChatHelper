//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "UIGestureRecognizerDelegate.h"

@class CADisplayLink, CALayer, NSString, SnapshotView, UIImage, UIPanGestureRecognizer, UIView, UIViewController;

@interface WXGesture : MMObject <UIGestureRecognizerDelegate>
{
    id <WXGestureDelegate> _delegate;
    _Bool _isEnable;
    struct {
        unsigned int isGesturePrepared:1;
        unsigned int isTransitioning:2;
        unsigned int isTransitionCanceled:1;
        unsigned int isGestureTransitioning:1;
    } _transitionGestureFlags;
    UIPanGestureRecognizer *internalGesture;
    SnapshotView *bottomView;
    UIView *topView;
    UIView *internalShadowView;
    double startingTranslationValue;
    double animationProgress;
    CADisplayLink *timer;
    UIViewController *curViewController;
    UIImage *fromSnap;
    SnapshotView *fakeNavBar;
    CALayer *depthLayer;
    CDUnknownBlockType _animationCompletionBlock;
}

- (void).cxx_destruct;
- (void)animateTranslationByFrame;
@property(copy, nonatomic) CDUnknownBlockType animationCompletionBlock; // @synthesize animationCompletionBlock=_animationCompletionBlock;
@property(nonatomic) double animationProgress; // @synthesize animationProgress;
- (void)beginTransitionAnimation:(long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) SnapshotView *bottomView; // @synthesize bottomView;
@property(nonatomic) __weak UIViewController *curViewController; // @synthesize curViewController;
- (void)dealloc;
@property(nonatomic) __weak id <WXGestureDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CALayer *depthLayer; // @synthesize depthLayer;
@property(retain, nonatomic) SnapshotView *fakeNavBar; // @synthesize fakeNavBar;
@property(retain, nonatomic) UIImage *fromSnap; // @synthesize fromSnap;
- (id)genBottomView;
- (id)genShadowView;
- (void)gesture:(id)arg1 translation:(struct CGPoint)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCurViewController:(id)arg1 andFromViewSnapshot:(id)arg2;
@property(retain, nonatomic) UIPanGestureRecognizer *internalGesture; // @synthesize internalGesture;
@property(retain, nonatomic) UIView *internalShadowView; // @synthesize internalShadowView;
- (void)panGesture:(id)arg1;
- (void)prepareGestureAnimation;
- (void)setGestureIsEnable:(_Bool)arg1;
@property(nonatomic) double startingTranslationValue; // @synthesize startingTranslationValue;
@property(retain, nonatomic) CADisplayLink *timer; // @synthesize timer;
@property(retain, nonatomic) UIView *topView; // @synthesize topView;
- (id)snapshotForUIView:(id)arg1;
- (void)stopGestureAnimation;
- (void)translateAnimationByTransitionX:(float)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
