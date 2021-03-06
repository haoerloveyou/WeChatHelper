//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableArray, NSMutableDictionary, NSString, WAReportOuterMenuActionItem;

@interface WAWebViewReportStatMgr : MMService <MMService>
{
    NSMutableDictionary *m_menuActionTimestampDict;
    NSMutableDictionary *m_outActionTimestampDict;
    NSMutableDictionary *m_apiActionDict;
    NSMutableArray *m_mutiSelectMsgList;
    unsigned long long m_stayTime;
    unsigned long long m_costTime;
    unsigned int m_nsLastClickTimeStamp;
    WAReportOuterMenuActionItem *m_mutiSelectBaseItem;
    unsigned long long m_nsLastClickTimeInMs;
}

- (void).cxx_destruct;
- (void)getJSApiEventAction:(unsigned int)arg1 withActionItem:(id)arg2;
- (id)init;
@property(retain, nonatomic) WAReportOuterMenuActionItem *m_mutiSelectBaseItem; // @synthesize m_mutiSelectBaseItem;
@property(nonatomic) unsigned long long m_nsLastClickTimeInMs; // @synthesize m_nsLastClickTimeInMs;
@property(nonatomic) unsigned int m_nsLastClickTimeStamp; // @synthesize m_nsLastClickTimeStamp;
- (id)menuActionItemFromMgr:(unsigned long long)arg1;
- (void)onClick;
- (void)onEnterNewPage;
- (void)onWebPageIndexFinish;
- (id)outActionItemFromMgr:(unsigned long long)arg1;
- (unsigned long long)pageIndexCostTime;
- (unsigned long long)pageStayTime;
- (void)registOutMenuAction:(id)arg1;
- (void)registOutMenuActionOnMutiSelectMsgArray:(id)arg1;
- (void)registWebMenuAction:(unsigned long long)arg1;
- (void)registerJSApiAction:(id)arg1 callid:(unsigned int)arg2;
- (void)reportOutMenuActionOnMutiSelectMsgResult:(unsigned long long)arg1 contacts:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

