//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

#import "ILinkEventExt.h"
#import "IMsgRevokeExt.h"
#import "ITranslateMsgMgrExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "RichTextLayoutDelegate.h"
#import "TextFloatPreviewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class InteractionLabel, MMTipsViewController, MMUILabel, NSString, RichTextView, TextFloatPreview, UIButton, UIImageView, UIView, WCUIActionSheet;

@interface TextMessageNodeView : BaseMessageNodeView <WCActionSheetDelegate, RichTextLayoutDelegate, ILinkEventExt, IMsgRevokeExt, TextFloatPreviewDelegate, UIAlertViewDelegate, ITranslateMsgMgrExt, MMTipsViewControllerDelegate>
{
    RichTextView *m_oRichTextView;
    TextFloatPreview *m_floatPreview;
    UIView *m_oContainerTextView;
    UIImageView *m_oTranslateLineView;
    UIButton *m_oTranslateStatusButton;
    _Bool m_bTranslateAnimation;
    MMTipsViewController *m_oTranslateIntroView;
    WCUIActionSheet *_uiActionSheet;
    MMUILabel *_labelTitle;
    UIView *_labelTitleLine;
    _Bool _bShowFullText;
    double _fulltextHeight;
    double _limitHeight;
    InteractionLabel *_fullTextLabel;
    double m_fContentMarginRight;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (id)accessibilityLabel;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)addFavorite;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)bigTitleText;
- (void)calculateLeftRightMargin;
- (double)calculateOriginRichTextHeight;
- (double)calculateTranslatedRichTextWidth;
- (_Bool)canPeek;
- (_Bool)canShowTranslateBottomView;
- (void)dealloc;
- (id)getContactDisplayName:(id)arg1;
- (id)getMoreMainInfomationAccessibilityDescription;
- (id)getPreviewLinkForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGRect)getPreviewLinkFrameForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (id)getSystemFont;
- (void)handleChangeForTranslateMsg;
- (_Bool)ifAppInfoAreaInContent;
- (void)initLabelTitle;
- (void)initTranslateStatusButton;
- (id)initWithMessageWrap:(id)arg1 Contact:(id)arg2 ChatContact:(id)arg3;
- (_Bool)isAccessibilityElement;
- (_Bool)isSupportingTranslation;
- (double)labelWidth;
- (void)layoutSubviewsInternal;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)onCopy:(id)arg1;
- (void)onCopyLinkText:(id)arg1;
- (void)onFavoriteAdd:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onHide;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLongTouch;
- (void)onMenuItemWillHide;
- (void)onMoreOperate:(id)arg1;
- (void)onOrientationChanged;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onStopTranslateAnimation;
- (void)onTouchCancel;
- (void)onTouchDown;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (void)onTranslateMessageChanged:(id)arg1;
- (void)onTranslateMessageFailed:(id)arg1 errTip:(id)arg2;
- (void)onTranslateMsg:(id)arg1;
- (void)onWindowHide;
- (_Bool)onlyContainsLink;
- (long long)parserType;
- (id)patternText;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)reLayoutSubviews;
- (void)resizeFrameForTranslate;
- (void)setRichtextViewContent;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (_Bool)shouldShowTranslatedText;
- (void)showFullText;
- (void)showOpearation;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (struct CGSize)sizeForFullTextLabel;
- (id)titleText;
- (void)translateMsg;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)updateBkgImage:(_Bool)arg1;
- (void)updateFrameForShowFullText;
- (void)updateStatus:(id)arg1;
- (void)updateSubviews;
- (void)updateSubviewsForTranslate;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

