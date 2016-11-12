//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "IRsaCertMgrExt.h"
#import "MMWebViewDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "WCAccountGraphicVerifyControlLogicDelegate.h"
#import "WCAccountSafeDeviceControlLogicDelegate.h"
#import "WCAccountVoice2ndVerifyControlLogicDelegate.h"

@class NSString, WCAccountGraphicVerifyControlLogic, WCAccountSafeDeviceControlLogic, WCAccountVoice2ndVerifyControlLogic;

@interface WCAccountManualAuthControlLogic : WCAccountBaseControlLogic <WCAccountGraphicVerifyControlLogicDelegate, WCAccountSafeDeviceControlLogicDelegate, WCAccountVoice2ndVerifyControlLogicDelegate, MMWebViewDelegate, PBMessageObserverDelegate, IRsaCertMgrExt>
{
    WCAccountSafeDeviceControlLogic *m_safeDeviceLogic;
    WCAccountGraphicVerifyControlLogic *m_graphicVerifyLogic;
    WCAccountVoice2ndVerifyControlLogic *m_voice2ndVerifyLogic;
    id <WCAccountManualAuthControlLogicDelegate> m_delegate;
    unsigned int m_ecdh_error_count;
    unsigned int m_cert_error_count;
    unsigned int m_idc_redirect_count;
    _Bool m_bFromAutoAuth;
    _Bool m_bSessionKeyNeedECDHDecrypt;
    _Bool m_bStopCloseAcct;
    unsigned long long m_ui64BeginTime;
    _Bool m_bDontFillWTBuf;
    unsigned int m_uiCGIScene;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnRsaCertCGIAgain;
- (void)OnRsaCertFail;
- (void)dealloc;
- (id)genManualAuthRequest;
- (id)genManualAuthRequest:(_Bool)arg1;
- (void)handleAuthResponse:(id)arg1;
- (id)initWithData:(id)arg1;
@property(nonatomic) _Bool m_bDontFillWTBuf; // @synthesize m_bDontFillWTBuf;
@property(nonatomic) unsigned int m_uiCGIScene; // @synthesize m_uiCGIScene;
- (void)onGraphicVerifyControlLogicCancel;
- (id)onGraphicVerifyControlLogicGetAuthRequest:(_Bool)arg1;
- (void)onGraphicVerifyControlLogicReturn:(id)arg1;
- (void)onSafeDeviceControlLogicCancel;
- (void)onSafeDeviceControlLogicReturnOK;
- (void)onStopCloseAcct;
- (void)onStopLogic;
- (void)onVoice2ndVerifyControlLogicCancel;
- (void)onVoice2ndVerifyControlLogicReturnOK;
- (void)setDelegate:(id)arg1;
- (void)startLoading;
- (void)startLogic;
- (void)startLogicFromAutoAuth;
- (_Bool)startManualAuth:(id)arg1;
- (void)stopLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

