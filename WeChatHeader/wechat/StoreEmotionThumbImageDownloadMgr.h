//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ImageDownloadLoaderDelegate.h"
#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface StoreEmotionThumbImageDownloadMgr : MMService <ImageDownloadLoaderDelegate, MMService>
{
    NSMutableDictionary *m_downloadTaskListDic;
}

- (void).cxx_destruct;
- (void)downloadImgUrlStr:(id)arg1 toPath:(id)arg2;
- (void)onDownloadFinishedWithLoader:(id)arg1 AndData:(id)arg2;
- (void)preDownloadImgUrlStr:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

