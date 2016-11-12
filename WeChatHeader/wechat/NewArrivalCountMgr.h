//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"

@class NSString, NewArrivalCountData;

@interface NewArrivalCountMgr : MMService <MMService, IMsgExt>
{
    NewArrivalCountData *m_data;
}

- (void).cxx_destruct;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)callBottleExt;
- (void)callExt:(id)arg1;
- (void)callQQExt;
- (void)callSXExt;
- (_Bool)clearBottleNewArrivalCount:(id)arg1;
- (_Bool)clearQQNewArrivalCountByName:(id)arg1;
- (void)dealloc;
- (unsigned int)getBottleNewArrivalCount;
- (id)getBottleNewArrivalList;
- (id)getPath;
- (unsigned int)getQQNewArrivalCount;
- (id)getQQNewArrivalList;
- (unsigned int)getSXNewArrivalCount;
- (id)getSXNewArrivalList;
- (id)init;
- (void)lastMessageChange:(id)arg1 MsgWrap:(id)arg2;
- (void)lastMessageChange:(id)arg1 msgid:(unsigned int)arg2 msg:(id)arg3;
- (_Bool)loadData;
- (_Bool)zeroBottleNewArrivalCount;
- (_Bool)zeroQQNewArrivalCount;
- (void)zeroQQNewArrivalMsgItem;
- (_Bool)zeroSXNewArrivalCount;
- (void)zeroSXNewArrivalMsgItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

