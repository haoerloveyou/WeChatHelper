//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "CNetworkStatusExt.h"
#import "EmoticonAddFromServerLogicObjectDelegate.h"
#import "EmoticonBackupDeleteNotifyExt.h"
#import "EmoticonBackupLogicObjectDelegate.h"
#import "EmoticonDeleteFromServerLogicObjectDelegate.h"
#import "EmoticonRecoverLogicObjectDelegate.h"
#import "EmoticonRestartBackupWhenDeleteTaskDelegate.h"
#import "IMsgExt.h"
#import "MMKernelExt.h"
#import "MMService.h"

@class EmoticonBackupLogicObject, EmoticonRecoverLogicObject, NSMutableArray, NSString;

@interface EmoticonBackUpMgr : MMService <EmoticonBackupLogicObjectDelegate, EmoticonRecoverLogicObjectDelegate, MMKernelExt, CNetworkStatusExt, IMsgExt, EmoticonDeleteFromServerLogicObjectDelegate, EmoticonAddFromServerLogicObjectDelegate, EmoticonRestartBackupWhenDeleteTaskDelegate, EmoticonBackupDeleteNotifyExt, MMService>
{
    _Bool m_hasOnceStartRecover;
    _Bool _m_hasNotStartRecoverTaskInList;
    unsigned int m_userActionStatus;
    unsigned int m_lastManageViewUploadTime;
    EmoticonBackupLogicObject *m_backupLogicObject;
    EmoticonRecoverLogicObject *m_recoverLogicObject;
    NSMutableArray *m_notifyTaskList;
}

+ (unsigned int)ActionStatusAllowRecover;
+ (unsigned int)ActionStatusNoAction;
+ (unsigned int)ActionStatusRecoverForbiden;
- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)backupLocalEmoticonToServer;
- (void)backupLocalEmoticonToServerAndIgnoreOnceLimit:(_Bool)arg1;
- (void)backupLocalEmoticonToServerFromManageView;
- (_Bool)canResumeAddSyncLogic;
- (_Bool)canResumeDeleteSyncLogic;
- (_Bool)canStartCgiNow;
- (void)checkIfServerOverLimitAndBackup;
- (void)dealloc;
- (void)goonRecover;
- (id)init;
- (void)internalGoonRecover;
- (_Bool)isRecoverEmoticonBeenPause;
- (_Bool)isRecoveringEmoticon;
- (_Bool)isRecoveringEmoticonComplete;
- (_Bool)isRecoveringEmoticonFromServer;
- (_Bool)isRecoveringEmoticonPause;
- (_Bool)isUserAllowOnRecover;
- (_Bool)isUserNoActionOnRecover;
- (_Bool)isUserPauseOnRecover;
@property(retain, nonatomic) EmoticonBackupLogicObject *m_backupLogicObject; // @synthesize m_backupLogicObject;
@property(nonatomic) _Bool m_hasNotStartRecoverTaskInList; // @synthesize m_hasNotStartRecoverTaskInList=_m_hasNotStartRecoverTaskInList;
@property(nonatomic) _Bool m_hasOnceStartRecover; // @synthesize m_hasOnceStartRecover;
@property(nonatomic) unsigned int m_lastManageViewUploadTime; // @synthesize m_lastManageViewUploadTime;
@property(retain, nonatomic) NSMutableArray *m_notifyTaskList; // @synthesize m_notifyTaskList;
@property(retain, nonatomic) EmoticonRecoverLogicObject *m_recoverLogicObject; // @synthesize m_recoverLogicObject;
@property(nonatomic) unsigned int m_userActionStatus; // @synthesize m_userActionStatus;
- (void)onAddSyncLogicBeginWithFullMd5List:(id)arg1;
- (void)onAuthOK;
- (void)onDeleteSyncLogicComplete;
- (void)onEmoticonBackupDeleteNotify;
- (void)onEmoticonBackupLogicFailed;
- (void)onEmoticonBackupLogicOk;
- (void)onEmoticonRecoverLogicAutoPauseOnWWan;
- (void)onEmoticonRecoverLogicDownloadOneEmoticonOK;
- (void)onEmoticonRecoverLogicFailed;
- (void)onEmoticonRecoverLogicOk;
- (void)onEmoticonRestartBackupWhenDeleteTaskExecute;
- (void)onPreQuit;
- (void)onSimCardNetTypeChange;
- (void)pauseRecover;
- (_Bool)recoverEmoticonFromServer;
- (void)runNotifyTask;
- (_Bool)shouldSpeedUpRecoverDonwload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

