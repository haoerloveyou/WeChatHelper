//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

#import "IWebviewAskAuthorizationLogicExt.h"
#import "LocationRetrieveDelegate.h"

@class LocationRetriever, NSString;

@interface WAWebViewPlugin_getLocation : WAWebViewPluginBase <LocationRetrieveDelegate, IWebviewAskAuthorizationLogicExt>
{
    long long m_geoLocationType;
    LocationRetriever *_locationRetriever;
    id <IWAWebViewPluginDelegate> _resultDelegate;
}

- (void).cxx_destruct;
- (void)OnAskAuthorizationFailure:(id)arg1 ForAuthInfo:(id)arg2;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)arg1;
- (void)dealloc;
- (void)getLocation:(long long)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
@property(nonatomic) __weak id <IWAWebViewPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void)startRetrieverAddress;
- (void)unregister;
- (void)updateWebviewTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

