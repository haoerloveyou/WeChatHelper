//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MMExtensionDictionary : NSObject
{
    NSMutableDictionary *m_dic;
    _Bool m_needCleanUp;
}

- (void).cxx_destruct;
- (void)cleanUp;
- (void)dealloc;
- (id)getKeyExtensionList:(id)arg1;
- (id)init;
- (_Bool)registerExtension:(id)arg1 forKey:(id)arg2;
- (_Bool)unregisterExtension:(id)arg1 forKey:(id)arg2;
- (_Bool)unregisterKeyExtension:(id)arg1;

@end

