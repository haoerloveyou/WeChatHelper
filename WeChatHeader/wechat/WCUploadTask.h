//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, SnsObject, UserOpInfo, WCActionInfo, WCAppInfo, WCDataItem, WCLocationInfo, WCMusicInfo, WCStreamVideoInfo, WCWeAppInfo;

@interface WCUploadTask : NSObject <NSCoding>
{
    NSString *serverID;
    NSString *clientID;
    int type;
    _Bool isPrivate;
    NSMutableArray *sharedGroupIDs;
    _Bool isSyncToWeibo;
    _Bool isSyncToFacebook;
    _Bool isSyncToTwitter;
    _Bool isSyncToQZone;
    NSString *statisticsData;
    WCLocationInfo *locationInfo;
    NSString *linkUrl;
    NSString *title;
    NSString *desc;
    NSString *contentDesc;
    int contentDescShowType;
    int contentDescScene;
    unsigned int contentAttributeBitSetFlag;
    WCAppInfo *appInfo;
    WCActionInfo *actionInfo;
    WCMusicInfo *musicInfo;
    WCStreamVideoInfo *streaVideoInfo;
    WCWeAppInfo *weappInfo;
    NSString *sourceUserName;
    NSString *sourceNickName;
    NSMutableArray *groupUserList;
    NSMutableArray *blackUserList;
    NSMutableArray *withUserList;
    NSMutableArray *mediaList;
    SnsObject *snsObj;
    WCDataItem *dataItem;
    NSDate *createTime;
    int uploadResult;
    int BGImgSetType;
    _Bool isUploadFailed;
    int postSource;
    NSString *twitterOAuthToken;
    NSString *twitterOAuthTokenSecret;
    _Bool isDeleted;
    UserOpInfo *opInfo;
    WCStreamVideoInfo *streamVideoInfo;
    NSString *shareOriginUrl;
    NSString *shareOpenUrl;
    NSString *jsAppId;
    NSMutableDictionary *statParasDic;
    NSString *statExtStr;
    NSString *canvasInfoXml;
    unsigned long long _tempUserCount;
    unsigned long long _contactTagCount;
}

+ (id)genUploadTaskForSight:(id)arg1 andThumbPath:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int BGImgSetType; // @synthesize BGImgSetType;
@property(retain, nonatomic) WCActionInfo *actionInfo; // @synthesize actionInfo;
- (void)addThumbForPrevMedia:(id)arg1;
@property(retain, nonatomic) WCAppInfo *appInfo; // @synthesize appInfo;
@property(retain, nonatomic) NSMutableArray *blackUserList; // @synthesize blackUserList;
@property(retain, nonatomic) NSString *canvasInfoXml; // @synthesize canvasInfoXml;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;
@property(nonatomic) unsigned long long contactTagCount; // @synthesize contactTagCount=_contactTagCount;
@property(nonatomic) unsigned int contentAttributeBitSetFlag; // @synthesize contentAttributeBitSetFlag;
@property(retain, nonatomic) NSString *contentDesc; // @synthesize contentDesc;
@property(nonatomic) int contentDescScene; // @synthesize contentDescScene;
@property(nonatomic) int contentDescShowType; // @synthesize contentDescShowType;
@property(retain, nonatomic) NSDate *createTime; // @synthesize createTime;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSMutableArray *groupUserList; // @synthesize groupUserList;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted;
- (_Bool)isLocationValide;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate;
@property(nonatomic) _Bool isSyncToFacebook; // @synthesize isSyncToFacebook;
@property(nonatomic) _Bool isSyncToQZone; // @synthesize isSyncToQZone;
@property(nonatomic) _Bool isSyncToTwitter; // @synthesize isSyncToTwitter;
@property(nonatomic) _Bool isSyncToWeibo; // @synthesize isSyncToWeibo;
@property(nonatomic) _Bool isUploadFailed; // @synthesize isUploadFailed;
@property(retain, nonatomic) NSString *jsAppId; // @synthesize jsAppId;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo;
@property(retain, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList;
@property(retain, nonatomic) WCMusicInfo *musicInfo; // @synthesize musicInfo;
@property(retain, nonatomic) UserOpInfo *opInfo; // @synthesize opInfo;
@property(nonatomic) int postSource; // @synthesize postSource;
@property(retain, nonatomic) NSString *serverID; // @synthesize serverID;
- (void)setDeleted;
- (void)setOriginal:(_Bool)arg1;
@property(retain, nonatomic) NSString *shareOpenUrl; // @synthesize shareOpenUrl;
@property(retain, nonatomic) NSString *shareOriginUrl; // @synthesize shareOriginUrl;
@property(retain, nonatomic) NSMutableArray *sharedGroupIDs; // @synthesize sharedGroupIDs;
@property(retain, nonatomic) SnsObject *snsObj; // @synthesize snsObj;
@property(retain, nonatomic) NSString *sourceNickName; // @synthesize sourceNickName;
@property(retain, nonatomic) NSString *sourceUserName; // @synthesize sourceUserName;
@property(retain, nonatomic) NSString *statExtStr; // @synthesize statExtStr;
@property(retain, nonatomic) NSMutableDictionary *statParasDic; // @synthesize statParasDic;
@property(retain, nonatomic) NSString *statisticsData; // @synthesize statisticsData;
@property(retain, nonatomic) WCStreamVideoInfo *streamVideoInfo; // @synthesize streamVideoInfo;
@property(nonatomic) unsigned long long tempUserCount; // @synthesize tempUserCount=_tempUserCount;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *twitterOAuthToken; // @synthesize twitterOAuthToken;
@property(retain, nonatomic) NSString *twitterOAuthTokenSecret; // @synthesize twitterOAuthTokenSecret;
@property(nonatomic) int type; // @synthesize type;
- (void)setUploadFailedStatus:(_Bool)arg1;
@property(nonatomic) int uploadResult; // @synthesize uploadResult;
@property(retain, nonatomic) WCWeAppInfo *weappInfo; // @synthesize weappInfo;
@property(retain, nonatomic) NSMutableArray *withUserList; // @synthesize withUserList;

@end

