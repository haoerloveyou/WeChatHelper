//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class MMTimer, MMWebViewController, NSMutableArray, NSMutableDictionary, NSString;

@interface MMWebViewKeepHolderMgr : MMService <MMService>
{
    MMWebViewController *_webViewVCForNewMainFrameBanner;
    NSMutableArray *_dpArrOpenedWebview;
    NSMutableDictionary *_dicBackgroundWebviewTask;
    NSMutableArray *_arrTaskOrder;
    MMTimer *_checkTimer;
    _Bool _bIsDelayLoading;
}

- (void).cxx_destruct;
- (_Bool)addBackgroundTask:(id)arg1 forKey:(id)arg2 IsPresented:(_Bool)arg3;
- (void)cancelHoldWebViewVC:(id)arg1;
- (void)cleanAllBackgroundTask;
- (void)dealloc;
- (void)deleteBackgroundTaskForKey:(id)arg1;
- (void)dp_addWebViewAsWeak:(id)arg1;
- (void)dp_deleteWebView:(id)arg1;
- (void)dp_sendJSEventToAllWebView:(id)arg1 Param:(id)arg2 AppID:(id)arg3 Host:(id)arg4;
- (id)getBackgroundTaskForKey:(id)arg1;
- (id)getCurrentAllPresentingBackgroundVC;
- (id)getKeepHoldWebViewVCForNewMainFrameBanner;
- (id)getKeepHoldWebViewVCTitleForNewMainFrameBanner;
- (_Bool)hasDelayLoadingTask;
- (id)init;
- (void)keepHoldWebViewVCForNewMainFrameBanner:(id)arg1;
- (void)onCheckBackgroundTaskTimeOut;
- (_Bool)onServiceMemoryWarning;
- (void)setDelayLoading:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

