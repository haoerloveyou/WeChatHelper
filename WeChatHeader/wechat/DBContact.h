//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSData, NSString;

@interface DBContact : NSObject <WCDBCoding>
{
    unsigned int version;
    unsigned int uin;
    unsigned int sex;
    unsigned int type;
    unsigned int LastChatTime;
    NSString *userName;
    NSString *nickName;
    NSString *email;
    NSString *mobile;
    NSString *fullPinYin;
    NSData *extent;
    NSString *image;
    NSString *draft;
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
@property(nonatomic) unsigned int LastChatTime; // @synthesize LastChatTime;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
- (const WCDBCondition_c6db074e *)db_LastChatTime;
- (const WCDBCondition_22fabacd *)db_draft;
- (const WCDBCondition_22fabacd *)db_email;
- (const WCDBCondition_91e67114 *)db_extent;
- (const WCDBCondition_22fabacd *)db_fullPinYin;
- (const WCDBCondition_22fabacd *)db_image;
- (const WCDBCondition_22fabacd *)db_mobile;
- (const WCDBCondition_22fabacd *)db_nickName;
- (const WCDBCondition_c6db074e *)db_sex;
- (const WCDBCondition_c6db074e *)db_type;
- (const WCDBCondition_c6db074e *)db_uin;
- (const WCDBCondition_22fabacd *)db_userName;
- (const WCDBCondition_c6db074e *)db_version;
@property(retain, nonatomic) NSString *draft; // @synthesize draft;
@property(retain, nonatomic) NSString *email; // @synthesize email;
@property(retain, nonatomic) NSData *extent; // @synthesize extent;
@property(retain, nonatomic) NSString *fullPinYin; // @synthesize fullPinYin;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *image; // @synthesize image;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(nonatomic) unsigned int sex; // @synthesize sex;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(nonatomic) unsigned int uin; // @synthesize uin;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(nonatomic) unsigned int version; // @synthesize version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

