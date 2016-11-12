//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"
#import "IdleTimerUtilExt.h"
#import "WCActionSheetDelegate.h"
#import "WCPayFacingQRCodeImageViewDelegate.h"
#import "WCPayNoticeBannerDelegate.h"

@class NSDictionary, NSMutableArray, NSString, RichTextView, UIButton, UIColor, UIImage, UIView, WCPayFacingQRCodeImageView;

@interface WCPayFacingReceiveQRCodeViewController : WCPayBaseViewController <IdleTimerUtilExt, WCPayNoticeBannerDelegate, ILinkEventExt, WCActionSheetDelegate, WCPayFacingQRCodeImageViewDelegate>
{
    UIButton *m_footerButton;
    id <WCPayFacingReceiveQRCodeViewControllerDelegate> m_delegate;
    double _oldBrightness;
    UIView *m_oTotalMoneyView;
    NSMutableArray *m_arrPayerInfoView;
    NSMutableArray *m_arrAnimationedMessageStruct;
    UIImage *m_oQRCodeImage;
    WCPayFacingQRCodeImageView *imageQRCodeBackgroundView;
    RichTextView *balanceRichTextView;
    UIView *m_oTotalMoneyBottomLine;
    NSMutableArray *m_arrPayerBottomLine;
    _Bool bDidBePoed;
    _Bool qrcodeIsAnimated;
    UIButton *toBalanceBtn;
    UIColor *originalBarTintColor;
    double introViewHeight;
    NSDictionary *m_dicBanners;
    double bannerHeight;
}

- (void).cxx_destruct;
- (void)EndReceivedMoneyAnimation:(id)arg1;
- (void)OnLeftBarButtonDone;
- (void)OnWCPayFacingQRCodeImageViewSaveButtonDone;
- (void)OnWCPayFacingQRCodeImageViewSaveQRCodeButtonDone;
- (void)RemoveMessageStructAndShowedMoney:(id)arg1;
- (void)ShowPayerStartedPayMoneyAnimation:(id)arg1 OnlyChangedOldCell:(_Bool)arg2;
- (void)ShowReceivedMoneyAnimation:(id)arg1;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)dealloc;
- (id)getDisplayNameInfo;
- (id)getDisplayTruthNameInfo;
- (id)getNoticeBanner;
- (id)getSaveAlbumImageView;
@property(retain, nonatomic) WCPayFacingQRCodeImageView *imageQRCodeBackgroundView; // @synthesize imageQRCodeBackgroundView;
- (id)init;
- (void)initHeaderView;
- (void)initNavigationBar;
- (void)insertNewView:(id)arg1;
- (void)onClickToBalanceButton:(id)arg1;
- (void)onIdleTimerUtilVoipQuit;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)reportLocation;
- (void)setDelegate:(id)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

