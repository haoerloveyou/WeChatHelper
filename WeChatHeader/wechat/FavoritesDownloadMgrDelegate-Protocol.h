//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesItem, NSString;

@protocol FavoritesDownloadMgrDelegate <NSObject>

@optional
- (void)onDownloadFavoritesItem:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)onDownloadFavoritesItemFail:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2;
- (void)onDownloadFavoritesItemFinished:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)onDownloadFavoritesItemOK:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2;
@end

