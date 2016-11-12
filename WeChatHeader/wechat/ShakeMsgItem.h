//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface ShakeMsgItem : MMObject <PBCoding>
{
    _Bool bIsRead;
    unsigned int uiType;
    unsigned int uiCreateTime;
    unsigned long long ui64SvrMsgId;
    NSString *nsThumbUrl;
    NSString *nsTitle;
    NSString *nsDesc;
    NSString *nsJumpLink;
    NSString *nsPid;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool bIsRead; // @synthesize bIsRead;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *nsDesc; // @synthesize nsDesc;
@property(retain, nonatomic) NSString *nsJumpLink; // @synthesize nsJumpLink;
@property(retain, nonatomic) NSString *nsPid; // @synthesize nsPid;
@property(retain, nonatomic) NSString *nsThumbUrl; // @synthesize nsThumbUrl;
@property(retain, nonatomic) NSString *nsTitle; // @synthesize nsTitle;
@property(nonatomic) unsigned long long ui64SvrMsgId; // @synthesize ui64SvrMsgId;
@property(nonatomic) unsigned int uiCreateTime; // @synthesize uiCreateTime;
@property(nonatomic) unsigned int uiType; // @synthesize uiType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

