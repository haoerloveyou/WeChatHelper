//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

@interface CheckCanSubscribeBizRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *androidPackNameList; // @dynamic androidPackNameList;
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *fromUrl; // @dynamic fromUrl;
@property(retain, nonatomic) NSString *iosBunddleId; // @dynamic iosBunddleId;
@property(nonatomic) unsigned int packNum; // @dynamic packNum;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;

@end

