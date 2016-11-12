//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WCRedEnvelopesNetworkHelperDelegate.h"

@class NSString, WCRedEnvelopesNetworkHelper;

@interface WCRedEnvelopesLogicMgr : MMService <MMService, WCRedEnvelopesNetworkHelperDelegate>
{
    WCRedEnvelopesNetworkHelper *m_networkHelper;
}

- (void).cxx_destruct;
- (void)AsyncBizSubcribeRequest:(id)arg1;
- (void)CheckAuthBizEnterpriseRedEnvelopesRequest:(id)arg1;
- (void)ClearserSendOrReceiveRedEnveloperListRequest:(id)arg1;
- (void)DeleteRedEnvelopesRecord:(id)arg1;
- (void)GenH5RedEnvelopesPayRequest:(id)arg1;
- (void)GenRedEnvelopesPayRequest:(id)arg1;
- (void)GenYearRedEnvelopesPayRequest:(id)arg1;
- (void)GetEnterpriseHongbaoBizRequest:(id)arg1 CMDID:(unsigned int)arg2 SendKey:(id)arg3 OutputType:(unsigned int)arg4;
- (void)GetEnterpriseHongbaoBusinessRequest:(id)arg1 CMDID:(unsigned int)arg2 SendKey:(id)arg3 OutputType:(unsigned int)arg4 ShouldSubscribe:(_Bool)arg5;
- (void)GetHongbaoBusinessRequest:(id)arg1 CMDID:(unsigned int)arg2 OutputType:(unsigned int)arg3;
- (void)GetYearHongbaoRequest:(id)arg1 CMDID:(unsigned int)arg2 OutputType:(unsigned int)arg3;
- (void)OnWCToAsyncBizSubscribeResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToBizHBCommonErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToBizHBCommonResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToBizHBCommonSystemErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToEnterpriseHBCommonErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToEnterpriseHBCommonResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToEnterpriseHBCommonSystemErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToHongbaoCommonErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToHongbaoCommonResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToHongbaoCommonSystemErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OpenBizEnterpriseRedEnvelopesRequest:(id)arg1;
- (void)OpenEnterpriseRedEnvelopesRequest:(id)arg1 SendKey:(id)arg2 ShouldSubscribe:(_Bool)arg3;
- (void)OpenRedEnvelopesRequest:(id)arg1;
- (void)QueryRedEnvelopesDetailRequest:(id)arg1;
- (void)QueryRedEnvelopesUserInfo:(id)arg1;
- (void)QueryRedEnvelopesUserInfoNoCache:(id)arg1;
- (void)QueryUserSendOrReceiveRedEnveloperListRequest:(id)arg1;
- (void)ReceiveBizEnterpriseRedEnvelopesRequest:(id)arg1;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;
- (void)SendShareRedEnvelopesoRequest:(id)arg1;
- (void)ThanksForRedEnvelopesRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

