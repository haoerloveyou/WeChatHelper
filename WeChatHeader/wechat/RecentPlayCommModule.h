//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface RecentPlayCommModule : MMObject <PBCoding>
{
    _Bool needCrown;
    unsigned int positionId;
    NSString *moduleTitle;
    NSString *title;
    NSString *desc;
    NSString *picUrl;
    unsigned long long picType;
    NSString *jumpUrl;
    NSString *externInfo;
    NSString *coverPicUrl;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *coverPicUrl; // @synthesize coverPicUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *externInfo; // @synthesize externInfo;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl;
@property(retain, nonatomic) NSString *moduleTitle; // @synthesize moduleTitle;
@property(nonatomic) _Bool needCrown; // @synthesize needCrown;
- (void)parse:(id)arg1;
@property(nonatomic) unsigned long long picType; // @synthesize picType;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl;
@property(nonatomic) unsigned int positionId; // @synthesize positionId;
@property(retain, nonatomic) NSString *title; // @synthesize title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

