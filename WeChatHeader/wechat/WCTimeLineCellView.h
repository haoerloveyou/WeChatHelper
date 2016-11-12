//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "ContactsPanelViewDelegate.h"
#import "IContactMgrExt.h"
#import "ILinkEventExt.h"
#import "IStrangerContactMgrExt.h"
#import "ITranslateSnsMgrExt.h"
#import "RichTextLayoutDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCImageViewDelegate.h"

@class InteractionLabel, MMAdaptiveLabel, MMHeadImageView, NSString, RichTextView, UIButton, UIImageView, UILabel, UINavigationController, UIView, UrlLabel, WCDataItem, WCTimelineCellABTestBaseTip;

@interface WCTimeLineCellView : MMUIView <WCImageViewDelegate, IContactMgrExt, IStrangerContactMgrExt, ContactsPanelViewDelegate, WCActionSheetDelegate, RichTextLayoutDelegate, ILinkEventExt, UIAlertViewDelegate, ITranslateSnsMgrExt>
{
    WCDataItem *m_dataItem;
    unsigned int m_row;
    unsigned int m_section;
    MMHeadImageView *m_headImage;
    UIImageView *m_contactLogo;
    UrlLabel *m_nickLabel;
    UIButton *m_contentDescBtn;
    UINavigationController *navigationController;
    RichTextView *m_contentDescView;
    MMAdaptiveLabel *m_withLabel;
    UILabel *m_timeLabel;
    UrlLabel *m_sourceLabel;
    UIButton *m_privacyButton;
    InteractionLabel *m_deleteLabel;
    UIButton *m_operateBtn;
    UIButton *m_resendBtn;
    InteractionLabel *m_actionLabel;
    InteractionLabel *m_musicLabel;
    UILabel *m_locationLabel;
    UILabel *m_weappInfoLabel;
    InteractionLabel *m_weappNameLabel;
    UIView *m_mediaView;
    UIButton *m_advertiseLogo;
    UIButton *m_adDetailBtn;
    _Bool m_showDetail;
    InteractionLabel *m_showFullTextView;
    WCTimelineCellABTestBaseTip *m_snsPeddlerTipView;
    RichTextView *m_translateView;
    UIButton *m_translateStatusView;
    UIImageView *m_translateLineView;
    int eTranslateStatus;
    NSString *m_copyedText;
    id <ILinkEventExt> m_urlLabelDelegate;
    id <WCTimeLineCellViewDelegate> m_WCTimeLineCellViewDelegate;
    UILabel *m_adPOILabel;
    UILabel *_adChainStrengthenLabel;
    NSString *m_cpKeyForNickname;
    _Bool m_isNicknameUnsafe;
    RichTextView *m_crashWarningLabel;
}

+ (double)getHeadImageLeftMarginCurOri;
+ (double)getOperationBtnMarginRightCurOri;
+ (id)getWithNickNameForPhotoData:(id)arg1;
+ (id)getWithTextForDataItem:(id)arg1;
+ (_Bool)hasWithInfoForDataItem:(id)arg1;
+ (double)heightForDataItem:(id)arg1;
+ (double)heightForMedia:(id)arg1;
+ (double)heightForMedia:(id)arg1 fixMediaSize:(struct CGSize)arg2;
+ (id)makeDataWrapForWCTranslate:(id)arg1;
- (void).cxx_destruct;
- (id)GetTranslateSnsKeyID;
- (id)addViewForMedia:(id)arg1 toView:(id)arg2 inPoint:(struct CGPoint)arg3 urlLabelDelegate:(id)arg4;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)editBlackList;
- (id)getContactDisplayName;
- (id)getContactLogoImage;
- (id)getWordingkey;
- (void)initActionLabel;
- (void)initAdChainStrengthenLabel;
- (void)initAdPOILabel;
- (void)initContactLogo:(id)arg1;
- (void)initContentDescButton:(id)arg1;
- (void)initContentDescView:(id)arg1 isLongTextLimit:(_Bool)arg2;
- (double)initContentTranslateView:(id)arg1;
- (void)initCrashWarningLabel;
- (void)initDeleteLabel;
- (void)initHeadImage;
- (void)initLocationLabel;
- (void)initMusicLabel;
- (void)initNickLabel;
- (void)initOperateBtn;
- (void)initPeddlerTipView:(id)arg1;
- (void)initPrivacyButton:(id)arg1;
- (void)initResendBtn;
- (void)initShowFullTextView;
- (void)initSourceLabel;
- (void)initTimeLabel;
- (double)initTranslateStatusButton:(_Bool)arg1 withTitle:(id)arg2;
- (void)initView;
- (void)initWeAppInfoLabel;
- (void)initWithLabel:(id)arg1;
- (id)initWithUrlLabelDelegate:(id)arg1;
- (void)jumpToDetailViewV2:(id)arg1;
- (void)layoutChangesWithMediaSize:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak id <WCTimeLineCellViewDelegate> m_WCTimeLineCellViewDelegate; // @synthesize m_WCTimeLineCellViewDelegate;
@property(retain, nonatomic) NSString *m_copyedText; // @synthesize m_copyedText;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem;
@property(readonly, nonatomic) UIView *m_mediaView; // @synthesize m_mediaView;
@property(nonatomic) unsigned int m_row; // @synthesize m_row;
@property(nonatomic) unsigned int m_section; // @synthesize m_section;
@property(readonly, nonatomic) _Bool m_showDetail; // @synthesize m_showDetail;
@property(readonly, nonatomic) InteractionLabel *m_showFullTextView; // @synthesize m_showFullTextView;
@property(nonatomic) __weak id <ILinkEventExt> m_urlLabelDelegate; // @synthesize m_urlLabelDelegate;
- (void)makeTranslateShowAnimation;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController;
- (void)onActionAdChainStrengthen:(id)arg1;
- (void)onActionAdPOI:(id)arg1;
- (void)onActionJump:(id)arg1;
- (void)onActionLocation:(id)arg1;
- (void)onActionMusic:(id)arg1;
- (void)onAdvertiseAction:(id)arg1;
- (void)onAdvertiseDetail;
- (void)onClickWCImage:(id)arg1;
- (void)onClickWithBtn;
- (void)onCommentPhoto:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onDeletePhoto:(id)arg1;
- (void)onFavAdd:(id)arg1;
- (void)onFavAddForTranslated:(id)arg1;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onMore:(id)arg1;
- (void)onOpenWeApp;
- (void)onPhoneLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onReSendPhoto:(id)arg1;
- (void)onRestore:(id)arg1;
- (void)onShowFullText;
- (void)onShowGroup;
- (void)onStatusChange;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onTranslateAction:(id)arg1;
- (void)onTranslateSnsChanged:(id)arg1;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (void)reportLaunchAppFailed:(id)arg1;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)showContactInfo;
- (void)showMenuItemForCrashProtectedStateWithRect:(struct CGRect)arg1 andView:(id)arg2;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2 andView:(id)arg3;
- (void)showWCForUser:(id)arg1;
- (void)updateCrashProtectedState:(id)arg1 newDataItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

