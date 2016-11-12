//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"
#import "WCPayBindedCardPikerItemDelegate.h"
#import "WCPayOrderDetailViewDelegate.h"

@class NSIndexPath, NSString, UIButton, WCBaseKeyboardToolBar, WCPayBindedCardPikerItem, WCPayTenpayPasswordCtrlItem;

@interface WCPayOrderDetailViewController : WCPayBaseViewController <WCPayBindedCardPikerItemDelegate, WCPayOrderDetailViewDelegate, ILinkEventExt>
{
    UIButton *m_footerButton;
    WCBaseKeyboardToolBar *m_keyboardBar;
    WCPayTenpayPasswordCtrlItem *m_textFieldItemPwd;
    WCPayBindedCardPikerItem *m_cardTypeItem;
    id <WCPayOrderDetailViewControllerDelegate> m_delegate;
    NSString *m_nsError;
    NSIndexPath *m_selectItemIndex;
    _Bool bSelectedBalance;
    _Bool bUserSelected;
}

- (void).cxx_destruct;
- (void)OnAddCardToSharedFavInfo;
- (void)OnAddPayCard;
- (void)OnCancel;
- (void)OnChooseCard:(id)arg1;
- (void)OnChooseNewCard:(id)arg1;
- (void)OnComfireEnsureAlert;
- (void)OnSelectedBalance;
- (void)OnSelectedNewCard;
- (void)OnWCPayOrderDetailViewClickedCoupous;
- (void)OnWCPayOrderDetailViewHeightChange:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)clearPwdInput;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)initNavigationBar;
- (_Bool)isNeedAutoNext;
- (_Bool)isNoCardOrBalanceDisable;
- (void)makeBalanceInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeNewCardInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onNext;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadBindTableView;
- (void)reloadPayTableView;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

