//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "RecoverDataManagerDelegate.h"
#import "UIAlertViewDelegate.h"

@class MMLoadingView, MMTableViewInfo, MMTimer, NSObject<OS_dispatch_queue>, NSString, RecoverDataManager;

@interface RecoverDataViewController : MMUIViewController <RecoverDataManagerDelegate, UIAlertViewDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    MMLoadingView *m_loadingView;
    RecoverDataManager *m_recoverDataMgr;
    NSObject<OS_dispatch_queue> *m_workQueue;
    _Bool m_isRunning;
    float _progress;
    MMTimer *_progressTimer;
    _Bool _directRecover;
    NSString *_m_selName;
}

- (void).cxx_destruct;
- (void)addRecoverName:(id)arg1 order:(unsigned long long)arg2;
- (void)adjustTableViewRect;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)finishAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)forceToClose;
- (id)init;
- (void)initView;
- (id)initWithName:(id)arg1;
@property(retain, nonatomic) NSString *m_selName; // @synthesize m_selName=_m_selName;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)onAddRecoverData:(id)arg1 order:(unsigned long long)arg2;
- (void)onDoRecover:(id)arg1;
- (void)onLowSpaceForDBRecover:(id)arg1;
- (void)onRecoverFailure;
- (void)onRecoverProgressUpdate:(float)arg1;
- (void)onRecoverSuccess;
- (void)onRestore;
- (void)selectCell:(id)arg1;
- (void)startAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateProgress;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

