//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCCardDataSource.h"
#import "WCDBCoding.h"

@class NSString, WCCardDataCardInfo, WCCardDataCardTPInfo, WCCardDataShareInfo;

@interface WCCardData : MMObject <WCDBCoding, WCCardDataSource>
{
    int uiLayoutType;
    unsigned int localCardId;
    unsigned int beginTime;
    unsigned int endTime;
    unsigned int stateFlag;
    unsigned int updateSeq;
    unsigned int localUpdateSeq;
    unsigned int updateTime;
    unsigned int localUpdateTime;
    unsigned int IntRes1;
    unsigned int IntRes2;
    unsigned int IntRes3;
    WCCardDataCardTPInfo *cardTPInfo;
    WCCardDataCardInfo *cardInfo;
    WCCardDataShareInfo *shareInfo;
    NSString *jsonStrForTest;
    NSString *layoutAnnounce;
    NSString *layoutTitle;
    NSString *encryptCode;
    NSString *cardId;
    NSString *cardTpId;
    NSString *cardTPInfoForDB;
    NSString *cardInfoForDB;
    NSString *shareInfoForDB;
    NSString *StrRes1;
    NSString *StrRes2;
    NSString *StrRes3;
    long long m___rowID;
}

+ (id)dummyObject;
+ (id)getCardInfoStr:(id)arg1;
+ (id)getCardTPInfoStr:(id)arg1;
+ (const map_0e718273 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_0e718273 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (id)getShareInfoStr:(id)arg1;
+ (const map_7a576766 *)getValueNameIndexMap;
+ (id)getValueTable;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
+ (void)parseCardInfoDic:(id)arg1 ToCardInfo:(id)arg2;
+ (void)parseCardTPInfoDic:(id)arg1 ToCardTpInfo:(id)arg2;
+ (void)parseShareInfoDic:(id)arg1 ToShareInfo:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned int IntRes3; // @synthesize IntRes3;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes3; // @synthesize StrRes3;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(retain, nonatomic) WCCardDataCardInfo *cardInfo; // @synthesize cardInfo;
@property(retain, nonatomic) NSString *cardInfoForDB; // @synthesize cardInfoForDB;
@property(retain, nonatomic) WCCardDataCardTPInfo *cardTPInfo; // @synthesize cardTPInfo;
@property(retain, nonatomic) NSString *cardTPInfoForDB; // @synthesize cardTPInfoForDB;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId;
- (const WCDBCondition_c6db074e *)db_IntRes1;
- (const WCDBCondition_c6db074e *)db_IntRes2;
- (const WCDBCondition_c6db074e *)db_IntRes3;
- (const WCDBCondition_22fabacd *)db_StrRes1;
- (const WCDBCondition_22fabacd *)db_StrRes2;
- (const WCDBCondition_22fabacd *)db_StrRes3;
- (const WCDBCondition_c6db074e *)db_beginTime;
- (const WCDBCondition_22fabacd *)db_cardId;
- (const WCDBCondition_22fabacd *)db_cardInfoForDB;
- (const WCDBCondition_22fabacd *)db_cardTPInfoForDB;
- (const WCDBCondition_22fabacd *)db_cardTpId;
- (const WCDBCondition_c6db074e *)db_endTime;
- (const WCDBCondition_c6db074e *)db_localCardId;
- (const WCDBCondition_c6db074e *)db_localUpdateSeq;
- (const WCDBCondition_c6db074e *)db_localUpdateTime;
- (const WCDBCondition_22fabacd *)db_shareInfoForDB;
- (const WCDBCondition_c6db074e *)db_stateFlag;
- (const WCDBCondition_c6db074e *)db_updateSeq;
- (const WCDBCondition_c6db074e *)db_updateTime;
- (void)dealloc;
@property(retain, nonatomic) NSString *encryptCode; // @synthesize encryptCode;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
- (id)getCardId;
- (id)getCardInfo;
- (id)getCardTpId;
- (id)getCardTpInfo;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *jsonStrForTest; // @synthesize jsonStrForTest;
@property(retain, nonatomic) NSString *layoutAnnounce; // @synthesize layoutAnnounce;
@property(retain, nonatomic) NSString *layoutTitle; // @synthesize layoutTitle;
- (void)loadDataForTest;
@property(nonatomic) unsigned int localCardId; // @synthesize localCardId;
@property(nonatomic) unsigned int localUpdateSeq; // @synthesize localUpdateSeq;
@property(nonatomic) unsigned int localUpdateTime; // @synthesize localUpdateTime;
- (void)parseFromJSONDic:(id)arg1;
- (void)parseFromJSONStr:(id)arg1;
@property(retain, nonatomic) WCCardDataShareInfo *shareInfo; // @synthesize shareInfo;
@property(retain, nonatomic) NSString *shareInfoForDB; // @synthesize shareInfoForDB;
@property(nonatomic) unsigned int stateFlag; // @synthesize stateFlag;
@property(nonatomic) int uiLayoutType; // @synthesize uiLayoutType;
@property(nonatomic) unsigned int updateSeq; // @synthesize updateSeq;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
- (void)setupDataBeforeWriteDB;
- (void)setupDataFromDB;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

