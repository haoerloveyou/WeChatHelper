//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, NSDictionary, NSString;

@protocol WebSearchMgrDelegate <NSObject>
- (void)onSearchRecmdDataFail;
- (void)onSearchRecmdDataReturn:(NSDictionary *)arg1;
- (void)onWebSearchDataChanged:(_Bool)arg1 isFromFuncQuery:(_Bool)arg2;
- (void)onWebSearchDataFail:(_Bool)arg1;

@optional
- (void)onFailReceiveSuggestionJSON;
- (void)onOpenContact:(CContact *)arg1;
- (void)onOpenContactError:(NSString *)arg1 withMessage:(NSString *)arg2;
- (void)onReceiveSuggestionJSON:(NSString *)arg1;
- (void)onUpdateCommonImg:(NSDictionary *)arg1;
- (void)onUpdateHeadImg:(NSDictionary *)arg1;
- (void)onUpdateSnsImg:(NSDictionary *)arg1;
@end

