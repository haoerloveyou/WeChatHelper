//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject, NSString;

@protocol IMMQuartz2DContextDelegate <NSObject>
- (NSObject *)getContext:(NSString *)arg1;
- (NSArray *)getGradient;
- (void)resetGradient;
- (void)restoreContext:(struct CGContext *)arg1;
- (void)saveContext:(struct CGContext *)arg1;
- (void)setContext:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)setGradient:(NSArray *)arg1;
- (void)setRotate:(double)arg1;
- (void)setScale:(double)arg1 scaleY:(double)arg2;
- (void)setTranslate:(double)arg1 translateY:(double)arg2;
@end

