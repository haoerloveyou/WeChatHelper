//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMDiskUsageRepoterDelegate.h"
#import "MMDiskUsageScannerDelegate.h"
#import "MMService.h"
#import "ReportStrategyExt.h"

@class MMDiskUsageConfigHandler, MMDiskUsageReporter, MMDiskUsageScaner, MMDiskUsageStatus, MMTimer, NSObject<OS_dispatch_queue>, NSString;

@interface MMDiskUsageMgr : MMService <MMDiskUsageScannerDelegate, MMDiskUsageRepoterDelegate, ReportStrategyExt, MMService>
{
    NSObject<OS_dispatch_queue> *m_workQueue;
    MMTimer *m_timerStartScan;
    MMTimer *m_timerStopScan;
    MMDiskUsageScaner *m_scanner;
    MMDiskUsageReporter *m_reporter;
    MMDiskUsageConfigHandler *m_configHandler;
    MMDiskUsageStatus *m_status;
}

- (void).cxx_destruct;
- (void)ReceiveStrategyConfigXml:(id)arg1;
- (void)clearData;
- (void)clearReportAndScanData;
- (void)createWorkQueue;
- (void)dealloc;
- (id)generateScanConfig;
- (void)immediateStopScanDisk;
- (id)init;
- (void)invalidateTimerStartScan;
- (void)invalidateTimerStopScan;
- (_Bool)isNeedReport;
- (_Bool)isReadyToRun;
- (_Bool)isReporterRunning;
- (_Bool)isScanRunning;
- (_Bool)isTimeToReport;
- (_Bool)isTimeToScan;
- (void)loadStatus;
@property(retain, nonatomic) MMDiskUsageConfigHandler *m_configHandler; // @synthesize m_configHandler;
@property(retain, nonatomic) MMDiskUsageReporter *m_reporter; // @synthesize m_reporter;
@property(retain, nonatomic) MMDiskUsageScaner *m_scanner; // @synthesize m_scanner;
@property(retain, nonatomic) MMDiskUsageStatus *m_status; // @synthesize m_status;
@property(retain, nonatomic) MMTimer *m_timerStartScan; // @synthesize m_timerStartScan;
@property(retain, nonatomic) MMTimer *m_timerStopScan; // @synthesize m_timerStopScan;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *m_workQueue; // @synthesize m_workQueue;
- (void)onDiskUsageScanStart;
- (void)onDiskUsageScanStop;
- (void)onReceiveStrategy:(int)arg1 withContene:(id)arg2;
- (void)onReportFinished;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onTimerStartScan;
- (void)onTimerStopScan;
- (void)report;
- (void)reportPhase;
- (void)saveStatus;
- (void)scanPhase;
- (void)scheduleTimerStartScan;
- (void)scheduleTimerStopScan;
- (void)setupReporter;
- (void)startScanDisk;
- (void)stopScanDisk;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

