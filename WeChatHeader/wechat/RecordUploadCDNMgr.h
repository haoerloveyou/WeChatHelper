//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt.h"
#import "PBMessageObserverDelegate.h"

@class CMessageWrap, CdnRecordMediaInfo, NSMutableArray, NSString;

@interface RecordUploadCDNMgr : MMObject <ICdnComMgrExt, PBMessageObserverDelegate>
{
    NSMutableArray *m_arrMsgWrap;
    NSMutableArray *m_arrRecordData;
    NSMutableArray *m_arrCDNUploadInfo;
    CMessageWrap *m_curMsgWrap;
    CdnRecordMediaInfo *m_curUploadMediaInfo;
    id <RecordUploadCDNMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)BatchTransCDNItem;
- (void)BatchTransCDNItemForMsgList;
- (void)CheckCDNUploadMsgQueue;
- (void)HandleBatchTransCDNResp:(id)arg1;
- (void)HandleCheckMd5Resp:(id)arg1;
- (void)HandleSendMsgResp:(id)arg1;
- (_Bool)IsRecordMsgUploading:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)RemoveMsgWrap:(id)arg1;
- (_Bool)SendCurAppMsg;
- (void)SendMsgFail;
- (void)SendMsgOK:(long long)arg1;
- (void)StartUploadRecordMsg:(id)arg1;
- (void)StopCurUpload;
- (void)StopUploadRecordMsg:(id)arg1;
- (void)StopUploadRecordMsgByUsername:(id)arg1;
- (void)TryNextMsgWrap;
- (void)UploadRecordData;
- (void)UploadRecordData:(_Bool)arg1;
- (void)checkMd5:(id)arg1;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) CMessageWrap *m_curMsgWrap; // @synthesize m_curMsgWrap;
@property(retain, nonatomic) CdnRecordMediaInfo *m_curUploadMediaInfo; // @synthesize m_curUploadMediaInfo;
@property(nonatomic) __weak id <RecordUploadCDNMgrDelegate> m_delegate; // @synthesize m_delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

