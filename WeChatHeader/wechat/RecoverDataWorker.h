//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RecoverDataWorker : NSObject
{
    id <RecoverDataWorker> m_delegate;
}

+ (void)BackupOriginDBFile:(id)arg1 UserLibraryDir:(id)arg2;
+ (id)GenerateBackupDBDir:(id)arg1;
+ (_Bool)RebuildDB:(id)arg1 SqlFile:(id)arg2 UserLibraryDir:(id)arg3;
+ (_Bool)RecoverDB:(id)arg1 SqlFile:(id)arg2 UserLibraryDir:(id)arg3;
+ (id)StringWithDate;
+ (unsigned long long)restSpaceSize;
+ (unsigned long long)sizeForFile:(id)arg1;
+ (id)transformPath:(id)arg1;
- (void).cxx_destruct;
- (_Bool)databaseFix:(id)arg1;
- (_Bool)deleteOneFile:(id)arg1;
- (_Bool)doRecoverJob:(id)arg1;
- (_Bool)fileDelete:(id)arg1;
- (id)init;
- (_Bool)isMainDBWithPath:(id)arg1;
- (void)logDBSize:(id)arg1 description:(id)arg2 forScene:(id)arg3;
@property(nonatomic) __weak id <RecoverDataWorker> m_delegate; // @synthesize m_delegate;
- (void)onAfterFixMainDBSucc;
- (void)onBeforeFixMainDB;
- (_Bool)recoverDataDatabase:(id)arg1;
- (_Bool)recoverDataFile:(id)arg1;

@end

