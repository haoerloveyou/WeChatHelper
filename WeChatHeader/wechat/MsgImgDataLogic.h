//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface MsgImgDataLogic : NSObject
{
    unsigned int m_uiPreID;
    unsigned int m_uiNextID;
    unsigned int m_uiPreCreateTime;
    unsigned int m_uiNextCreateTime;
    NSMutableArray *m_arrPreMsg;
    NSMutableArray *m_arrNextMsg;
    NSMutableArray *m_arrMsgWrap;
    NSMutableArray *m_arrSimpleMsg;
    NSString *m_nsChatName;
    unsigned int m_uiPreLoadCount;
    unsigned int m_uiPreReadCount;
    _Bool _m_bLoading;
    _Bool _m_bPreEnd;
    _Bool _m_bNextEnd;
    _Bool _m_isEnterpriseMsg;
    id <MsgImgDataLogicDelegate> _m_delegate;
}

- (void).cxx_destruct;
- (id)asyncLoadSomeImg:(_Bool)arg1;
- (unsigned int)getIndexFor:(id)arg1;
- (unsigned int)getIndexForSimpleMsg:(id)arg1;
- (id)getMsgArray;
- (id)getMsgFor:(unsigned int)arg1;
- (id)getNextCurMsg:(id)arg1;
- (id)getSimpleMsgArray;
- (id)getSimpleMsgFrom:(id)arg1;
- (id)initWithPreLoadCount:(unsigned int)arg1 PreReadCount:(unsigned int)arg2 ChatName:(id)arg3;
- (_Bool)isMsgMatch:(id)arg1;
@property(nonatomic) _Bool m_bLoading; // @synthesize m_bLoading=_m_bLoading;
@property(nonatomic) _Bool m_bNextEnd; // @synthesize m_bNextEnd=_m_bNextEnd;
@property(nonatomic) _Bool m_bPreEnd; // @synthesize m_bPreEnd=_m_bPreEnd;
@property(nonatomic) __weak id <MsgImgDataLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_isEnterpriseMsg; // @synthesize m_isEnterpriseMsg=_m_isEnterpriseMsg;
- (void)preLoad:(id)arg1 Last:(_Bool)arg2 Next:(_Bool)arg3;
- (void)removeMsgByLocalID:(unsigned int)arg1;
- (void)resetWithCurrentMsg:(id)arg1;
- (void)updateMsgArray;

@end

