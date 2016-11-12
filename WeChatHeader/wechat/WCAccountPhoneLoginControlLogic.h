//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "PasswordLogicDelegate.h"
#import "WCAccountBindPhoneForRegCGIDelegate.h"
#import "WCAccountFillPhoneViewControllerDelegate.h"
#import "WCAccountManualAuthControlLogicDelegate.h"
#import "WCAccountPhoneVerifyViewControllerDelegate.h"
#import "WCAccountRegByOldPhoneViewControllerDelegate.h"
#import "WCAccountSetPasswordViewControllerDelegate.h"
#import "WCAccountVoiceVerifyViewControllerDelegate.h"
#import "WCBaseControlMgrExt.h"

@class NSString, PasswordLogic, WCAccountBindPhoneForRegCGI, WCAccountGraphicVerifyControlLogic, WCAccountManualAuthControlLogic, WCAccountSafeDeviceControlLogic;

@interface WCAccountPhoneLoginControlLogic : WCAccountBaseControlLogic <WCBaseControlMgrExt, WCAccountFillPhoneViewControllerDelegate, WCAccountVoiceVerifyViewControllerDelegate, WCAccountPhoneVerifyViewControllerDelegate, WCAccountSetPasswordViewControllerDelegate, WCAccountRegByOldPhoneViewControllerDelegate, PasswordLogicDelegate, WCAccountManualAuthControlLogicDelegate, WCAccountBindPhoneForRegCGIDelegate>
{
    unsigned int m_uiTryCount;
    _Bool m_bAdjustRet;
    _Bool m_bNeedSetPwd;
    WCAccountBindPhoneForRegCGI *m_modelLogic;
    WCAccountBaseControlLogic *m_subFBLogic;
    PasswordLogic *m_checkPasswdLogic;
    WCAccountSafeDeviceControlLogic *m_safeDeviceLogic;
    WCAccountGraphicVerifyControlLogic *m_graphicVerifyLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
}

- (void).cxx_destruct;
- (void)DidEnterBackground:(id)arg1;
- (void)DidEnterForeground:(id)arg1;
- (void)cancelAllEvent;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)checkHavePwd;
- (void)checkHaveSetPassword:(id)arg1;
- (_Bool)checkPhoneNumberStatus:(unsigned int)arg1;
- (_Bool)checkVerifyCode:(id)arg1;
- (void)dealloc;
- (void)forceRegisterForPhone;
- (id)getArchive;
- (void)getVerifyCode;
- (_Bool)getVerifyCodeReady;
- (_Bool)getVoideVerifyCodeReady:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)loginAccount;
- (void)loginForPhone;
- (void)login_but_registerForPhone;
- (void)onByPhonePwdLoginByVerifyCode:(id)arg1 phoneNumber:(id)arg2;
- (void)onCheckForgetPwdVerifyCode:(id)arg1 userName:(id)arg2 password:(id)arg3 StyleKeyValue:(id)arg4;
- (void)onCheckLoginPhoneNumberStatus:(id)arg1 countryCode:(id)arg2 phoneNumber:(id)arg3 formatedPhoneNumber:(id)arg4 StyleKeyValue:(id)arg5;
- (void)onCheckLoginVerifyCode:(id)arg1 ticket:(id)arg2 controlShowFlag:(unsigned int)arg3 userName:(id)arg4 password:(id)arg5 StyleKeyValue:(id)arg6;
- (void)onCheckRegPhoneNumberStatus:(id)arg1 countryCode:(id)arg2 phoneNumber:(id)arg3 formatedPhoneNumber:(id)arg4 StyleKeyValue:(id)arg5;
- (void)onCheckRegVerifyCode:(id)arg1 ticket:(id)arg2 controlShowFlag:(unsigned int)arg3 userName:(id)arg4 password:(id)arg5 StyleKeyValue:(id)arg6;
- (void)onFacebookConnect;
- (void)onFillPhoneBack;
- (void)onFillPhoneFromRegToLogin;
- (void)onFillPhoneGoToSecurityCenter;
- (void)onFillPhoneLoginByQQ;
- (void)onFillPhoneNext:(id)arg1 phoneNumber:(id)arg2;
- (void)onFillPhoneNext:(id)arg1 phoneNumber:(id)arg2 pwd:(id)arg3;
- (void)onFillPhoneReg;
- (void)onGetForgetPwdVerifyCode:(id)arg1 StyleKeyValue:(id)arg2;
- (void)onGetForgetPwdVoiceVerifyCode:(id)arg1 StyleKeyValue:(id)arg2;
- (void)onGetLoginVerifyCode:(id)arg1 StyleKeyValue:(id)arg2;
- (void)onGetLoginVoiceVerifyCode:(id)arg1 StyleKeyValue:(id)arg2;
- (void)onGetRegVerifyCode:(id)arg1 StyleKeyValue:(id)arg2;
- (void)onGetRegVoiceVerifyCode:(id)arg1 StyleKeyValue:(id)arg2;
- (void)onGetVerifyCode:(id)arg1 StyleKeyValue:(id)arg2;
- (void)onGetVoiceVerifyCode:(id)arg1 StyleKeyValue:(id)arg2;
- (void)onLoginByQRCode;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)onPhoneVerifyAgain;
- (void)onPhoneVerifyBack;
- (void)onPhoneVerifyNext:(id)arg1;
- (void)onPhoneVerifyVoice;
- (void)onRegByOldPhoneBack;
- (void)onRegByOldPhoneContinueReg;
- (void)onRegByOldPhoneLogin;
- (void)onSafeDeviceControlLogicCancel;
- (void)onSafeDeviceControlLogicReturnOK;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void)onSignUpWithQQ;
- (void)onVoiceVerifyBack;
- (void)onVoiceVerifyGetVerifyCode:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)pause;
- (_Bool)recoverFromArchive:(id)arg1;
- (void)registerForPhone;
- (void)resume;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

