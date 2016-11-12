//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface GameCenterMsgDbModel : NSObject <WCDBCoding>
{
    _Bool showInMsgCenter;
    _Bool unRead;
    unsigned int localId;
    unsigned int type;
    unsigned int createTime;
    NSString *svrMsgId;
    NSString *content;
    NSString *mergeId;
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
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
- (const WCDBCondition_22fabacd *)db_content;
- (const WCDBCondition_c6db074e *)db_createTime;
- (const WCDBCondition_c6db074e *)db_localId;
- (const WCDBCondition_22fabacd *)db_mergeId;
- (const WCDBCondition_d7690721 *)db_showInMsgCenter;
- (const WCDBCondition_22fabacd *)db_svrMsgId;
- (const WCDBCondition_c6db074e *)db_type;
- (const WCDBCondition_d7690721 *)db_unRead;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)initWithGameCenterMsg:(id)arg1;
@property(nonatomic) unsigned int localId; // @synthesize localId;
@property(retain, nonatomic) NSString *mergeId; // @synthesize mergeId;
@property(nonatomic) _Bool showInMsgCenter; // @synthesize showInMsgCenter;
@property(retain, nonatomic) NSString *svrMsgId; // @synthesize svrMsgId;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(nonatomic) _Bool unRead; // @synthesize unRead;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

