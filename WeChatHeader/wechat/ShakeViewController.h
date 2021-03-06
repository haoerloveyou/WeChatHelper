//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IRecordPermissionCheckExt.h"
#import "IShakeCardMgrExt.h"
#import "IUiUtilExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "MMImagePickerManagerDelegate.h"
#import "MMPickerViewDelegate.h"
#import "MMTipsViewControllerDelegate.h"
#import "ShakeBeaconSingleViewDelegate.h"
#import "ShakeBgImgDownloadMgrExt.h"
#import "ShakeCardDetailViewDelegate.h"
#import "ShakeCheckerDelegate.h"
#import "ShakeListDelegate.h"
#import "ShakeLogicProxyDelegate.h"
#import "ShakeMainFrameDelegate.h"
#import "ShakeRangingBeaconsExt.h"
#import "ShakeSettingViewControllerDelegate.h"
#import "ShakeTvHistoryViewDelegate.h"
#import "ShakeTypeBarDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "shakeSingleViewDelegate.h"

@class CShakeChecker, MMHDHeadImageView, MMTipsViewController, NSString, ShakeBeaconSingleView, ShakeCardDetailView, ShakeLogicProxy, ShakeMainView, ShakeSingleView, ShakeTvHistoryView, ShakeTypeBar;

@interface ShakeViewController : MMUIViewController <IVOIPUILogicMgrExt, ShakeListDelegate, ShakeBgImgDownloadMgrExt, ShakeCheckerDelegate, MMPickerViewDelegate, ShakeLogicProxyDelegate, shakeSingleViewDelegate, WCActionSheetDelegate, ShakeMainFrameDelegate, MMImagePickerManagerDelegate, ShakeSettingViewControllerDelegate, MMTipsViewControllerDelegate, UIScrollViewDelegate, IUiUtilExt, IRecordPermissionCheckExt, ShakeTypeBarDelegate, ShakeBeaconSingleViewDelegate, ShakeRangingBeaconsExt, ShakeCardDetailViewDelegate, IShakeCardMgrExt, ShakeTvHistoryViewDelegate>
{
    ShakeLogicProxy *m_logicProxy;
    ShakeSingleView *m_shakeSingleView;
    ShakeMainView *m_mainView;
    MMTipsViewController *m_introView;
    ShakeTvHistoryView *m_shakeTvHistoryView;
    _Bool m_bShaking;
    id <ShakeViewDelegate> m_delegate;
    CShakeChecker *m_shakeChecker;
    MMHDHeadImageView *m_HDHeadImage;
    _Bool m_bBackgroundRunning;
    ShakeTypeBar *m_typeBar;
    unsigned int m_uiTimeStartSearchTV;
    _Bool m_bCanShake;
    _Bool _m_haveShaked;
    ShakeBeaconSingleView *_m_shakeBeaconSingleView;
    ShakeCardDetailView *_m_shakeCardDetailView;
}

- (void).cxx_destruct;
- (void)GoToSayHello:(id)arg1 andScene:(unsigned int)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)OnAnimationEnd:(_Bool)arg1;
- (void)OnGetNewBgImg;
- (void)OnOpenSayHello;
- (void)OnOpenShakeMsgCenter;
- (void)OnOpenUnreadMsgList;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)OnSetting;
- (void)OnShake;
- (void)Report;
- (void)SetMuteStauts:(int)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)applicationWillResignActiveNotification:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)dealloc;
- (void)disableAllButton;
- (void)dismissViewController;
- (void)enableAllButton;
- (void)enableShake:(_Bool)arg1;
- (id)getCurrViewController;
- (id)getCurrentViewController;
- (id)getMsgForState:(unsigned int)arg1;
- (int)getShakeLogicType;
- (id)getViewController;
- (void)handleImage:(id)arg1;
- (id)init;
- (void)initBackgroundView;
- (void)initHDHeadImage:(id)arg1;
- (void)initView;
- (_Bool)isInFindFriendTab;
- (_Bool)isInMyContactList:(id)arg1;
- (_Bool)isInShakeTvLogicType;
- (void)lockScreen;
@property(nonatomic) _Bool m_bCanShake; // @synthesize m_bCanShake;
@property(nonatomic) _Bool m_haveShaked; // @synthesize m_haveShaked=_m_haveShaked;
@property(retain, nonatomic) ShakeBeaconSingleView *m_shakeBeaconSingleView; // @synthesize m_shakeBeaconSingleView=_m_shakeBeaconSingleView;
@property(retain, nonatomic) ShakeCardDetailView *m_shakeCardDetailView; // @synthesize m_shakeCardDetailView=_m_shakeCardDetailView;
- (void)onBeaconGuideModeReportEndWithResponse:(id)arg1;
- (void)onBeaconGuideModeReportFailed:(unsigned int)arg1;
- (void)onClearMyLbsDataFinishedWithResult:(_Bool)arg1;
- (void)onClickBeaconViewWith:(id)arg1;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)onDidRangedBeacons:(id)arg1;
- (void)onFinishShowAnimation;
- (void)onNewCountChanging:(int)arg1;
- (void)onSelectShakeSetting:(id)arg1 withData:(id)arg2;
- (void)onSelectedContactInfo:(id)arg1 isFromList:(_Bool)arg2;
- (void)onSelectedShakeTvResult:(id)arg1;
- (void)onSelectedWithLbsContactInfo:(id)arg1;
- (void)onShakeBeaconReportEndWithResponse:(id)arg1;
- (void)onShakeBeaconReportFailed:(int)arg1 ErrMsg:(id)arg2;
- (void)onShakeCardDetailViewClickStopAnimation;
- (void)onShakeCardDetailViewDidDisappear;
- (void)onShakeCardDetailViewShowAcceptSucView;
- (void)onShakeCardEntranceChange;
- (void)onShakeCardRedDotChange;
- (void)onShakeCardReportEndWithResponse:(id)arg1 errType:(unsigned long long)arg2 errMsg:(id)arg3;
- (void)onShakeGetEndWithResult:(id)arg1;
- (void)onShakeGetFail:(id)arg1;
- (void)onShakeMatchFail:(id)arg1;
- (void)onShakeMusicReportEndWithMusicItem:(id)arg1 Offset:(float)arg2;
- (void)onShakeMusicReportFail:(int)arg1 ErrMsg:(id)arg2;
- (void)onShakeReportEndWithResult:(id)arg1;
- (void)onShakeReportFail:(id)arg1;
- (void)onShakeStop;
- (void)onShakeTvReportEndWithTvItem:(id)arg1;
- (void)onShakeTvReportFail:(int)arg1 ErrMsg:(id)arg2;
- (void)onShakeTypeClicked:(int)arg1;
- (void)onUpdateLbsContactInfoError:(int)arg1;
- (void)onUpdateLbsContactInfoFinishedWithData:(id)arg1;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)onWCCardDetailViewControllerDis;
- (void)onWCCardDetailViewControllerPres;
- (void)playShakeResultSound:(_Bool)arg1;
- (void)playShakeSound;
- (void)playSoundByAQAudioPlayer:(id)arg1 type:(id)arg2;
- (void)promptForShakeUsageWarnning;
- (void)setCanShake:(_Bool)arg1;
- (void)setM_Delegate:(id)arg1;
- (void)setShakeType:(int)arg1;
- (void)shakeSwitch;
- (_Bool)shouldInteractivePop;
- (void)showContactInfoView:(id)arg1 isFromList:(_Bool)arg2;
- (void)showErrorAlert:(id)arg1;
- (void)showHDHeadImage;
- (void)showImagePicker:(long long)arg1;
- (void)showList:(int)arg1;
- (void)showMessage:(id)arg1;
- (void)showPeopleInfoView:(id)arg1 isFromList:(_Bool)arg2;
- (void)showShakeSingleView:(id)arg1 andScene:(unsigned int)arg2;
- (void)showShakeTvResult:(id)arg1 andModal:(_Bool)arg2 isFromHistoryList:(_Bool)arg3;
- (void)showTvDetail:(id)arg1 withModal:(_Bool)arg2;
- (void)showViewControllerFromList:(id)arg1;
- (void)startLoading;
- (void)stopAllAnimation;
- (void)stopLoading;
- (void)tryCancelShakeCard;
- (void)unlockScreen;
- (void)updateMuteStauts:(_Bool)arg1;
- (void)updateTvHistoryView;
- (void)useDefalutHideImage;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willDisshow;
- (void)willShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

