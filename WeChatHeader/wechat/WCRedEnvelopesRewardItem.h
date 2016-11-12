//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCRedEnvelopesRewardItem : NSObject <NSCoding>
{
    NSString *userName;
    unsigned int createTime;
    unsigned long long receiveAmount;
    NSString *sendId;
    NSString *ticket;
}

+ (id)fromServerObj:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (_Bool)isFreeItem;
@property(nonatomic) unsigned long long receiveAmount; // @synthesize receiveAmount;
@property(retain, nonatomic) NSString *sendId; // @synthesize sendId;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;

@end

