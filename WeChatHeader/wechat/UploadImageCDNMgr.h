//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt.h"
#import "PBMessageObserverDelegate.h"

@class CdnTaskInfo, NSMutableArray, NSString;

@interface UploadImageCDNMgr : MMObject <ICdnComMgrExt, PBMessageObserverDelegate>
{
    NSMutableArray *m_arrQueue;
    CdnTaskInfo *m_oCurTaskInfo;
    id <UploadImageCDNMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)CheckQueue;
- (_Bool)CreateUploadEvent:(id)arg1;
- (unsigned int)GetUploadPercent:(id)arg1;
- (_Bool)IsUploading:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)StartUploadImage:(id)arg1;
- (void)StopCurUpload;
- (void)StopUploadImage:(id)arg1;
- (void)StopUploadImageByUsrName:(id)arg1;
- (void)UploadFail:(int)arg1;
- (void)UploadOk:(id)arg1;
- (void)UploadOkByCdn:(id)arg1;
- (void)dealloc;
- (id)init;
@property(nonatomic) __weak id <UploadImageCDNMgrDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CdnTaskInfo *m_oCurTaskInfo; // @synthesize m_oCurTaskInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

