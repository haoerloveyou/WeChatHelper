//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, NSString;

@interface WCNewClickStatEventConfig : MMObject
{
    unsigned int eventID;
    unsigned int expireTime;
    unsigned int logid;
    NSString *eventName;
    double sampleRate;
    NSString *regType;
    NSArray *arrPageConfig;
    NSArray *arrSpecialPVPageConfig;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrPageConfig; // @synthesize arrPageConfig;
@property(retain, nonatomic) NSArray *arrSpecialPVPageConfig; // @synthesize arrSpecialPVPageConfig;
@property(nonatomic) unsigned int eventID; // @synthesize eventID;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int logid; // @synthesize logid;
@property(retain, nonatomic) NSString *regType; // @synthesize regType;
@property(nonatomic) double sampleRate; // @synthesize sampleRate;

@end

