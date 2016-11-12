//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableArray, NSString;

@interface MMMusicLyricsMgr : MMService <MMService, PBMessageObserverDelegate>
{
    NSMutableArray *m_arrMusicItems;
    NSString *m_nsLyricsRootPath;
}

- (void).cxx_destruct;
- (void)ClearLyricsFile;
- (void)GetLyricsByMusicInfo:(id)arg1;
- (_Bool)GetLyricsFromSvr:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (id)getLyricFileName:(id)arg1 AndSinger:(id)arg2;
- (id)getLyricsFromFile:(id)arg1;
- (void)handleGetLyricsResp:(id)arg1 Event:(unsigned int)arg2;
- (unsigned long long)indexOfMusicByWeUrl:(id)arg1;
- (id)init;
- (_Bool)saveLyricsToFile:(id)arg1 FilePath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

