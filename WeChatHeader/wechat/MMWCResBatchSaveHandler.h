//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMResBatchDownloadTask, MMWCResFileData, NSArray, NSString;

@interface MMWCResBatchSaveHandler : NSObject
{
    MMWCResFileData *_fileData;
    unsigned int _handlerId;
    _Bool _needCleanWebviewCacheAfterBatchSave;
    unsigned int _resType;
    unsigned int _resSubType;
    unsigned int _configCrc32;
    NSString *_mainDocumentUrl;
    NSString *_configUrl;
    NSString *_appId;
    NSString *_domain;
    NSString *_fileSubPath;
    NSArray *_resUrlInfoList;
    NSString *_packageId;
    MMResBatchDownloadTask *_downloadTask;
    id <MMResBatchSaveHandlerDelegate> _handlerDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int configCrc32; // @synthesize configCrc32=_configCrc32;
@property(retain, nonatomic) NSString *configUrl; // @synthesize configUrl=_configUrl;
- (void)dealloc;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) MMResBatchDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) NSString *fileSubPath; // @synthesize fileSubPath=_fileSubPath;
- (unsigned int)genHandlerId;
@property(nonatomic) __weak id <MMResBatchSaveHandlerDelegate> handlerDelegate; // @synthesize handlerDelegate=_handlerDelegate;
@property(readonly, nonatomic) unsigned int handlerId; // @synthesize handlerId=_handlerId;
- (id)initWithFileData:(id)arg1;
@property(retain, nonatomic) NSString *mainDocumentUrl; // @synthesize mainDocumentUrl=_mainDocumentUrl;
@property(nonatomic) _Bool needCleanWebviewCacheAfterBatchSave; // @synthesize needCleanWebviewCacheAfterBatchSave=_needCleanWebviewCacheAfterBatchSave;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId=_packageId;
@property(nonatomic) unsigned int resSubType; // @synthesize resSubType=_resSubType;
@property(nonatomic) unsigned int resType; // @synthesize resType=_resType;
@property(retain, nonatomic) NSArray *resUrlInfoList; // @synthesize resUrlInfoList=_resUrlInfoList;
- (void)startBatchSave;
- (id)updateConfigInfo;
- (void)updateConfigInfoWithoutNewRes;

@end
