//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIScrollView;

@interface WCCardRefreshComponent : UIView
{
    struct UIEdgeInsets _scrollViewOriginalInset;
    _Bool _automaticallyChangeAlpha;
    CDUnknownBlockType _refreshingBlock;
    CDUnknownBlockType _endRefreshingCompletionBlock;
    long long _state;
    UIScrollView *_scrollView;
    double _pullingPercent;
}

- (void).cxx_destruct;
- (void)addObservers;
- (void)beginRefreshing;
- (void)drawRect:(struct CGRect)arg1;
- (void)endRefreshing;
@property(copy, nonatomic) CDUnknownBlockType endRefreshingCompletionBlock; // @synthesize endRefreshingCompletionBlock=_endRefreshingCompletionBlock;
- (void)executeRefreshingCallback;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAutoChangeAlpha;
@property(nonatomic, getter=isAutomaticallyChangeAlpha) _Bool automaticallyChangeAlpha; // @synthesize automaticallyChangeAlpha=_automaticallyChangeAlpha;
- (_Bool)isRefreshing;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)placeSubviews;
- (void)prepare;
@property(nonatomic) double pullingPercent; // @synthesize pullingPercent=_pullingPercent;
@property(copy, nonatomic) CDUnknownBlockType refreshingBlock; // @synthesize refreshingBlock=_refreshingBlock;
- (void)removeObservers;
@property(readonly, nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets scrollViewOriginalInset; // @synthesize scrollViewOriginalInset=_scrollViewOriginalInset;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)willMoveToSuperview:(id)arg1;

@end

