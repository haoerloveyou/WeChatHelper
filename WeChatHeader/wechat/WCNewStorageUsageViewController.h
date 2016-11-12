//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IClearDataMgrExt.h"
#import "IScanAppSpaceSizeServiceExt.h"
#import "IWCNewStorageFreeSpaceViewCellExt.h"
#import "UIAlertViewDelegate.h"

@class MMTimer, MMUIScrollView, NSString, UIActivityIndicatorView, WCNewStorageFreeDeviceSpaceViewCell, WCNewStorageFreeWechatSpaceViewCell;

@interface WCNewStorageUsageViewController : MMUIViewController <UIAlertViewDelegate, IClearDataMgrExt, IScanAppSpaceSizeServiceExt, IWCNewStorageFreeSpaceViewCellExt>
{
    _Bool _bLoadFinish;
    _Bool _bScanFinish;
    WCNewStorageFreeWechatSpaceViewCell *headCell;
    WCNewStorageFreeDeviceSpaceViewCell *footerCell;
    UIActivityIndicatorView *loadingView;
    MMUIScrollView *backgroundScrollView;
    NSString *_navigationReturnButtonTitle;
    MMTimer *_m_Timer;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) _Bool bLoadFinish; // @synthesize bLoadFinish=_bLoadFinish;
@property(nonatomic) _Bool bScanFinish; // @synthesize bScanFinish=_bScanFinish;
@property(retain, nonatomic) MMUIScrollView *backgroundScrollView; // @synthesize backgroundScrollView;
- (void)dealloc;
@property(retain, nonatomic) WCNewStorageFreeDeviceSpaceViewCell *footerCell; // @synthesize footerCell;
- (unsigned long long)getDeviceStorageSize;
- (id)getFreeSize;
- (id)getUsageSize;
- (id)getWeChatUsageSize;
@property(retain, nonatomic) WCNewStorageFreeWechatSpaceViewCell *headCell; // @synthesize headCell;
- (void)initData;
- (void)initView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView;
@property(retain, nonatomic) MMTimer *m_Timer; // @synthesize m_Timer=_m_Timer;
@property(retain, nonatomic) NSString *navigationReturnButtonTitle; // @synthesize navigationReturnButtonTitle=_navigationReturnButtonTitle;
- (void)onActionButtonClick:(id)arg1;
- (void)onCleanedCacheSize:(unsigned long long)arg1;
- (void)onInnerDeleteData;
- (void)onLoadDataFinished;
- (void)onNotifyAppSpaceSize;
- (void)onReturn;
- (void)onScanTaskFinished;
- (void)reportSessionData;
- (void)updateCell;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

