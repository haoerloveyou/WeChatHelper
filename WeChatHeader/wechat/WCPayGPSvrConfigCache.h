//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCPayGPSvrConfigCache : NSObject <PBCoding>
{
    unsigned int aaMaxTotalNum;
    unsigned int aaMaxPayerNum;
    unsigned int aaMaxReceiverNum;
    unsigned long long aaMaxTotalAmount;
    unsigned long long aaMaxPerAmount;
}

+ (void)initialize;
@property(nonatomic) unsigned int aaMaxPayerNum; // @synthesize aaMaxPayerNum;
@property(nonatomic) unsigned long long aaMaxPerAmount; // @synthesize aaMaxPerAmount;
@property(nonatomic) unsigned int aaMaxReceiverNum; // @synthesize aaMaxReceiverNum;
@property(nonatomic) unsigned long long aaMaxTotalAmount; // @synthesize aaMaxTotalAmount;
@property(nonatomic) unsigned int aaMaxTotalNum; // @synthesize aaMaxTotalNum;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

