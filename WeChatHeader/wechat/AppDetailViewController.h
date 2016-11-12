//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IEnterpriseMsgExt.h"
#import "IMsgExt.h"
#import "IMsgRevokeExt.h"
#import "MMAppAttachFileMgrExt.h"
#import "UIAlertViewDelegate.h"
#import "UIDocumentInteractionControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIWebViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WKNavigationDelegate.h"

@class CMessageWrap, MMMPMoviePlayerController, MMProgressView, NSString, ShareDataToOpenSDKController, UIButton, UIDocumentInteractionController, UILabel, UITapGestureRecognizer, UIView, WCActionSheet;

@interface AppDetailViewController : MMUIViewController <WCActionSheetDelegate, UIDocumentInteractionControllerDelegate, MMAppAttachFileMgrExt, UIScrollViewDelegate, UIGestureRecognizerDelegate, UIWebViewDelegate, WKNavigationDelegate, IMsgExt, IEnterpriseMsgExt, IMsgRevokeExt, UIAlertViewDelegate>
{
    NSString *m_nsUsrName;
    CMessageWrap *m_wrapMsg;
    _Bool m_bDownloading;
    _Bool m_bRegister;
    MMProgressView *m_viewProgress;
    UILabel *m_labProgress;
    UIButton *m_btnCancelDownload;
    UIButton *m_btnDownload;
    UILabel *m_labCannotOpen;
    UIButton *m_btnViewDetail;
    UIButton *m_btnOpenByApp;
    UILabel *m_labelFileName;
    id <AppDetailDelegate> m_delegate;
    _Bool m_bPreview;
    unsigned int m_uiPreviewType;
    UIDocumentInteractionController *m_vcDocument;
    _Bool m_bViewDidAppear;
    _Bool m_bOpenMode;
    _Bool m_bFileExpired;
    _Bool m_bHasRevoke;
    MMMPMoviePlayerController *_moviePlayerController;
    WCActionSheet *m_actionSheet;
    ShareDataToOpenSDKController *m_shareOpenSDKController;
    UIView *m_webView;
    _Bool _bIsNaviBarHide;
    UITapGestureRecognizer *_singleTapRec;
    _Bool _bIsDisableTapRec;
    _Bool m_showInfoOnly;
    _Bool m_bIsFileExistInSvr;
    UIButton *m_shareToFriendBtn;
    NSString *_m_tmpFilePath;
}

- (void).cxx_destruct;
- (id)GetFileDisplayName;
- (id)GetFilePath;
- (id)GetTmpFilePath;
- (void)InitDownload:(_Bool)arg1;
- (void)InitInfoiew;
- (void)InitPreview;
- (void)OnLookDetail;
- (void)OnModEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (void)OnOpenByApp:(id)arg1;
- (void)OnOperate:(id)arg1;
- (void)OnReturn;
- (void)SafeDeleteDocument;
- (void)SetDownloadHide:(_Bool)arg1;
- (void)SetProgress:(unsigned int)arg1;
- (void)SetProgressHide:(_Bool)arg1;
- (void)ShowDownloadBtn;
- (void)ShowProgressView;
- (void)StartDownload;
- (void)StopDownload;
- (void)StopDownloadAndUpdateView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)canShowMsgForwardTo3rdApp;
- (void)checkIsFileExistInSvr;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleModMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)init;
- (void)initShareToFriendBtn;
- (_Bool)isExceptionFileName:(id)arg1;
@property(nonatomic) _Bool m_bIsFileExistInSvr; // @synthesize m_bIsFileExistInSvr;
@property(nonatomic) _Bool m_bOpenMode; // @synthesize m_bOpenMode;
@property(nonatomic) __weak id <AppDetailDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
@property(retain, nonatomic) UIButton *m_shareToFriendBtn; // @synthesize m_shareToFriendBtn;
@property(nonatomic) _Bool m_showInfoOnly; // @synthesize m_showInfoOnly;
@property(retain, nonatomic) NSString *m_tmpFilePath; // @synthesize m_tmpFilePath=_m_tmpFilePath;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
- (void)onCheckAppAttachRet:(id)arg1 isExistInSvr:(_Bool)arg2 taskInfo:(id)arg3;
- (void)onSingleTap:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setNaviBarHide:(_Bool)arg1 animation:(_Bool)arg2;
- (void)shareToFriend;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tryRegister;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

