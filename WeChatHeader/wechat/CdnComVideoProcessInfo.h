//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CdnComVideoProcessInfo : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFilePath;
    long long m_uiOffset;
    long long m_uiLength;
    unsigned int m_uiDurationMs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(nonatomic) unsigned int m_uiDurationMs; // @synthesize m_uiDurationMs;
@property(nonatomic) long long m_uiLength; // @synthesize m_uiLength;
@property(nonatomic) long long m_uiOffset; // @synthesize m_uiOffset;

@end

