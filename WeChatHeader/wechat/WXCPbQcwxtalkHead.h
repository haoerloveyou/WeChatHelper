//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSString;

@interface WXCPbQcwxtalkHead : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)description;
- (id)recvShortDesc;
- (id)sendShortDesc;

// Remaining properties
@property(nonatomic) int cmd; // @dynamic cmd;
@property(nonatomic) int debugCode; // @dynamic debugCode;
@property(nonatomic) int ret; // @dynamic ret;
@property(nonatomic) unsigned int routeId; // @dynamic routeId;
@property(nonatomic) unsigned int seqNo; // @dynamic seqNo;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(nonatomic) unsigned int uuid; // @dynamic uuid;

@end

