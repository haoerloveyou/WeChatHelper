//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QViewRecycler : NSObject
{
    NSMutableDictionary *_reuseIdentifiersToRecycledViews;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)dequeueReusableViewWithIdentifier:(id)arg1;
- (id)init;
- (void)recycleView:(id)arg1;
- (void)reduceMemoryUsage;
- (void)removeAllViews;
@property(retain, nonatomic) NSMutableDictionary *reuseIdentifiersToRecycledViews; // @synthesize reuseIdentifiersToRecycledViews=_reuseIdentifiersToRecycledViews;

@end

