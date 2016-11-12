//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PBMessageObserverDelegate.h"
#import "WCAccountSetPasswordViewControllerDelegate.h"

@class NSString;

@interface AccountBaseViewController : MMUIViewController <PBMessageObserverDelegate, WCAccountSetPasswordViewControllerDelegate>
{
    unsigned int m_uiAccountID;
    NSString *m_unbindOKTip;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnUnBindAccountOK;
- (void)checkUnbindAccount;
- (void)dealloc;
- (void)onCheckUnbindFail;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void)onSetPwd;
- (void)onUnBindAccount;
- (void)prepareToUnbindAccount:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

