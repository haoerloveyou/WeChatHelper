//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VPResourceItem;

@protocol VoicePrintGetResourceDelegate <NSObject>

@optional
- (void)OnGetRemoteResource:(VPResourceItem *)arg1 withScene:(unsigned int)arg2;
- (void)OnGetResError:(int)arg1 withScene:(unsigned int)arg2;
@end

