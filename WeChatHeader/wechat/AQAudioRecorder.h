//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseAudioRecorder.h"

@interface AQAudioRecorder : BaseAudioRecorder
{
    _Bool mIsNeedRestartMusic;
    _Bool mIsNeedRestartAudioTalk;
    _Bool mIsShakeTv;
    _Bool mDisableWritingToFile;
    float _pcmSampleRate;
    unsigned long long _firstTimeStamp;
}

- (void)autostop;
- (_Bool)canAutoRestart;
- (void)createAudioFile_CAF:(id)arg1;
- (void)createAudioFile_WAVE:(id)arg1 Fd:(struct OpaqueAudioFileID **)arg2;
- (void)createQAFPFile:(id)arg1;
- (void)createWaveFile:(id)arg1;
@property(nonatomic) _Bool disableWritingToFile; // @synthesize disableWritingToFile=mDisableWritingToFile;
- (void)extractAudioFingerPrintData:(char *)arg1 Length:(int)arg2;
@property(nonatomic) unsigned long long firstTimeStamp; // @synthesize firstTimeStamp=_firstTimeStamp;
- (void)getAudioFingerPrintData:(char *)arg1 Length:(int *)arg2 UserData:(id *)arg3;
- (id)init;
@property(nonatomic) _Bool isShakeTv; // @synthesize isShakeTv=mIsShakeTv;
@property(nonatomic) _Bool needRestartAudioTalk; // @synthesize needRestartAudioTalk=mIsNeedRestartAudioTalk;
@property(nonatomic) _Bool needRestartMusic; // @synthesize needRestartMusic=mIsNeedRestartMusic;
@property(nonatomic) float pcmSampleRate; // @synthesize pcmSampleRate=_pcmSampleRate;
- (void)prepareBuffers;
- (_Bool)prepareRecordForQAFP;
- (_Bool)prepareRecordForQAFP_HD;
- (_Bool)prepareRecordForQAFP_Impl;
- (_Bool)prepareRecordWithPCMFile:(id)arg1;
- (_Bool)prepareRecordWithiLBCFile:(id)arg1;
- (void)record;
- (void)setDataFormat_PCM;
- (void)setDataFormat_iLBC;
- (void)setDelegate:(id)arg1;
- (void)setMagicCookieToAudioFile:(struct OpaqueAudioFileID *)arg1;
- (_Bool)shouldAutoRestartWith:(int)arg1;
- (void)stop;

@end

