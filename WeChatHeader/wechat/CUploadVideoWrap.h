//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface CUploadVideoWrap : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFromUsrName;
    NSString *m_nsToUsrName;
    unsigned int m_uiLocalID;
    long long m_n64SvrID;
    unsigned int m_uiThumbTotalLen;
    unsigned int m_uiThumbStartPos;
    NSData *m_dtThumb;
    unsigned int m_uiVideoTotalLen;
    unsigned int m_uiVideoStartPos;
    unsigned int m_uiVideoTime;
    NSData *m_dtVideo;
    unsigned int m_uiCameraType;
    unsigned int m_uiNetwork;
    unsigned int m_uiVideoSource;
    unsigned int m_uiEncrypVer;
    NSString *m_nsAesKey;
    NSString *m_nsVideoUrl;
    NSString *m_nsVideoThumbUrl;
    NSString *m_nsThumbAesKey;
    unsigned int m_uiVideoThumbSize;
    unsigned int m_uiVideoThumbWidth;
    unsigned int m_uiVideoThumbHeight;
    NSString *m_nsMsgSource;
    NSString *m_nsMd5;
    NSString *m_nsStreamVideoUrl;
    NSString *m_nsStreamVideoTitle;
    NSString *m_nsStreamVideoWording;
    NSString *m_nsStreamVideoWebUrl;
    unsigned int m_uiStreamVideoTime;
    NSString *m_nsStreamVideoThumbUrl;
    NSString *m_nsStreamVideoPublishId;
    NSString *m_nsStreamVideoAdUxInfo;
    NSString *m_nsStatExtStr;
    _Bool _m_bHitMd5;
    _Bool _m_bUseSafeCdn;
    unsigned int _m_uiCrc32;
    unsigned int _m_forwardType;
    NSString *_m_nsNewMd5;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;
@property(nonatomic) _Bool m_bHitMd5; // @synthesize m_bHitMd5=_m_bHitMd5;
@property(nonatomic) _Bool m_bUseSafeCdn; // @synthesize m_bUseSafeCdn=_m_bUseSafeCdn;
@property(retain, nonatomic) NSData *m_dtThumb; // @synthesize m_dtThumb;
@property(retain, nonatomic) NSData *m_dtVideo; // @synthesize m_dtVideo;
@property(nonatomic) unsigned int m_forwardType; // @synthesize m_forwardType=_m_forwardType;
@property(nonatomic) long long m_n64SvrID; // @synthesize m_n64SvrID;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
@property(retain, nonatomic) NSString *m_nsFromUsrName; // @synthesize m_nsFromUsrName;
@property(retain, nonatomic) NSString *m_nsMd5; // @synthesize m_nsMd5;
@property(retain, nonatomic) NSString *m_nsMsgSource; // @synthesize m_nsMsgSource;
@property(retain, nonatomic) NSString *m_nsNewMd5; // @synthesize m_nsNewMd5=_m_nsNewMd5;
@property(retain, nonatomic) NSString *m_nsStatExtStr; // @synthesize m_nsStatExtStr;
@property(retain, nonatomic) NSString *m_nsStreamVideoAdUxInfo; // @synthesize m_nsStreamVideoAdUxInfo;
@property(retain, nonatomic) NSString *m_nsStreamVideoPublishId; // @synthesize m_nsStreamVideoPublishId;
@property(retain, nonatomic) NSString *m_nsStreamVideoThumbUrl; // @synthesize m_nsStreamVideoThumbUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoTitle; // @synthesize m_nsStreamVideoTitle;
@property(retain, nonatomic) NSString *m_nsStreamVideoUrl; // @synthesize m_nsStreamVideoUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWebUrl; // @synthesize m_nsStreamVideoWebUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWording; // @synthesize m_nsStreamVideoWording;
@property(retain, nonatomic) NSString *m_nsThumbAesKey; // @synthesize m_nsThumbAesKey;
@property(retain, nonatomic) NSString *m_nsToUsrName; // @synthesize m_nsToUsrName;
@property(retain, nonatomic) NSString *m_nsVideoThumbUrl; // @synthesize m_nsVideoThumbUrl;
@property(retain, nonatomic) NSString *m_nsVideoUrl; // @synthesize m_nsVideoUrl;
@property(nonatomic) unsigned int m_uiCameraType; // @synthesize m_uiCameraType;
@property(nonatomic) unsigned int m_uiCrc32; // @synthesize m_uiCrc32=_m_uiCrc32;
@property(nonatomic) unsigned int m_uiEncrypVer; // @synthesize m_uiEncrypVer;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
@property(nonatomic) unsigned int m_uiNetwork; // @synthesize m_uiNetwork;
@property(nonatomic) unsigned int m_uiStreamVideoTime; // @synthesize m_uiStreamVideoTime;
@property(nonatomic) unsigned int m_uiThumbStartPos; // @synthesize m_uiThumbStartPos;
@property(nonatomic) unsigned int m_uiThumbTotalLen; // @synthesize m_uiThumbTotalLen;
@property(nonatomic) unsigned int m_uiVideoSource; // @synthesize m_uiVideoSource;
@property(nonatomic) unsigned int m_uiVideoStartPos; // @synthesize m_uiVideoStartPos;
@property(nonatomic) unsigned int m_uiVideoThumbHeight; // @synthesize m_uiVideoThumbHeight;
@property(nonatomic) unsigned int m_uiVideoThumbSize; // @synthesize m_uiVideoThumbSize;
@property(nonatomic) unsigned int m_uiVideoThumbWidth; // @synthesize m_uiVideoThumbWidth;
@property(nonatomic) unsigned int m_uiVideoTime; // @synthesize m_uiVideoTime;
@property(nonatomic) unsigned int m_uiVideoTotalLen; // @synthesize m_uiVideoTotalLen;

@end

