//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString, WADBContactPack;

@interface WADBContactTable : NSObject <WCDBCoding>
{
    unsigned int type;
    unsigned int wxAppOpt;
    NSString *userName;
    NSString *brandIconURL;
    NSString *externalInfo;
    WADBContactPack *contactPack;
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
@property(retain, nonatomic) NSString *brandIconURL; // @synthesize brandIconURL;
@property(retain, nonatomic) WADBContactPack *contactPack; // @synthesize contactPack;
- (const WCDBCondition_22fabacd *)db_brandIconURL;
- (const WCDBCondition_00c4e889 *)db_contactPack;
- (const WCDBCondition_22fabacd *)db_externalInfo;
- (const WCDBCondition_c6db074e *)db_type;
- (const WCDBCondition_22fabacd *)db_userName;
- (const WCDBCondition_c6db074e *)db_wxAppOpt;
@property(retain, nonatomic) NSString *externalInfo; // @synthesize externalInfo;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(nonatomic) unsigned int wxAppOpt; // @synthesize wxAppOpt;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

