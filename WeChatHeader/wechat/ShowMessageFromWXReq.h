//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString, WXMediaMessage;

@interface ShowMessageFromWXReq : BaseReq
{
    WXMediaMessage *message;
    NSString *country;
    NSString *lang;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *country; // @synthesize country;
- (id)init;
@property(retain, nonatomic) NSString *lang; // @synthesize lang;
@property(retain, nonatomic) WXMediaMessage *message; // @synthesize message;

@end

