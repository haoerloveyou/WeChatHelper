//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSString;

@interface WloginTlv_0x118 : WloginTlv
{
    unsigned int dwFlag;
    NSString *sName;
}

- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
@property unsigned int dwFlag; // @synthesize dwFlag;
@property(copy) NSString *sName; // @synthesize sName;

@end

