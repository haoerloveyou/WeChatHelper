//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMPackageDownloadMgrExt.h"
#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface MMResPackageMgr : MMService <MMService, MMPackageDownloadMgrExt>
{
    NSMutableDictionary *m_resMap;
}

+ (_Bool)RenameResRoot;
- (void).cxx_destruct;
- (void)cancelResPackageDownload:(id)arg1;
- (_Bool)createDirIfNotExist:(id)arg1;
- (void)dealloc;
- (void)downloadResPackage:(id)arg1;
- (double)getResPackageSize:(id)arg1;
- (id)init;
- (_Bool)isResPackageReady:(id)arg1;
- (void)onPackageCancelFinish:(id)arg1;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageListUpdated:(id)arg1;
- (id)pathForResNamed:(id)arg1 withPID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

