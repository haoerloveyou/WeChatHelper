//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXSearchJSLogicImpl.h"

#import "UIWebViewDelegate.h"

@class NSString;

@interface WSWebViewLogic : WXSearchJSLogicImpl <UIWebViewDelegate>
{
}

- (double)curFontRatio;
- (id)curLang;
- (unsigned int)curSearchScene;
- (unsigned int)curVersion;
- (id)initWithWebView:(id)arg1;
- (void)loadFile:(id)arg1;
- (_Bool)onWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)onWebViewFailLoad:(id)arg1 withError:(id)arg2;
- (void)onWebViewFinishedLoad:(id)arg1;
- (void)onWebViewStartLoad:(id)arg1;
- (void)showWebview:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

