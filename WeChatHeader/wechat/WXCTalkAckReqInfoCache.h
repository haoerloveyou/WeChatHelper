//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WXCTalkAckReqInfoCache : NSObject
{
    unsigned int _roomId;
    NSString *_svrGroupId;
    unsigned long long _roomKey;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) unsigned int roomId; // @synthesize roomId=_roomId;
@property(nonatomic) unsigned long long roomKey; // @synthesize roomKey=_roomKey;
@property(copy, nonatomic) NSString *svrGroupId; // @synthesize svrGroupId=_svrGroupId;

@end

