//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JPBoxing : NSObject
{
    id _obj;
    void *_pointer;
    Class _cls;
    id _weakObj;
    id _assignObj;
}

+ (id)boxAssignObj:(id)arg1;
+ (id)boxClass:(Class)arg1;
+ (id)boxObj:(id)arg1;
+ (id)boxPointer:(void *)arg1;
+ (id)boxWeakObj:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) id assignObj; // @synthesize assignObj=_assignObj;
@property(retain, nonatomic) Class cls; // @synthesize cls=_cls;
@property(retain, nonatomic) id obj; // @synthesize obj=_obj;
@property(nonatomic) void *pointer; // @synthesize pointer=_pointer;
@property(nonatomic) __weak id weakObj; // @synthesize weakObj=_weakObj;
- (id)unbox;
- (Class)unboxClass;
- (void *)unboxPointer;

@end

