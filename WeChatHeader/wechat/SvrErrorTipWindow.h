//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "CAAnimationDelegate.h"
#import "IHDHeadImageViewExt.h"
#import "ILinkEventExt.h"
#import "IMMImagePickerManagerExt.h"
#import "ISvrErrorExt.h"
#import "IUiUtilExt.h"
#import "IViewControllerExt.h"
#import "RichTextLayoutDelegate.h"
#import "SvrErrorTipViewControllerDelegate.h"

@class NSString, RichTextView, SvrErrorTipViewController, UIButton, UIImageView;

@interface SvrErrorTipWindow : MMUIWindow <CAAnimationDelegate, ISvrErrorExt, IUiUtilExt, IViewControllerExt, IHDHeadImageViewExt, IMMImagePickerManagerExt, RichTextLayoutDelegate, ILinkEventExt, SvrErrorTipViewControllerDelegate>
{
    UIImageView *_iconImage;
    RichTextView *_tipView;
    UIButton *_closeButton;
    unsigned int _lastCloseTipViewTime;
    NSString *_tipMsg;
    NSString *_url;
    _Bool _tipForbidden;
    _Bool _tipTempForbidden;
    _Bool _landscapeForbidden;
    SvrErrorTipViewController *_fullScreenViewController;
    unsigned int _lastShowFullScreenTime;
}

- (void).cxx_destruct;
- (void)OnGetSvrError:(id)arg1 Url:(id)arg2 Tips:(id)arg3 TimeOut:(unsigned int)arg4;
- (void)closetipView;
- (void)dealloc;
- (unsigned int)getSvrErrorMsgMaxLength;
- (void)hideSvrErrorTip;
- (id)init;
- (void)initData;
- (void)initView;
- (_Bool)isTipBusy;
- (void)jumpUrl:(id)arg1;
- (void)manualCloseTipView;
- (void)onHDHeadImageWillAppear;
- (void)onHDHeadImageWillDisappear;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onMMImagePickerManagerFinish;
- (void)onMMImagePickerManagerShow;
- (void)onStatusBarHiddenChanged:(long long)arg1;
- (void)onSvrErrorTipClickCancelButton;
- (void)onSvrErrorTipClickDetailButton;
- (void)onTimeOut;
- (void)onTopBarFrameChanged;
- (void)onViewWillAppear:(_Bool)arg1 landscapeForbidden:(_Bool)arg2;
- (void)safeCall;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)showFullScreenSvrErrorTip:(id)arg1;
- (void)showSvrErrorTip;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

