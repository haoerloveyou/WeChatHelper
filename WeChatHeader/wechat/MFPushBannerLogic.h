//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "BannerToastExt.h"
#import "IABtestMgrExt.h"
#import "IHeadImageExt.h"
#import "MMKernelExt.h"

@class MFBannerBtn, NSString;

@interface MFPushBannerLogic : MMObject <BannerToastExt, IABtestMgrExt, IHeadImageExt, MMKernelExt>
{
    MFBannerBtn *m_bannerBtn;
    id <MFPushBannerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MFBannerBtn *bannerBtn; // @synthesize bannerBtn=m_bannerBtn;
- (void)bindPhone:(id)arg1;
- (void)checkBindGoogleAccount:(id)arg1;
- (void)checkSurroundingPeople:(id)arg1;
- (void)createBannerBtn;
- (void)dealloc;
@property(nonatomic) __weak id <MFPushBannerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)hasABtestPoint;
- (id)init;
- (void)initAddBookPermissonBtn;
- (void)initBindPhoneBtn;
- (void)initOpenAutoAddBtn;
- (void)initOpenGameBtn;
- (void)initOpenMassSendBtn;
- (void)initOpenMomentBtn;
- (void)initOpenStickerShopBtn;
- (void)initRecommandBindGoogleBtn;
- (void)initRecommandSurroundingBtn;
- (void)initSetHeadBtn;
- (void)initUploadContactBtn;
- (_Bool)isABtesting;
- (void)jumpToGame:(id)arg1;
- (void)jumpToMoment:(id)arg1;
- (void)jumpToStickerShop:(id)arg1;
- (void)onABtestChange;
- (void)onBannerUpdate;
- (void)onHeadImageChange:(id)arg1;
- (void)onInitOK;
- (void)onReceiveNewFriendRecommandMsg:(id)arg1;
- (void)onReceiveSecurityBannerMsg:(id)arg1 withWording:(id)arg2;
- (void)openAutoAdd:(id)arg1;
- (void)openMassSend:(id)arg1;
- (void)openPermission:(id)arg1;
- (void)setABtestPointClickEnd;
- (void)setHeaderImage:(id)arg1;
- (void)showBannerBtn:(int)arg1;
- (void)updatePushBanner;
- (void)uploadContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

