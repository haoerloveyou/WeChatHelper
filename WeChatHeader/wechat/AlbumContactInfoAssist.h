//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PluginContactInfoAssist.h"

#import "WCFacadeExt.h"

@class NSString;

@interface AlbumContactInfoAssist : PluginContactInfoAssist <WCFacadeExt>
{
}

- (void)dealloc;
- (id)getPluginIntro;
- (id)getUnInstallBtnTitle;
- (id)getUnInstallTip;
- (void)initHeaderView;
- (void)onWCGroupUpdatedReturn:(_Bool)arg1;
- (void)openAlbum;
- (void)openGroup:(id)arg1;
- (void)reloadInstalledTableViewData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

