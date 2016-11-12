//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString, SKBuiltinBuffer_t, SnsPostCtocUploadInfo, SnsPostOperationFields, SnsRedEnvelops, TwitterInfo;

@interface SnsPostRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *blackList; // @dynamic blackList;
@property(nonatomic) unsigned int blackListCount; // @dynamic blackListCount;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) SnsPostCtocUploadInfo *ctocUploadInfo; // @dynamic ctocUploadInfo;
@property(retain, nonatomic) NSString *fromScene; // @dynamic fromScene;
@property(nonatomic) unsigned int groupCount; // @dynamic groupCount;
@property(retain, nonatomic) NSMutableArray *groupIds; // @dynamic groupIds;
@property(retain, nonatomic) NSMutableArray *groupUser; // @dynamic groupUser;
@property(nonatomic) unsigned int groupUserCount; // @dynamic groupUserCount;
@property(retain, nonatomic) SKBuiltinBuffer_t *objectDesc; // @dynamic objectDesc;
@property(nonatomic) unsigned int objectSource; // @dynamic objectSource;
@property(retain, nonatomic) SKBuiltinBuffer_t *poiInfo; // @dynamic poiInfo;
@property(nonatomic) unsigned int postBgimgType; // @dynamic postBgimgType;
@property(nonatomic) unsigned int privacy; // @dynamic privacy;
@property(nonatomic) unsigned long long referId; // @dynamic referId;
@property(retain, nonatomic) SnsPostOperationFields *snsPostOperationFields; // @dynamic snsPostOperationFields;
@property(retain, nonatomic) SnsRedEnvelops *snsRedEnvelops; // @dynamic snsRedEnvelops;
@property(nonatomic) unsigned int syncFlag; // @dynamic syncFlag;
@property(retain, nonatomic) TwitterInfo *twitterInfo; // @dynamic twitterInfo;
@property(retain, nonatomic) NSMutableArray *withUserList; // @dynamic withUserList;
@property(nonatomic) unsigned int withUserListCount; // @dynamic withUserListCount;

@end

