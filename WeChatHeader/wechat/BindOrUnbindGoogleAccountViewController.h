//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IGoogleContactMgrExt.h"
#import "WCActionSheetDelegate.h"

@class GTMOAuth2Authentication, NSString, UIButton, UILabel;

@interface BindOrUnbindGoogleAccountViewController : MMUIViewController <IGoogleContactMgrExt, WCActionSheetDelegate>
{
    UIButton *m_bindButton;
    UIButton *m_unbindButton;
    UILabel *m_hadBindInfoText;
    UILabel *m_notBindInfoText;
    GTMOAuth2Authentication *m_auth;
    unsigned int m_clickSource;
    UIButton *m_viewButton;
    int m_mode;
    _Bool m_isFromMainframeBanner;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)adjustSubviewRects;
- (void)clearBrowserCookies:(id)arg1;
- (void)confirmBindGoogleAccountForce;
- (void)confrimBindAnotherGoogleAccount;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)gotoGoogleOauth;
- (id)init;
@property(retain, nonatomic) GTMOAuth2Authentication *m_auth; // @synthesize m_auth;
@property(retain, nonatomic) UIButton *m_bindButton; // @synthesize m_bindButton;
@property(nonatomic) unsigned int m_clickSource; // @synthesize m_clickSource;
@property(retain, nonatomic) UILabel *m_hadBindInfoText; // @synthesize m_hadBindInfoText;
@property(nonatomic) _Bool m_isFromMainframeBanner; // @synthesize m_isFromMainframeBanner;
@property(nonatomic) int m_mode; // @synthesize m_mode;
@property(retain, nonatomic) UILabel *m_notBindInfoText; // @synthesize m_notBindInfoText;
@property(retain, nonatomic) UIButton *m_unbindButton; // @synthesize m_unbindButton;
@property(retain, nonatomic) UIButton *m_viewButton; // @synthesize m_viewButton;
- (void)onBindGoogleContactFailedWith:(unsigned int)arg1;
- (void)onBindGoogleContactHasBeenUsed;
- (void)onBindGoogleContactNetWorkFailed;
- (void)onBindGoogleContactOK;
- (void)onCancelBindAnotherGoogleAccount;
- (void)onClickBindButton;
- (void)onClickUnbindButton;
- (void)onClickViewButton;
- (void)onFetchFromGoogleFailed;
- (void)onUnbindGoogleContactFailedWith:(unsigned int)arg1;
- (void)onUnbindGoogleContactNetWorkFailed;
- (void)onUnbindGoogleContactOK;
- (void)updateUI;
- (void)viewController:(id)arg1 finishedWithAuth:(id)arg2 error:(id)arg3;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

