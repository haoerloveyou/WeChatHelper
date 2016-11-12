//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "ILinkEventExt.h"

@class NSString, UIButton, WCAccountTextFieldItem, WCBaseKeyboardToolBar;

@interface WCAccountLoginFirstUserViewController : WCAccountBaseViewController <ILinkEventExt>
{
    WCAccountTextFieldItem *m_textFieldUserNameItem;
    WCAccountTextFieldItem *m_textFieldPwdItem;
    id <WCAccountLoginFirstUserViewControllerDelegate> m_delegate;
    UIButton *m_btnNext;
    WCBaseKeyboardToolBar *m_keyboardBar;
    _Bool m_bReadAgreement;
    UIButton *m_switchBtn;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (id)createHeaderView;
- (id)createPasswordLabelWithOrigin:(struct CGPoint)arg1;
- (id)createUserNameLabelWithOrigin:(struct CGPoint)arg1;
- (id)getAgreementViewWithPosY:(double)arg1;
- (id)getForgetPasswordBtnWithPosY:(double)arg1;
- (id)getLoginBtnWithPosY:(double)arg1;
- (void)hideKeyBoard;
- (id)init;
- (void)initFacbookLoginBtn;
- (void)initHeaderView;
- (void)initNavigationBar;
- (void)initPwdItem;
- (void)initSwitchView;
- (void)initUserNameItem;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onNext;
- (void)onOpenAgreementLink:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)vcBecomeFirstResponder;
- (void)vcResignFirstResponder;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

