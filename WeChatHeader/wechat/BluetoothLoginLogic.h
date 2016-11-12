//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "QRCodeLoginExt.h"
#import "WCAccountManualAuthControlLogicDelegate.h"

@class NSString, WCAccountManualAuthControlLogic;

@interface BluetoothLoginLogic : WCAccountBaseControlLogic <QRCodeLoginExt, WCAccountManualAuthControlLogicDelegate>
{
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    int _loginType;
    NSString *_userName;
    NSString *_password;
    NSString *_broadcastUUID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *broadcastUUID; // @synthesize broadcastUUID=_broadcastUUID;
- (void)doAuthWithType:(int)arg1;
- (id)init;
@property(nonatomic) int loginType; // @synthesize loginType=_loginType;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void)stopLoginLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

