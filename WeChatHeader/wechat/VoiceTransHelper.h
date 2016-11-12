//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IVoiceTransExt.h"
#import "PBMessageObserverDelegate.h"

@class CMessageWrap, MMTimer, NSString, WebviewLocalResItem;

@interface VoiceTransHelper : MMObject <IVoiceTransExt, PBMessageObserverDelegate>
{
    CMessageWrap *m_msgWrap;
    NSString *m_nsVoiceID;
    unsigned int m_uNotifyId;
    unsigned int m_iCurVoiceResultSeq;
    WebviewLocalResItem *m_webViewItem;
    unsigned int m_uiScene;
    NSString *m_nsVoicePath;
    NSString *m_nsVoiceTransPath;
    unsigned int m_uNetGetInterval;
    _Bool m_bNeedGetResult;
    _Bool m_bIsGetting;
    unsigned int m_uTotalLen;
    unsigned int m_uStartPos;
    unsigned int m_uDataLen;
    unsigned int m_uUploadFailTimes;
    unsigned int m_uSampleRateForSilk;
    MMTimer *m_getTimer;
    id <VoiceTransDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)GetVoiceTrans;
- (void)HandleCheckVoiceResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleGetVoiceTransResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleUploadVoiceResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnVoiceTransNotify:(unsigned int)arg1 Sequence:(unsigned int)arg2;
- (void)TimeToGetVoieceTrans;
- (void)UploadVoice;
- (void)dealloc;
- (void)doCheckVoice;
- (id)initWithVoiceMsg:(id)arg1 VoiceID:(id)arg2;
- (id)initWithWebviewLocalResItem:(id)arg1 VoiceID:(id)arg2;
@property(nonatomic) __weak id <VoiceTransDelegate> m_delegate; // @synthesize m_delegate;
- (void)saveVoiceTrans:(id)arg1;
- (void)startGetTimer;
- (void)startVoiceTrans;
- (void)startWebviewVoiceTrans;
- (void)stopTimer;
- (void)stopVoiceTrans;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

