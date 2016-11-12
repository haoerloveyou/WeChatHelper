//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MMBaseSessionCellData, MMBaseSessionInfo, NSArray, NSString;

@protocol SessionDelegate
- (unsigned int)GetTotalUnreadCount;
- (void)deleteAllSessions;
- (void)deleteSessionAtIndex:(unsigned int)arg1;
- (unsigned int)getNewArrivalCount;
- (NSArray *)getNewArrivalList;
- (void)registerExt;
- (MMBaseSessionCellData *)sessionCellDataAtIndex:(long long)arg1;
- (unsigned int)sessionCount;
- (MMBaseSessionInfo *)sessionInfoAtIndex:(long long)arg1;
- (MMBaseSessionInfo *)sessionInfoWithUsrName:(NSString *)arg1;
- (void)syncAllContact;
- (void)unRegisterExt;
- (_Bool)zeroNewArrivalCount;
@end

