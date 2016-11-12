//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@protocol IClearDataMgrExt <NSObject>

@optional
- (void)onCleanedCacheSize:(unsigned long long)arg1;
- (void)onCleanedOver3MonthFileSize:(unsigned long long)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned int)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)onInnerDeleteData;
- (void)onLoadDataFinished;
- (void)onReloadDataItem;
@end

