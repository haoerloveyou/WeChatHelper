//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "PBCoding.h"

@class NSString;

@interface ShakeUserItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    NSString *nickname;
    NSString *username;
    NSString *showchat;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname;
@property(retain, nonatomic) NSString *showchat; // @synthesize showchat;
@property(retain, nonatomic) NSString *username; // @synthesize username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

