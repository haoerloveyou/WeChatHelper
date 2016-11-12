//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"
#import "WCActionSheetDelegate.h"
#import "WCBaseInfoItemDelegate.h"
#import "WCPayAreaItemDelegate.h"

@class NSIndexPath, NSMutableArray, NSString, UIButton, WCBaseKeyboardToolBar, WCBaseTextFieldItem, WCPayAreaItem, WCPayCVVItem, WCPayCardTypeItem, WCPayCredTypeItem, WCPayTenpaySecureCtrlItem, WCPayValidDateItem;

@interface WCPayFillCardInfoViewController : WCPayBaseViewController <WCBaseInfoItemDelegate, ILinkEventExt, WCActionSheetDelegate, WCPayAreaItemDelegate>
{
    UIButton *m_footerButton;
    WCPayCardTypeItem *m_pikerCardTypeItem;
    WCPayValidDateItem *m_pikerValidDateItem;
    WCPayCVVItem *m_textFieldCVVItem;
    WCBaseTextFieldItem *m_textFieldNameItem;
    WCPayCredTypeItem *m_pickerCredTypeItem;
    WCPayTenpaySecureCtrlItem *m_textFieldHolderIDItem;
    WCBaseTextFieldItem *m_textFieldPhoneItem;
    NSMutableArray *m_arrayInfoGroup;
    WCBaseKeyboardToolBar *m_keyboardBar;
    _Bool m_bReadAgreement;
    _Bool m_bSubscribeApp;
    _Bool m_bAutoFilledCardInfo;
    id <WCPayFillCardInfoViewControllerDelegate> m_delegate;
    NSIndexPath *m_selectItemIndex;
    WCBaseTextFieldItem *m_textFieldFirstNameItem;
    WCBaseTextFieldItem *m_textFieldLastNameItem;
    WCPayAreaItem *m_textFieldAreaItem;
    WCBaseTextFieldItem *m_textFieldAddressItem;
    WCBaseTextFieldItem *m_textFieldPhoneNumberItem;
    WCBaseTextFieldItem *m_textFieldZipItem;
    WCBaseTextFieldItem *m_textFieldEmailItem;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkData:(id)arg1;
- (_Bool)checkIsEmpty:(id)arg1;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (_Bool)getData:(id)arg1;
- (id)getSectionFromGroup:(id)arg1;
- (id)getSectionHeaderView:(id)arg1;
- (id)init;
- (void)initFooterView;
- (void)initInfoTemplate;
- (void)initNavigationBar;
@property(readonly, nonatomic) _Bool m_bAutoFilledCardInfo; // @synthesize m_bAutoFilledCardInfo;
- (id)makeHeader:(id)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onNext;
- (void)onReadAgreement:(id)arg1;
- (void)onSubscribeAppBtn:(id)arg1;
- (void)onWCPayAreaItemDidChoseRegion:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)setAutoFilledCardInfo;
- (void)setDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)showDetailTip;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

