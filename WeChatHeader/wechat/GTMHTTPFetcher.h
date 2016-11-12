//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSFileHandle, NSInputStream, NSMutableData, NSMutableDictionary, NSMutableURLRequest, NSOperationQueue, NSString, NSThread, NSTimer, NSURL, NSURLConnection, NSURLCredential, NSURLResponse;

@interface GTMHTTPFetcher : NSObject
{
    NSMutableURLRequest *request_;
    NSURLConnection *connection_;
    NSMutableData *downloadedData_;
    NSString *downloadPath_;
    NSString *temporaryDownloadPath_;
    NSFileHandle *downloadFileHandle_;
    unsigned long long downloadedLength_;
    NSURLCredential *credential_;
    NSURLCredential *proxyCredential_;
    NSData *postData_;
    NSInputStream *postStream_;
    NSMutableData *loggedStreamData_;
    NSURLResponse *response_;
    id <NSObject> delegate_;
    SEL finishedSel_;
    SEL sentDataSel_;
    SEL receivedDataSel_;
    CDUnknownBlockType completionBlock_;
    CDUnknownBlockType receivedDataBlock_;
    CDUnknownBlockType sentDataBlock_;
    CDUnknownBlockType retryBlock_;
    _Bool hasConnectionEnded_;
    _Bool isCancellingChallenge_;
    _Bool isStopNotificationNeeded_;
    _Bool shouldFetchInBackground_;
    unsigned long long backgroundTaskIdentifer_;
    id userData_;
    NSMutableDictionary *properties_;
    NSArray *runLoopModes_;
    NSOperationQueue *delegateQueue_;
    id <GTMHTTPFetchHistoryProtocol> fetchHistory_;
    long long cookieStorageMethod_;
    id <GTMCookieStorageProtocol> cookieStorage_;
    id <GTMFetcherAuthorizationProtocol> authorizer_;
    id <GTMHTTPFetcherServiceProtocol> service_;
    NSString *serviceHost_;
    long long servicePriority_;
    NSThread *thread_;
    _Bool isRetryEnabled_;
    SEL retrySel_;
    NSTimer *retryTimer_;
    unsigned long long retryCount_;
    double maxRetryInterval_;
    double minRetryInterval_;
    double retryFactor_;
    double lastRetryInterval_;
    _Bool hasAttemptedAuthRefresh_;
    NSString *comment_;
    NSString *log_;
    NSURL *redirectedFromURL_;
    NSString *logRequestBody_;
    NSString *logResponseBody_;
    _Bool shouldDeferResponseBodyLogging_;
}

+ (Class)connectionClass;
+ (_Bool)doesSupportSentDataCallback;
+ (id)fetcherWithRequest:(id)arg1;
+ (id)fetcherWithURL:(id)arg1;
+ (id)fetcherWithURLString:(id)arg1;
+ (void)initialize;
+ (void)setConnectionClass:(Class)arg1;
+ (id)staticCookieStorage;
- (void)addCookiesToRequest:(id)arg1;
- (void)addPropertiesFromDictionary:(id)arg1;
- (_Bool)authorizeRequest;
@property(retain) id <GTMFetcherAuthorizationProtocol> authorizer; // @synthesize authorizer=authorizer_;
- (void)authorizer:(id)arg1 request:(id)arg2 finishedWithError:(id)arg3;
- (void)backgroundFetchExpired;
- (_Bool)beginFetchMayDelay:(_Bool)arg1 mayAuthorize:(_Bool)arg2;
- (_Bool)beginFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)beginFetchWithDelegate:(id)arg1 didFinishSelector:(SEL)arg2;
- (void)beginRetryTimer;
- (id)cachedDataForStatus;
@property(copy) NSString *comment; // @synthesize comment=comment_;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=completionBlock_;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
@property(retain) id <GTMCookieStorageProtocol> cookieStorage; // @synthesize cookieStorage=cookieStorage_;
@property long long cookieStorageMethod; // @dynamic cookieStorageMethod;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createTempDownloadFilePathForPath:(id)arg1;
@property(retain) NSURLCredential *credential; // @synthesize credential=credential_;
- (void)dealloc;
@property id delegate;
@property(retain) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=delegateQueue_;
- (id)description;
- (void)destroyRetryTimer;
@property(retain) NSFileHandle *downloadFileHandle; // @synthesize downloadFileHandle=downloadFileHandle_;
@property(copy) NSString *downloadPath; // @synthesize downloadPath=downloadPath_;
@property(retain) NSData *downloadedData; // @synthesize downloadedData=downloadedData_;
@property(readonly) unsigned long long downloadedLength; // @synthesize downloadedLength=downloadedLength_;
- (void)endBackgroundTask;
- (void)failToBeginFetchDeferWithError:(id)arg1;
- (void)failToBeginFetchWithError:(id)arg1;
@property(retain) id <GTMHTTPFetchHistoryProtocol> fetchHistory; // @dynamic fetchHistory;
- (void)handleCookiesForResponse:(id)arg1;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (void)invokeFetchCallback:(SEL)arg1 target:(id)arg2 data:(id)arg3 error:(id)arg4;
- (void)invokeFetchCallbacksOnDelegateQueueWithData:(id)arg1 error:(id)arg2;
- (void)invokeFetchCallbacksWithData:(id)arg1 error:(id)arg2;
- (void)invokeOnQueueWithDictionary:(id)arg1;
- (_Bool)invokeRetryCallback:(SEL)arg1 target:(id)arg2 willRetry:(_Bool)arg3 error:(id)arg4;
- (void)invokeSentDataCallback:(SEL)arg1 target:(id)arg2 didSendBodyData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (_Bool)isFetching;
@property(getter=isRetryEnabled) _Bool retryEnabled; // @dynamic retryEnabled;
- (_Bool)isRetryError:(id)arg1;
@property(copy) NSString *log; // @synthesize log=log_;
- (void)logNowWithError:(id)arg1;
@property double maxRetryInterval; // @dynamic maxRetryInterval;
@property double minRetryInterval; // @dynamic minRetryInterval;
@property(retain) NSMutableURLRequest *mutableRequest; // @synthesize mutableRequest=request_;
@property(readonly) double nextRetryInterval; // @dynamic nextRetryInterval;
@property(retain) NSData *postData; // @synthesize postData=postData_;
@property(retain) NSInputStream *postStream; // @synthesize postStream=postStream_;
- (void)primeRetryTimerWithNewTimeInterval:(double)arg1;
@property(copy) NSMutableDictionary *properties; // @dynamic properties;
- (id)propertyForKey:(id)arg1;
@property(retain) NSURLCredential *proxyCredential; // @synthesize proxyCredential=proxyCredential_;
@property(copy) CDUnknownBlockType receivedDataBlock; // @synthesize receivedDataBlock=receivedDataBlock_;
@property SEL receivedDataSelector; // @synthesize receivedDataSelector=receivedDataSel_;
- (void)releaseCallbacks;
@property(retain) NSURLResponse *response; // @synthesize response=response_;
@property(readonly, retain) NSDictionary *responseHeaders; // @dynamic responseHeaders;
@property(copy) CDUnknownBlockType retryBlock; // @synthesize retryBlock=retryBlock_;
@property(readonly) unsigned long long retryCount; // @dynamic retryCount;
@property double retryFactor; // @synthesize retryFactor=retryFactor_;
- (void)retryFetch;
@property SEL retrySelector; // @synthesize retrySelector=retrySel_;
- (void)retryTimerFired:(id)arg1;
@property(retain) NSArray *runLoopModes; // @synthesize runLoopModes=runLoopModes_;
- (void)sendStopNotificationIfNeeded;
@property(copy) CDUnknownBlockType sentDataBlock; // @synthesize sentDataBlock=sentDataBlock_;
@property SEL sentDataSelector; // @synthesize sentDataSelector=sentDataSel_;
@property(retain) id <GTMHTTPFetcherServiceProtocol> service; // @synthesize service=service_;
@property(copy) NSString *serviceHost; // @synthesize serviceHost=serviceHost_;
@property long long servicePriority; // @synthesize servicePriority=servicePriority_;
- (void)setCommentWithFormat:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
@property _Bool shouldFetchInBackground; // @synthesize shouldFetchInBackground=shouldFetchInBackground_;
@property(copy) NSString *temporaryDownloadPath; // @synthesize temporaryDownloadPath=temporaryDownloadPath_;
@property(retain) NSThread *thread; // @synthesize thread=thread_;
@property(retain) id userData; // @dynamic userData;
- (_Bool)shouldReleaseCallbacksUponCompletion;
- (_Bool)shouldRetryNowForStatus:(long long)arg1 error:(id)arg2;
- (long long)statusAfterHandlingNotModifiedError;
@property(readonly) long long statusCode; // @dynamic statusCode;
- (void)stopFetchReleasingCallbacks:(_Bool)arg1;
- (void)stopFetching;
- (void)waitForCompletionWithTimeout:(double)arg1;

@end

