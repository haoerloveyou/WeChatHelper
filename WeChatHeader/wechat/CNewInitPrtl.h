//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSyncBasePrtl.h"

@class NSData, NSObject<OS_dispatch_queue>, NSString;

@interface CNewInitPrtl : CSyncBasePrtl
{
    NSData *m_dtCurSyncBuffer;
    NSData *m_dtMaxSyncBuffer;
    NSString *m_nsUsrName;
    NSObject<OS_dispatch_queue> *m_worker;
}

- (void).cxx_destruct;
- (_Bool)HandleResp:(void *)arg1;
- (void)InitReq:(void *)arg1;
- (void)dealloc;
- (void)doParseCMD:(const SKSmartPickleStruct_73e5f6b0 *)arg1 dicMessageInfo:(id)arg2;
- (id)init;
@property(retain, nonatomic) NSData *m_dtCurSyncBuffer; // @synthesize m_dtCurSyncBuffer;
@property(retain, nonatomic) NSData *m_dtMaxSyncBuffer; // @synthesize m_dtMaxSyncBuffer;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *m_worker; // @synthesize m_worker;

@end

