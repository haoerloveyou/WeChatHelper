//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MMDBRAssistConfig : NSObject <PBCoding>
{
    unsigned int m_lastSuccTime;
    unsigned int m_lastCancelTime;
    unsigned int m_cancelTimes;
}

+ (void)initialize;
@property(readonly, copy) NSString *description;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int m_cancelTimes; // @synthesize m_cancelTimes;
@property(nonatomic) unsigned int m_lastCancelTime; // @synthesize m_lastCancelTime;
@property(nonatomic) unsigned int m_lastSuccTime; // @synthesize m_lastSuccTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

