//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCDBConfigCorrupt : NSObject
{
    _Bool m_checkFirstPageIntegrity;
    _Bool m_checkAllPageIntegrity;
    _Bool m_checkMMRogueFd;
    _Bool m_checkReadIntegrity;
    _Bool m_robustCheckpoint;
    _Bool m_checkCheckpointMem;
}

+ (void)initialize;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) _Bool m_checkAllPageIntegrity; // @synthesize m_checkAllPageIntegrity;
@property(nonatomic) _Bool m_checkCheckpointMem; // @synthesize m_checkCheckpointMem;
@property(nonatomic) _Bool m_checkFirstPageIntegrity; // @synthesize m_checkFirstPageIntegrity;
@property(nonatomic) _Bool m_checkMMRogueFd; // @synthesize m_checkMMRogueFd;
@property(nonatomic) _Bool m_checkReadIntegrity; // @synthesize m_checkReadIntegrity;
@property(nonatomic) _Bool m_robustCheckpoint; // @synthesize m_robustCheckpoint;

@end

