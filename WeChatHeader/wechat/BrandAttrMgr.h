//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMConfigMgrExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class BizAttrSyncCtrl, NSMutableDictionary, NSString;

@interface BrandAttrMgr : MMService <MMService, PBMessageObserverDelegate, IMsgExt, MMConfigMgrExt>
{
    NSMutableDictionary *_syncBufList;
    BizAttrSyncCtrl *_syncCtrl;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)dealloc;
- (_Bool)getBrandInfoByNewAttrCGI:(id)arg1;
- (void)loadBufCache;
- (void)loadCtrlInfo;
- (unsigned long long)loadRequestIntervalFromDynamicConfig;
- (void)onGetContactByNewAttrCGI:(id)arg1;
- (void)onMMDynamicConfigUpdated;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)resetSyncBuf:(id)arg1;
- (void)saveBufCache;
- (void)saveCtrlInfo;
@property(retain, nonatomic) NSMutableDictionary *syncBufList; // @synthesize syncBufList=_syncBufList;
@property(retain, nonatomic) BizAttrSyncCtrl *syncCtrl; // @synthesize syncCtrl=_syncCtrl;
- (_Bool)shouldUseNewAttrCGIToUpdate:(id)arg1;
- (void)updateBrandContact:(id)arg1 withSyncBuf:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

