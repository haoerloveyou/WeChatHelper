//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface WCDeviceAirKissReccord : NSObject <WCDBCoding>
{
    unsigned int IntRes1;
    unsigned int IntRes2;
    NSString *m_key;
    NSString *m_data;
    NSString *StrRes1;
    NSString *StrRes2;
    long long m___rowID;
}

+ (id)dummyObject;
+ (const map_0e718273 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_0e718273 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_7a576766 *)getValueNameIndexMap;
+ (id)getValueTable;
- (void).cxx_destruct;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
- (const WCDBCondition_c6db074e *)db_IntRes1;
- (const WCDBCondition_c6db074e *)db_IntRes2;
- (const WCDBCondition_22fabacd *)db_StrRes1;
- (const WCDBCondition_22fabacd *)db_StrRes2;
- (const WCDBCondition_22fabacd *)db_m_data;
- (const WCDBCondition_22fabacd *)db_m_key;
- (void)dealloc;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *m_data; // @synthesize m_data;
@property(retain, nonatomic) NSString *m_key; // @synthesize m_key;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

