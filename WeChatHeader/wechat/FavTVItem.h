//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FavTVItem : NSObject
{
    NSString *_title;
    NSString *_description;
    NSString *_thumbUrl;
    NSString *_info;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

