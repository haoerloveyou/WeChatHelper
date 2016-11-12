//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSArray, NSString;

@interface GameCenterGiftEntrance : MMObject <PBCoding>
{
    NSString *entranceTitle;
    NSString *entranceDetail;
    NSString *entranceSummary;
    NSArray *arrIcons;
    NSString *openUrl;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrIcons; // @synthesize arrIcons;
@property(retain, nonatomic) NSString *entranceDetail; // @synthesize entranceDetail;
@property(retain, nonatomic) NSString *entranceSummary; // @synthesize entranceSummary;
@property(retain, nonatomic) NSString *entranceTitle; // @synthesize entranceTitle;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *openUrl; // @synthesize openUrl;
- (void)parseFromResp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

