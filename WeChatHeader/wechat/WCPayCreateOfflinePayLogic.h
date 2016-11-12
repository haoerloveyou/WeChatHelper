//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IWCPayControlLogicExt.h"
#import "WCPayPayPwdViewControllerDelegate.h"

@class NSString, WCPayAddPayCardLogic;

@interface WCPayCreateOfflinePayLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate, IWCPayControlLogicExt>
{
    WCPayAddPayCardLogic *m_cardLogic;
}

- (void).cxx_destruct;
- (void)EndCreateOfflinePayWithResponse:(id)arg1;
- (void)OnAddCardBtnDonw:(id)arg1;
- (void)OnAddCardError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnCreateOfflinePayResponse:(id)arg1 Error:(id)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnPreFinishedWCPayLogic:(id)arg1 waitUntilDone:(_Bool *)arg2;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)dealloc;
- (void)justEndCreateOfflinePay:(_Bool)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)onNeedVerifyCancel;
- (void)onNeedVerifyConfirm;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

