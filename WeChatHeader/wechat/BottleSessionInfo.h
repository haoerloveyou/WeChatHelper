//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMBaseSessionInfo.h"

#import "WCDBCoding.h"

@class CBottle, CBottleContact, NSMutableArray, NSString;

@interface BottleSessionInfo : MMBaseSessionInfo <WCDBCoding>
{
    NSMutableArray *arrLocalID;
    long long m___rowID;
}

+ (id)dummyObject;
+ (const map_0e718273 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_0e718273 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_7a576766 *)getValueNameIndexMap;
+ (id)getValueTable;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
+ (id)sessionInfoWithBottle:(id)arg1 isRealBottle:(_Bool)arg2 localIdList:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSMutableArray *arrLocalID; // @synthesize arrLocalID;
@property(retain, nonatomic) CBottle *bottle;
@property(retain, nonatomic) CBottleContact *bottleContact;
- (const WCDBCondition_22fabacd *)db_draftMsg;
- (const WCDBCondition_c6db074e *)db_draftMsgTime;
- (const WCDBCondition_c6db074e *)db_lastMsgUpdateTime;
- (const WCDBCondition_c6db074e *)db_sessionFlag;
- (const WCDBCondition_22fabacd *)db_sessionId;
- (const WCDBCondition_c6db074e *)db_unreadCount;
- (id)genBottle;
- (id)genBottleContact;
- (id)genLastMessage;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(nonatomic) _Bool isRealBottle;
@property(nonatomic) unsigned int uiBottleLocalID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *sessionId;
@property(readonly) Class superclass;

@end
