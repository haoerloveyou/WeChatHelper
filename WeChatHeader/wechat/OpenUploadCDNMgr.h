//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt.h"
#import "MMAppAttachFileMgrExt.h"
#import "PBMessageObserverDelegate.h"

@class CdnTaskInfo, FIFOFileQueue, NSMutableArray, NSMutableDictionary, NSString;

@interface OpenUploadCDNMgr : MMObject <ICdnComMgrExt, PBMessageObserverDelegate, MMAppAttachFileMgrExt>
{
    FIFOFileQueue *_fileInfoQueue;
    NSMutableArray *m_arrDeletingItems;
    unsigned int _curEventId;
    CdnTaskInfo *_curTaskInfo;
    id <OpenUploadCDNMgrDelegate> m_delegate;
    NSMutableDictionary *_msgInfoDict;
    NSMutableDictionary *_bigFileUploadRespDict;
}

- (void).cxx_destruct;
- (void)CheckQueue;
- (void)ClearEventID;
- (_Bool)CreateCurUploadEvent:(_Bool)arg1 crc32:(unsigned int)arg2 useSafeCdn:(_Bool)arg3;
- (void)InitQueue;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)StartUpload:(id)arg1 MsgWrap:(id)arg2 Scene:(unsigned int)arg3;
- (void)StopCurUpload;
- (void)StopUpload:(id)arg1;
- (void)StopUploadByChatName:(id)arg1;
- (void)UploadFail:(int)arg1;
- (void)UploadOk:(long long)arg1 aeskey:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *bigFileUploadRespDict; // @synthesize bigFileUploadRespDict=_bigFileUploadRespDict;
- (void)checkBigFileUpload:(id)arg1 scene:(unsigned int)arg2;
- (void)checkIfAppAttachExistInSvr:(id)arg1;
- (void)dealloc;
- (id)init;
@property(nonatomic) __weak id <OpenUploadCDNMgrDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSMutableDictionary *msgInfoDict; // @synthesize msgInfoDict=_msgInfoDict;
- (void)onCheckAppAttachRet:(id)arg1 isExistInSvr:(_Bool)arg2 taskInfo:(id)arg3;
- (void)onCheckBigFileUploadResult:(_Bool)arg1 resp:(id)arg2 wrapMsg:(id)arg3 errMsg:(id)arg4;
- (void)startUploadAppAttach:(id)arg1;
- (void)startUploadAppAttach:(id)arg1 enableHitCheck:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
