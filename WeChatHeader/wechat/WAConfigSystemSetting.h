//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface WAConfigSystemSetting : NSObject
{
    NSDictionary *_dicSetting;
}

- (void).cxx_destruct;
- (unsigned int)appMaxRunningCount;
- (unsigned int)appServiceMaxDataSize;
- (id)cdnBaseURL;
- (unsigned int)defaultAppMaxRunningCount;
- (unsigned int)defaultAppServiceMaxDataSize;
- (id)defaultCDNBaseURL;
- (id)defaultHttpHeaderReferer;
- (unsigned int)downloadFileMaxTimeoutMS;
- (id)httpHeaderBlackList;
- (id)httpHeaderMode;
- (id)httpHeaderReferer;
- (id)httpHeaderWhiteList;
- (id)httpSetting;
- (id)initWithSetting:(id)arg1;
- (unsigned int)requestMaxTimeoutMS;
- (unsigned int)uploadFileMaxTimeoutMS;
- (unsigned int)webSocketMaxTimeoutMS;

@end

