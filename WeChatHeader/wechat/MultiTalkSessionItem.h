//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface MultiTalkSessionItem : MMObject <WCDBCoding>
{
    unsigned int localID;
    unsigned int lastMessageID;
    NSString *groupID;
    NSString *clientGroupID;
    NSString *createUserName;
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
- (void).cxx_destruct;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *clientGroupID; // @synthesize clientGroupID;
@property(retain, nonatomic) NSString *createUserName; // @synthesize createUserName;
- (const WCDBCondition_22fabacd *)db_clientGroupID;
- (const WCDBCondition_22fabacd *)db_createUserName;
- (const WCDBCondition_22fabacd *)db_groupID;
- (const WCDBCondition_c6db074e *)db_lastMessageID;
- (const WCDBCondition_c6db074e *)db_localID;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID;
- (_Bool)isSessionItemValid;
@property(nonatomic) unsigned int lastMessageID; // @synthesize lastMessageID;
@property(nonatomic) unsigned int localID; // @synthesize localID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

