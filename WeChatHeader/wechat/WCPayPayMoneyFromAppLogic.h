//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCBaseControlMgrExt.h"
#import "WCPayBaseViewControllerDelegate.h"

@class NSDictionary, NSString, PayResp, WCPayBaseViewController, WCPayPayMoneyLogic;

@interface WCPayPayMoneyFromAppLogic : WCPayControlLogic <WCPayBaseViewControllerDelegate, WCBaseControlMgrExt>
{
    NSDictionary *m_payInfo;
    NSString *m_appID;
    NSString *m_bundleId;
    PayResp *m_resp;
    WCPayPayMoneyLogic *m_payLogic;
    WCPayBaseViewController *rootViewController;
    _Bool m_cancelByOpenApi;
}

- (void).cxx_destruct;
- (void)OnGetAppAuthUrlErrorRequest:(id)arg1;
- (void)OnGetAppAuthUrlRequest:(id)arg1 AppSource:(id)arg2 PrepayId:(id)arg3 CallBackUrl:(id)arg4 Error:(id)arg5;
- (void)OnRootViewBack;
- (void)WCPayBaseViewControllerBack;
- (void)dealloc;
- (void)delayDisMissRootViewController;
- (_Bool)gotoViewController:(id)arg1;
- (id)initWithInfo:(id)arg1 BundleID:(id)arg2 appID:(id)arg3;
@property(nonatomic) _Bool m_cancelByOpenApi; // @synthesize m_cancelByOpenApi;
- (void)markCancelByOpenApi;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

