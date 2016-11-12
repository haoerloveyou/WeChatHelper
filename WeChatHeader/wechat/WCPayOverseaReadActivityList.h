//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableSet, NSString;

@interface WCPayOverseaReadActivityList : NSObject <PBCoding>
{
    unsigned int _m_tpaCountry;
    NSMutableSet *m_set;
}

+ (id)cacheObjectWithTpaCountry:(unsigned int)arg1;
+ (void)checkFileWithTpaCountry:(unsigned int)arg1;
+ (id)getSavePathWithTpaCountry:(unsigned int)arg1;
+ (id)getSaveRootDir;
+ (void)initialize;
- (void).cxx_destruct;
- (void)addReadActivityId:(id)arg1;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (_Bool)hasReadActivityId:(id)arg1;
@property(retain, nonatomic) NSMutableSet *m_set; // @synthesize m_set;
@property(nonatomic) unsigned int m_tpaCountry; // @synthesize m_tpaCountry=_m_tpaCountry;
- (void)saveToCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

