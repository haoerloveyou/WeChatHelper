//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSArray, NSMutableArray, NSString;

@interface WCDBRestoreInfos : NSObject <PBCoding>
{
    NSMutableArray *m_infos;
    unsigned int m_maxSeq;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)addInfo:(id)arg1 withRootPage:(unsigned int)arg2;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) NSArray *m_infos; // @synthesize m_infos;
@property(nonatomic) unsigned int m_maxSeq; // @synthesize m_maxSeq;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

