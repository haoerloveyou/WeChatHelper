//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CommonPlayer : NSObject
{
    id <CommonPlayerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (double)duration;
@property(nonatomic) __weak id <CommonPlayerDelegate> m_delegate; // @synthesize m_delegate;
- (void)pause;
- (void)resume;
- (void)start;
- (void)stop;
- (void)updateData:(id)arg1;
- (void)updatePath:(id)arg1;

@end

