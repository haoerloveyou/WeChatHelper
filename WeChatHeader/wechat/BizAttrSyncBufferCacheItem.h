//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSData, NSString;

@interface BizAttrSyncBufferCacheItem : MMObject <PBCoding>
{
    NSString *username;
    unsigned long long lastUpdateTime;
    NSData *syncBuf;
}

+ (void)initialize;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned long long lastUpdateTime; // @synthesize lastUpdateTime;
@property(retain, nonatomic) NSData *syncBuf; // @synthesize syncBuf;
@property(retain, nonatomic) NSString *username; // @synthesize username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

