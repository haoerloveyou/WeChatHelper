//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class CmdList, NSString, SKBuiltinBuffer_t;

@interface NewSyncRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *deviceType; // @dynamic deviceType;
@property(retain, nonatomic) SKBuiltinBuffer_t *keyBuf; // @dynamic keyBuf;
@property(retain, nonatomic) CmdList *oplog; // @dynamic oplog;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int selector; // @dynamic selector;
@property(nonatomic) unsigned int syncMsgDigest; // @dynamic syncMsgDigest;

@end

