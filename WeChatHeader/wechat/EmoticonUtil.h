//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EmoticonUtil : NSObject
{
}

+ (_Bool)FileExist:(id)arg1 byUtime:(_Bool)arg2;
+ (_Bool)InternalMoveToEmoticonDirForMd5:(id)arg1 originPath:(id)arg2 originData:(id)arg3 isCleanable:(_Bool)arg4;
+ (_Bool)InternalMoveToTargetPath:(id)arg1 originPath:(id)arg2 originData:(id)arg3;
+ (void)RenameEmoticon;
+ (id)dataOfEmoticonForMd5:(id)arg1;
+ (id)dataOfEmoticonForMd5:(id)arg1 needUpdateTime:(_Bool)arg2;
+ (_Bool)fileExistInNotCleanDirOfEmoticonForMd5:(id)arg1 includeOldDir:(_Bool)arg2;
+ (_Bool)fileExistOfEmoticonForMd5:(id)arg1;
+ (id)fileNameForMd5:(id)arg1;
+ (long long)fileSizeOfEmoticonForMd5:(id)arg1;
+ (id)fileTimeStateForMd5:(id)arg1;
+ (unsigned long long)getEmotionTotalSize;
+ (_Bool)hasOldEmoticonDir;
+ (id)loadDataOfEmoticonForMd5:(id)arg1 offset:(unsigned int)arg2 maxLen:(unsigned int)arg3;
+ (_Bool)migrationEmoticonForEmoticonList:(id)arg1 isCustomEmoticon:(_Bool)arg2;
+ (_Bool)migrationEmoticonForMd5:(id)arg1 toDirIsCleanable:(_Bool)arg2;
+ (_Bool)moveFileToEmoticonDirForMd5:(id)arg1 originPath:(id)arg2 isCleanable:(_Bool)arg3;
+ (id)pathOfAutoCleanDir;
+ (id)pathOfCleanableDir;
+ (id)pathOfEmoticonForMd5:(id)arg1 needUpdateTime:(_Bool)arg2;
+ (id)pathOfEmoticonToSaveForMd5:(id)arg1;
+ (id)pathOfNotCleanDir;
+ (id)pathOfOldDir;
+ (id)pathOfThumbDir;
+ (_Bool)removeFileOfEmoticonForMd5:(id)arg1;
+ (_Bool)renameFileOldPath:(const char *)arg1 toNewPath:(const char *)arg2;
+ (void)renameOldDirToAutoCleanDir;
+ (void)reportMigrationStateWithKey:(int)arg1;
+ (void)resetAllFileToOldDir;
+ (_Bool)saveEmoticonToEmoticonDirForMd5:(id)arg1 data:(id)arg2 isCleanable:(_Bool)arg3;
+ (id)thumbPathOfEmoticonForMd5:(id)arg1;
+ (id)thumbPathOfEmoticonToSaveForMd5:(id)arg1;

@end

