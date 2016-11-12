//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class CMessageWrap, WCDataItem, WCLanDeviceKissFileMsg, WCMediaItem;

@interface WCLanDeviceData : MMObject
{
    CMessageWrap *m_nsMsgWrap;
    WCDataItem *m_nsDataItem;
    unsigned long long m_nsScene;
    unsigned long long m_nsSource;
    WCMediaItem *m_nsMediaItem;
    WCLanDeviceKissFileMsg *m_nsFileInfo;
}

- (void).cxx_destruct;
- (id)dataId;
- (id)fileExt;
- (id)fileKissMsgWithDetail:(_Bool)arg1;
- (id)filePath;
- (id)imageKissMsg;
- (id)imagePath;
- (id)initWithMessageWrap:(id)arg1;
- (id)initWithTimeLineItem:(id)arg1 mediaItem:(id)arg2;
- (id)locationInfo;
@property(retain, nonatomic) WCDataItem *m_nsDataItem; // @synthesize m_nsDataItem;
@property(retain, nonatomic) WCLanDeviceKissFileMsg *m_nsFileInfo; // @synthesize m_nsFileInfo;
@property(retain, nonatomic) WCMediaItem *m_nsMediaItem; // @synthesize m_nsMediaItem;
@property(retain, nonatomic) CMessageWrap *m_nsMsgWrap; // @synthesize m_nsMsgWrap;
@property(nonatomic) unsigned long long m_nsScene; // @synthesize m_nsScene;
@property(nonatomic) unsigned long long m_nsSource; // @synthesize m_nsSource;
- (id)musicInfo;
- (long long)opObjType;
- (long long)opSource;
- (id)thumbPath;
- (id)urlInfo;

@end

