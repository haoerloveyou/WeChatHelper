//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "SessionSelectControllerDelegate.h"

@class JSEvent, NSString;

@interface WCPaySendC2CMessageJSApiLogicControl : WCPayControlLogic <SessionSelectControllerDelegate>
{
    JSEvent *m_jsEvent;
    NSString *m_setInUrl;
    NSString *m_toUser;
}

- (void).cxx_destruct;
- (_Bool)DoSendC2CSecureMessageTo:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (_Bool)OnDoCheckWCPayJsApi;
- (_Bool)OnDoSendC2CSecureMessage;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSendC2CSecureMessageResponseStatus:(id)arg1 Error:(id)arg2;
- (_Bool)PickUserToSendSecureMessage;
- (id)initWithJSEvent:(id)arg1 SetInUrl:(id)arg2;
@property(retain, nonatomic) NSString *m_toUser; // @synthesize m_toUser;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

