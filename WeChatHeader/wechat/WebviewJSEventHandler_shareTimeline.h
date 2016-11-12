//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "NSURLConnectionDelegate.h"
#import "WCCommitViewResultDelegate.h"

@class JSEvent, NSMutableData, NSString, NSURLConnection;

@interface WebviewJSEventHandler_shareTimeline : WebviewJSEventHandlerBase <NSURLConnectionDelegate, WCCommitViewResultDelegate>
{
    NSURLConnection *_m_connecttion;
    JSEvent *_m_curEvent;
    NSMutableData *_m_recData;
    NSString *_publishedId;
}

- (void).cxx_destruct;
- (void)clearCurData;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
@property(retain, nonatomic) NSURLConnection *m_connecttion; // @synthesize m_connecttion=_m_connecttion;
@property(retain, nonatomic) JSEvent *m_curEvent; // @synthesize m_curEvent=_m_curEvent;
@property(retain, nonatomic) NSMutableData *m_recData; // @synthesize m_recData=_m_recData;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
@property(retain, nonatomic) NSString *publishedId; // @synthesize publishedId=_publishedId;
- (void)shareTimelineWithEvent:(id)arg1 imageData:(id)arg2;
- (void)showCanNotShareEmptyPage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

