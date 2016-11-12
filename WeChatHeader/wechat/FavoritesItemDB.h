//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MyFavoritesDB;

@interface FavoritesItemDB : NSObject
{
    MyFavoritesDB *_mmDB;
}

- (void).cxx_destruct;
- (id)checkBeforeAddItemByFavId:(unsigned int)arg1 andLocalId:(unsigned int)arg2;
- (_Bool)deleteFavoritesItemById:(unsigned int)arg1;
- (_Bool)deleteFavoritesItemByLocalItemId:(unsigned int)arg1;
- (void)fillDBFavItem:(id)arg1 fromFavItem:(id)arg2;
- (void)fillDBFavItem:(id)arg1 fromFavItem:(id)arg2 xml:(id)arg3;
- (void)fillDBFavItem:(id)arg1 fromFavObject:(id)arg2;
- (void)fillItemsArray:(id)arg1 withDBItems:(id)arg2;
- (void)fillLegalItemsArray:(id)arg1 withDBItems:(id)arg2;
- (_Bool)getAllFavoritesItems:(id)arg1;
- (_Bool)getAsyncUploadFailedItemList:(id)arg1;
- (_Bool)getAsyncUploadingItemList:(id)arg1;
- (_Bool)getDeletedItemList:(id)arg1;
- (_Bool)getDownloadFailedItemList:(id)arg1;
- (_Bool)getDownloadingItemList:(id)arg1;
- (id)getFavoritesItemById:(unsigned int)arg1;
- (id)getFavoritesItemByLocalId:(unsigned int)arg1;
- (id)getFavoritesItemBySourceId:(id)arg1;
- (_Bool)getFavoritesItemList:(id)arg1 From:(unsigned int)arg2 Limit:(unsigned int)arg3;
- (_Bool)getFavoritesItemValue:(id)arg1 fromDBItem:(id)arg2;
- (_Bool)getFirstPageFavoritesItemList:(id)arg1 byType:(int)arg2;
- (_Bool)getFirstPageFavoritesItemListContainUnBatchGet:(id)arg1;
- (_Bool)getFirstPageNeedBatchGetFavoritesItemList:(id)arg1 byType:(int)arg2;
- (unsigned int)getItemCountByFromUsr:(id)arg1 andToUsr:(id)arg2;
- (unsigned int)getItemCountByUsrname:(id)arg1;
- (id)getLastFavoritesItem;
- (id)getLastUpdateFavoritesItem;
- (unsigned int)getMaxLastUpdateTimeByUsrname:(id)arg1;
- (_Bool)getNeedBatchGetFavoritesItemList:(id)arg1 byType:(int)arg2 andMinUpdateTime:(unsigned int)arg3;
- (_Bool)getNextPageFavoritesItemList:(id)arg1 byType:(int)arg2 andCurMinUpdateTime:(unsigned int)arg3;
- (_Bool)getNextPageNeedBatchGetFavoritesItemList:(id)arg1 byType:(int)arg2 andMinUpdateTime:(unsigned int)arg3;
- (_Bool)getUploadFailedItemList:(id)arg1;
- (_Bool)getUploadingItemList:(id)arg1;
- (id)init;
- (void)initDB:(id)arg1;
- (_Bool)insertNewRowInFavoritesItem:(id)arg1 XML:(id)arg2;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1 stateDidChanged:(CDUnknownBlockType)arg2;
- (_Bool)updateItemInFavItemDB:(id)arg1;
- (_Bool)updateItemInFavItemDBByFavObject:(id)arg1;
- (_Bool)updateItemLocalStatus:(id)arg1;
- (_Bool)updateItemUpdateTime:(unsigned int)arg1 ByLocalId:(unsigned int)arg2;
- (_Bool)updateItemXMLInFavItemDB:(id)arg1;
- (_Bool)updateUpdateSeq:(unsigned int)arg1 ByFavId:(unsigned int)arg2;

@end

