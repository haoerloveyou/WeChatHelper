//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSArray, NSString, RecentPlayMoreData;

@interface RecentPlayInfoData : MMObject <PBCoding>
{
    NSString *moduleTitle;
    NSString *launchPrivilegeTitle;
    NSString *launchPrivilegeJumpUrl;
    NSArray *gameList;
    RecentPlayMoreData *more;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *gameList; // @synthesize gameList;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *launchPrivilegeJumpUrl; // @synthesize launchPrivilegeJumpUrl;
@property(retain, nonatomic) NSString *launchPrivilegeTitle; // @synthesize launchPrivilegeTitle;
@property(retain, nonatomic) NSString *moduleTitle; // @synthesize moduleTitle;
@property(retain, nonatomic) RecentPlayMoreData *more; // @synthesize more;
- (void)parse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

