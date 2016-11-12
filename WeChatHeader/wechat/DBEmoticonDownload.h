//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface DBEmoticonDownload : NSObject <WCDBCoding>
{
    unsigned int offset;
    unsigned int status;
    unsigned int createTime;
    unsigned int type;
    unsigned int imageStatus;
    unsigned int catalogId;
    unsigned int messageFlag;
    unsigned int messageFrom;
    unsigned int ConIntRes3;
    NSString *userName;
    NSString *msgServerId;
    NSString *message;
    NSString *catalog;
    NSString *draft;
    NSString *messageSource;
    NSString *ConStrRes2;
    NSString *ConStrRes3;
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
@property(nonatomic) unsigned int ConIntRes3; // @synthesize ConIntRes3;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *catalog; // @synthesize catalog;
@property(nonatomic) unsigned int catalogId; // @synthesize catalogId;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
- (const WCDBCondition_c6db074e *)db_ConIntRes3;
- (const WCDBCondition_22fabacd *)db_ConStrRes2;
- (const WCDBCondition_22fabacd *)db_ConStrRes3;
- (const WCDBCondition_22fabacd *)db_catalog;
- (const WCDBCondition_c6db074e *)db_catalogId;
- (const WCDBCondition_c6db074e *)db_createTime;
- (const WCDBCondition_22fabacd *)db_draft;
- (const WCDBCondition_c6db074e *)db_imageStatus;
- (const WCDBCondition_22fabacd *)db_message;
- (const WCDBCondition_c6db074e *)db_messageFlag;
- (const WCDBCondition_c6db074e *)db_messageFrom;
- (const WCDBCondition_22fabacd *)db_messageSource;
- (const WCDBCondition_22fabacd *)db_msgServerId;
- (const WCDBCondition_c6db074e *)db_offset;
- (const WCDBCondition_c6db074e *)db_status;
- (const WCDBCondition_c6db074e *)db_type;
- (const WCDBCondition_22fabacd *)db_userName;
@property(retain, nonatomic) NSString *draft; // @synthesize draft;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int imageStatus; // @synthesize imageStatus;
@property(retain, nonatomic) NSString *message; // @synthesize message;
@property(nonatomic) unsigned int messageFlag; // @synthesize messageFlag;
@property(nonatomic) unsigned int messageFrom; // @synthesize messageFrom;
@property(retain, nonatomic) NSString *messageSource; // @synthesize messageSource;
@property(retain, nonatomic) NSString *msgServerId; // @synthesize msgServerId;
@property(nonatomic) unsigned int offset; // @synthesize offset;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

