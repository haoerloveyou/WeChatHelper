//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IContactMgrExt.h"
#import "IEnterpriseBrandContactMgrExt.h"
#import "IMMNewSessionMgrExt.h"
#import "IMsgExt.h"
#import "ISessionInfoExt.h"
#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface MMEnterpriseBrandSessionMgr : MMService <ISessionInfoExt, MMService, IMsgExt, IContactMgrExt, IMMNewSessionMgrExt, IEnterpriseBrandContactMgrExt>
{
    NSMutableDictionary *_dictMainUsr2SubSessionCacher;
}

- (void).cxx_destruct;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (void)addMainSession:(id)arg1 notify:(_Bool)arg2;
- (void)addSessionOfSubBrandContact:(id)arg1;
- (void)checkBrandOfMainUsrName:(id)arg1;
- (void)clearUnReadCountOfMainUsrName:(id)arg1;
- (void)clearUnReadCountOfSubUsrName:(id)arg1;
- (id)convertSessionInfoWithSubUsrName:(id)arg1;
- (void)dealloc;
- (void)deleteMainSession:(id)arg1;
- (void)deleteSessionListOfMainUsrName:(id)arg1;
- (void)deleteSessionOfSubUsrName:(id)arg1 mainUsrName:(id)arg2 clearMsg:(_Bool)arg3;
- (id)genMainFrameSessionInfo:(id)arg1;
- (id)getMainUsrName:(id)arg1;
- (id)getSubBrandSessionInfoOfLastMsg:(id)arg1;
- (_Bool)hasBrandSessionNewFlag:(id)arg1;
- (id)init;
- (_Bool)isExistRedDot:(id)arg1;
- (void)isMessage:(id)arg1 Handled:(_Bool *)arg2;
- (_Bool)isShowRedDotWithMainUsrName:(id)arg1;
- (void)isUser:(id)arg1 Handled:(_Bool *)arg2;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onEnterpriseBrandContactChanged:(id)arg1;
- (void)onEnterpriseBrandContactDeleted:(id)arg1;
- (void)onGetDraft:(id)arg1 draft:(id)arg2;
- (void)onModifyDraft:(id)arg1 draft:(id)arg2 draftTime:(unsigned int)arg3;
- (_Bool)onServiceMemoryWarning;
- (void)openEnterpriseNormalSubBrand:(id)arg1 navigationController:(id)arg2;
- (void)openEnterpriseWebSubBrand:(id)arg1 navigationController:(id)arg2;
- (void)openWebview:(id)arg1 inChatBrand:(id)arg2 inEnterpriseChat:(id)arg3 navigationController:(id)arg4;
- (void)resetBrandSessionNewFlag:(id)arg1;
- (void)resetBrandSessionNewFlag:(id)arg1 mainUserName:(id)arg2;
- (id)sessionCellDataWithMainUsrName:(id)arg1 atIndex:(long long)arg2;
- (unsigned int)sessionCountWithMainUsrName:(id)arg1;
- (id)sessionInfoWithMainUsrName:(id)arg1 atIndex:(long long)arg2;
- (id)sessionInfoWithSubUsrName:(id)arg1;
- (id)sessionInfoWithSubUsrName:(id)arg1 mainUsrName:(id)arg2;
- (unsigned int)sessionNewArrivalUnreadCountWithMainUsrName:(id)arg1;
- (unsigned int)sessionUnreadCountWithMainUsrName:(id)arg1;
- (void)setBrandSessionNewFlag:(id)arg1;
- (id)subSessionCacher:(id)arg1;
- (id)subSessionCacherWithSubUsrName:(id)arg1;
- (void)topSessionOfSubUsrName:(id)arg1;
- (void)updateMainSession:(id)arg1;
- (void)updateSessionOfSubUsrName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
