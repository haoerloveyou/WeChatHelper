//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PSTNStatHelper : NSObject
{
}

+ (id)GenPSTNChannelLog:(struct CommonReport_t *)arg1 oldRelayRepo:(struct tagRelayReport *)arg2 newRelayRepo:(struct NewRelayReport *)arg3;
+ (id)GenPSTNClientLog:(struct CommonReport_t *)arg1 clientRepo:(struct ClientReport_t *)arg2 androidReport:(struct PstnAndroidReport_t *)arg3;
+ (id)GenPSTNCommonLog:(struct CommonReport_t *)arg1;
+ (id)GenPSTNEngineLog:(struct CommonReport_t *)arg1 avQualityLog:(struct tagAVQualityReportInfo *)arg2;

@end

