//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ChatRoomRemindMsg : NSObject
{
    unsigned int createTime;
    unsigned int msgSvrID;
    NSString *desc;
    NSString *chatRoomName;
    unsigned int actionType;
    NSString *actionName;
    NSString *actionUrl;
    unsigned int expireTime;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName;
@property(nonatomic) unsigned int actionType; // @synthesize actionType;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int msgSvrID; // @synthesize msgSvrID;

@end

