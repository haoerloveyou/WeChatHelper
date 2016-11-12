//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCDataBase;

@interface WCDataBaseTable : NSObject
{
    WCDataBase *m_db;
    NSString *m_tableName;
    Class m_tableClass;
}

- (void).cxx_destruct;
- (id)database;
- (_Bool)deleteObject:(id)arg1;
- (_Bool)deleteObjectsWhere:(const struct WCDBConditionBase *)arg1;
- (id)getAllObjects;
- (unsigned int)getCountOfDistinctProperty:(const struct WCDBConditionBase *)arg1 Where:(const struct WCDBConditionBase *)arg2;
- (unsigned int)getCountOfObjects;
- (unsigned int)getCountOfObjectsWhere:(const struct WCDBConditionBase *)arg1;
- (id)getLastObject;
- (id)getMaxProperty:(const struct WCDBConditionBase *)arg1;
- (id)getMaxProperty:(const struct WCDBConditionBase *)arg1 where:(const struct WCDBConditionBase *)arg2;
- (id)getObjectsWhere:(const struct WCDBConditionBase *)arg1;
- (id)getObjectsWhere:(const struct WCDBConditionBase *)arg1 limit:(unsigned int)arg2;
- (id)getObjectsWhere:(const struct WCDBConditionBase *)arg1 onProperties:(const vector_24c76cbd *)arg2 orderBy:(const struct WCDBConditionBase *)arg3 limit:(unsigned int)arg4;
- (id)getObjectsWhere:(const struct WCDBConditionBase *)arg1 onProperties:(const vector_24c76cbd *)arg2 orderBy:(const struct WCDBConditionBase *)arg3 limit:(unsigned int)arg4 getError:(id *)arg5;
- (id)getObjectsWhere:(const struct WCDBConditionBase *)arg1 orderBy:(const struct WCDBConditionBase *)arg2 limit:(unsigned int)arg3;
- (id)getOneObjectWhere:(const struct WCDBConditionBase *)arg1;
- (id)getOneObjectWhere:(const struct WCDBConditionBase *)arg1 onProperties:(const vector_24c76cbd *)arg2 orderBy:(const struct WCDBConditionBase *)arg3;
- (id)getOnePropertyValue:(const struct WCDBConditionBase *)arg1 where:(const struct WCDBConditionBase *)arg2 orderBy:(const struct WCDBConditionBase *)arg3;
- (id)getProperty:(const struct WCDBConditionBase *)arg1;
- (id)getProperty:(const struct WCDBConditionBase *)arg1 where:(const struct WCDBConditionBase *)arg2;
- (id)getProperty:(const struct WCDBConditionBase *)arg1 where:(const struct WCDBConditionBase *)arg2 limit:(unsigned int)arg3;
- (id)getProperty:(const struct WCDBConditionBase *)arg1 where:(const struct WCDBConditionBase *)arg2 orderBy:(const struct WCDBConditionBase *)arg3 limit:(unsigned int)arg4;
- (id)getPropertyWithDistinct:(const struct WCDBConditionBase *)arg1 where:(const struct WCDBConditionBase *)arg2;
- (id)getSumProperty:(const struct WCDBConditionBase *)arg1 where:(const struct WCDBConditionBase *)arg2;
- (id)initWithDataBase:(id)arg1 tableName:(id)arg2 objectClass:(Class)arg3;
- (_Bool)insertObject:(id)arg1 autoIncrement:(_Bool)arg2;
- (_Bool)insertObject:(id)arg1 onProperties:(const vector_24c76cbd *)arg2 autoIncrement:(_Bool)arg3;
- (_Bool)insertOrUpdateObject:(id)arg1;
- (_Bool)insertOrUpdateObject:(id)arg1 onConflict:(CDUnknownBlockType)arg2;
- (_Bool)insertOrUpdateObject:(id)arg1 onProperties:(const vector_24c76cbd *)arg2;
- (_Bool)insertOrUpdateObjects:(id)arg1;
- (_Bool)insertOrUpdateObjects:(id)arg1 onConflict:(CDUnknownBlockType)arg2;
- (Class)tableClass;
- (id)tableName;
- (_Bool)updateObject:(id)arg1 onProperties:(const vector_24c76cbd *)arg2;
- (_Bool)updateObject:(id)arg1 onProperties:(const vector_24c76cbd *)arg2 where:(const struct WCDBConditionBase *)arg3;
- (_Bool)updateProperty:(const struct WCDBConditionBase *)arg1 withValue:(id)arg2 where:(const struct WCDBConditionBase *)arg3;

@end

