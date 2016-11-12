//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWebViewPluginBase.h"

#import "EGORefreshTableHeaderDelegate.h"

@class MMWebViewPullDownRefreshView, NSString;

@interface MMWebViewPlugin_PullRefresh : MMWebViewPluginBase <EGORefreshTableHeaderDelegate>
{
    _Bool _bIsDisablePullDown;
    _Bool _bIsDisablePullUp;
    _Bool _bIsEnablePullRefresh;
    MMWebViewPullDownRefreshView *m_headRefreshView;
    _Bool _isReflashingHead;
    _Bool _isRecoverInsetProcessing;
    double m_fLastY;
}

- (void).cxx_destruct;
- (void)disablePullRefresh;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)enablePullRefresh;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)init;
@property(readonly, nonatomic) _Bool isRecoverInsetProcessing; // @synthesize isRecoverInsetProcessing=_isRecoverInsetProcessing;
@property(readonly, nonatomic) _Bool isReflashingHead; // @synthesize isReflashingHead=_isReflashingHead;
- (void)processPullDownRefreshWhenBeginDragging;
- (void)processPullDownRefreshWhenDidScroll:(id)arg1;
- (void)processPullDownRefreshWhenEndDragging:(id)arg1;
- (void)pullDownLoadingHeaderRefreshWhenViewWillAppear;
- (void)realStopAction;
- (void)refreshHead;
- (void)setDisableWebViewScrollViewPullDown;
- (void)setDisableWebViewScrollViewPullUp;
- (void)startPullRefresh;
- (void)stopPullRefresh;
- (void)stopRefreshHeaderView:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

