//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "MMKernelExt.h"
#import "QRCodeLoginExt.h"
#import "WCAccountLoginByQRCodeViewControllerDelegate.h"
#import "WCAccountManualAuthControlLogicDelegate.h"

@class NSString, QRCodeLoginLogic, WCAccountManualAuthControlLogic;

@interface WCAccountQRCodeLoginControlLogic : WCAccountBaseControlLogic <QRCodeLoginExt, MMKernelExt, WCAccountLoginByQRCodeViewControllerDelegate, WCAccountManualAuthControlLogicDelegate>
{
    QRCodeLoginLogic *m_qrcodeLoginLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
}

- (void).cxx_destruct;
- (void)OnQRCodeLoginCancel;
- (void)OnQRCodeLoginConfirmedWithUserName:(id)arg1 pwd:(id)arg2 nickName:(id)arg3 headImgURL:(id)arg4;
- (void)OnQRCodeLoginExpired;
- (void)OnQRCodeLoginFail;
- (void)OnQRCodeLoginReciveImage:(id)arg1 expiredTime:(unsigned int)arg2;
- (void)OnQRCodeLoginScaned:(id)arg1 nickName:(id)arg2;
- (void)OnQRCodeLoginUUIDExipred;
- (void)dealloc;
- (id)getQRCodeLoginLogic;
- (id)init;
- (id)initWithData:(id)arg1;
- (void)onCancel;
- (void)onCancelLogin;
- (_Bool)onHandleError:(id)arg1;
- (void)onLaunchOpenFirstView;
- (void)onLoginByOtherWay:(id)arg1;
- (void)onLoginByPhone;
- (void)onLoginByQQ;
- (void)onMainControllStart;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)onQRCodeLoginUserName:(id)arg1 Pwd:(id)arg2 nickName:(id)arg3;
- (void)onRefreshBtnClicked;
- (void)sendGetQRCodeRequest;
- (_Bool)shouldShowBackButton;
- (void)startGetQRCode;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

