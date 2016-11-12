//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableDictionary, NSString;

@interface MMDiskUsageScanStat : NSObject <PBCoding>
{
    _Bool m_isDelUnknowData;
    unsigned int m_totalStartTime;
    unsigned int m_totalEndTime;
    unsigned int m_totalUsedTime;
    unsigned int m_totalScanCount;
    unsigned int m_totalFolderNum;
    unsigned int m_totalFileNum;
    unsigned int m_totalDelFolderNum;
    unsigned int m_totalDelFileNum;
    unsigned int m_curStartTime;
    unsigned int m_curEndTime;
    unsigned int m_curUsedTime;
    unsigned int m_curScannedFolderNum;
    unsigned int m_curAddFolderNum;
    unsigned int m_curScannedFileNum;
    unsigned int m_curDelFolderNum;
    unsigned int m_curDelFileNum;
    unsigned long long m_totalFileSize;
    NSMutableDictionary *m_dicTotalBizStat;
    unsigned long long m_totalDelFileSize;
    NSMutableDictionary *m_dicTotalFileTypeInUseStat;
    NSMutableDictionary *m_dicSpecialFileStat;
    unsigned long long m_curDelFileSize;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)currentScanSummary;
@property(readonly, copy) NSString *description;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(nonatomic) unsigned int m_curAddFolderNum; // @synthesize m_curAddFolderNum;
@property(nonatomic) unsigned int m_curDelFileNum; // @synthesize m_curDelFileNum;
@property(nonatomic) unsigned long long m_curDelFileSize; // @synthesize m_curDelFileSize;
@property(nonatomic) unsigned int m_curDelFolderNum; // @synthesize m_curDelFolderNum;
@property(nonatomic) unsigned int m_curEndTime; // @synthesize m_curEndTime;
@property(nonatomic) unsigned int m_curScannedFileNum; // @synthesize m_curScannedFileNum;
@property(nonatomic) unsigned int m_curScannedFolderNum; // @synthesize m_curScannedFolderNum;
@property(nonatomic) unsigned int m_curStartTime; // @synthesize m_curStartTime;
@property(nonatomic) unsigned int m_curUsedTime; // @synthesize m_curUsedTime;
@property(retain, nonatomic) NSMutableDictionary *m_dicSpecialFileStat; // @synthesize m_dicSpecialFileStat;
@property(retain, nonatomic) NSMutableDictionary *m_dicTotalBizStat; // @synthesize m_dicTotalBizStat;
@property(retain, nonatomic) NSMutableDictionary *m_dicTotalFileTypeInUseStat; // @synthesize m_dicTotalFileTypeInUseStat;
@property(nonatomic) _Bool m_isDelUnknowData; // @synthesize m_isDelUnknowData;
@property(nonatomic) unsigned int m_totalDelFileNum; // @synthesize m_totalDelFileNum;
@property(nonatomic) unsigned long long m_totalDelFileSize; // @synthesize m_totalDelFileSize;
@property(nonatomic) unsigned int m_totalDelFolderNum; // @synthesize m_totalDelFolderNum;
@property(nonatomic) unsigned int m_totalEndTime; // @synthesize m_totalEndTime;
@property(nonatomic) unsigned int m_totalFileNum; // @synthesize m_totalFileNum;
@property(nonatomic) unsigned long long m_totalFileSize; // @synthesize m_totalFileSize;
@property(nonatomic) unsigned int m_totalFolderNum; // @synthesize m_totalFolderNum;
@property(nonatomic) unsigned int m_totalScanCount; // @synthesize m_totalScanCount;
@property(nonatomic) unsigned int m_totalStartTime; // @synthesize m_totalStartTime;
@property(nonatomic) unsigned int m_totalUsedTime; // @synthesize m_totalUsedTime;
- (void)markStartTime;
- (void)markStopTime:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

