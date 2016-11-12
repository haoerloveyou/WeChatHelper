//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionTaskDelegate.h"
#import "WAUploadFileTaskDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURLSession, WAUploadFileConfig;

@interface WAUploadFileHandler : NSObject <WAUploadFileTaskDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSString *_appID;
    NSObject<OS_dispatch_queue> *_workerQueue;
    WAUploadFileConfig *_uploadFileConfig;
    NSMutableArray *_arrUploadTask;
    NSURLSession *_urlSession;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)cancelAndDeleteAllTask;
- (void)dealloc;
- (void)deleteTask:(id)arg1;
- (id)getNewUploadTask;
- (id)getUploadTaskWithTask:(id)arg1;
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 workerQueue:(id)arg3;
- (void)invalidate;
- (_Bool)isExceedMaxTaskCount;
- (unsigned int)maxTaskCount;
- (void)setupNSURLSession;
- (void)startUploadTaskWithURL:(id)arg1 localID:(id)arg2 fileFieldName:(id)arg3 httpHeaders:(id)arg4 formFields:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)uploadFileTaskDidEnd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

