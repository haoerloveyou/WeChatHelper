//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface ScanHistoryLogicHelper : NSObject
{
    NSMutableDictionary *_dicItems;
    NSMutableArray *_arrSortedKeyByTime;
    NSMutableArray *_arrSortedItems;
}

+ (id)GetCachePath;
+ (_Bool)isExistScanHistory;
- (void).cxx_destruct;
- (void)LoadDataFromFile;
- (void)SaveDataToFile;
- (void)addItem:(id)arg1 withDataID:(id)arg2 andType:(unsigned long long)arg3;
- (id)arrHistoryItems;
- (void)cleanAllData;
- (unsigned long long)historyCount;
- (id)init;
- (id)itemCreateTime:(unsigned long long)arg1;
- (void)removeItem:(unsigned long long)arg1;

@end

