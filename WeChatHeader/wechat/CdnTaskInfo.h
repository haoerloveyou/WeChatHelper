//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, MassSendWrap, NSMutableDictionary, NSString;

@interface CdnTaskInfo : NSObject
{
    NSString *m_nsClientMsgID;
    CMessageWrap *m_wrapMsg;
    MassSendWrap *m_massWrapMsg;
    NSString *m_nsChatName;
    unsigned int m_uiThumbSize;
    _Bool m_bHD;
    unsigned int m_uiFinishedLen;
    unsigned int m_uiTotalLen;
    unsigned long long m_ui64StartTime;
    int m_nRetCode;
    _Bool m_bUpload;
    _Bool m_bThumb;
    NSString *m_nsCdnStatInfo;
    unsigned int m_uiOpType;
    NSString *m_nsMd5;
    _Bool m_bAutoDownload;
    _Bool _m_bDisableHitCheck;
    NSString *m_nsShareOriginUrl;
    NSString *m_nsShareOpenUrl;
    NSString *m_nsJsAppId;
    NSMutableDictionary *m_dicStatParas;
}

+ (unsigned int)GetStatNetworkType;
- (void).cxx_destruct;
- (id)GetStatInfo;
- (id)init;
@property(nonatomic) _Bool m_bAutoDownload; // @synthesize m_bAutoDownload;
@property(nonatomic) _Bool m_bDisableHitCheck; // @synthesize m_bDisableHitCheck=_m_bDisableHitCheck;
@property(nonatomic) _Bool m_bHD; // @synthesize m_bHD;
@property(nonatomic) _Bool m_bThumb; // @synthesize m_bThumb;
@property(nonatomic) _Bool m_bUpload; // @synthesize m_bUpload;
@property(retain, nonatomic) NSMutableDictionary *m_dicStatParas; // @synthesize m_dicStatParas;
@property(retain, nonatomic) MassSendWrap *m_massWrapMsg; // @synthesize m_massWrapMsg;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
@property(retain, nonatomic) NSString *m_nsCdnStatInfo; // @synthesize m_nsCdnStatInfo;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
@property(retain, nonatomic) NSString *m_nsJsAppId; // @synthesize m_nsJsAppId;
@property(retain, nonatomic) NSString *m_nsMd5; // @synthesize m_nsMd5;
@property(retain, nonatomic) NSString *m_nsShareOpenUrl; // @synthesize m_nsShareOpenUrl;
@property(retain, nonatomic) NSString *m_nsShareOriginUrl; // @synthesize m_nsShareOriginUrl;
@property(nonatomic) unsigned long long m_ui64StartTime; // @synthesize m_ui64StartTime;
@property(nonatomic) unsigned int m_uiFinishedLen; // @synthesize m_uiFinishedLen;
@property(nonatomic) unsigned int m_uiOpType; // @synthesize m_uiOpType;
@property(nonatomic) unsigned int m_uiThumbSize; // @synthesize m_uiThumbSize;
@property(nonatomic) unsigned int m_uiTotalLen; // @synthesize m_uiTotalLen;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;

@end

