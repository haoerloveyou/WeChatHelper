//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IWebviewResourceManagerExt.h"

@class NSString;

@interface WebViewJSEventHandler_uploadMediaFile : WebviewJSEventHandlerBase <IWebviewResourceManagerExt>
{
    _Bool _isShowProgressTips;
}

- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)init;
- (void)onLocalResourceUploadFinishedWithoutMediaId:(id)arg1 FileUrl:(id)arg2 ErrCode:(int)arg3;
- (void)onLocalResourceUploadProgressWithouMediaId:(int)arg1 LocalId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

