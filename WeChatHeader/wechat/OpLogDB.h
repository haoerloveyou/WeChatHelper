//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCDataBase, WCDataBaseTable;

@interface OpLogDB : NSObject
{
    WCDataBase *m_db;
    WCDataBaseTable *m_table;
}

- (void).cxx_destruct;
- (void)CloseDB;
- (_Bool)ConfigWithDir:(id)arg1;
- (_Bool)DeleteOplogInDB:(unsigned int)arg1;
- (id)GetOneOplogInDBAfterOpLogID:(unsigned int)arg1;
- (unsigned int)GetOpLogCount;
- (_Bool)InsertOplogInDB:(id)arg1;
- (void)dealloc;

@end

