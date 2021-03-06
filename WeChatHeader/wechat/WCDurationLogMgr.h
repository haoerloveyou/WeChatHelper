//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString, WCDurationLogDB, WCDurationLogItem;

@interface WCDurationLogMgr : MMService <MMService>
{
    _Bool _isUserLogoutInThisSession;
    WCDurationLogItem *_currentLogItem;
    WCDurationLogDB *_dataBase;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCDurationLogItem *currentLogItem; // @synthesize currentLogItem=_currentLogItem;
@property(retain, nonatomic) WCDurationLogDB *dataBase; // @synthesize dataBase=_dataBase;
@property(nonatomic) _Bool isUserLogoutInThisSession; // @synthesize isUserLogoutInThisSession=_isUserLogoutInThisSession;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)onServiceTerminate;
- (void)report;
- (void)tryUploadAllItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

