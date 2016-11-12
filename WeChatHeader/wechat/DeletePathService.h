//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IClearDataMgrExt.h"
#import "MMService.h"

@class NSMutableArray, NSRecursiveLock, NSString, NSThread;

@interface DeletePathService : MMService <IClearDataMgrExt, MMService>
{
    NSMutableArray *_arrSubFolderName;
    NSMutableArray *_arrSubFileName;
    NSThread *_taskThread;
    NSRecursiveLock *_lock;
    int _runStatus;
}

- (void).cxx_destruct;
- (void)asyncPause;
- (void)asyncStart;
- (void)dealloc;
- (void)forceStop;
- (id)init;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned int)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)start;
- (void)threadFunc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

