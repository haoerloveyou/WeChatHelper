//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMComponent.h"

#import "IFavoritesExt.h"
#import "INetworkStatusMgrExt.h"

@class FavoritesItem, MMFavHeadComponent, MMFavImgComponent, MMFavNameComponent, MMFavTagComponent, MMFavThumbComponent, MMFavUrlComponent, MMFavVoiceComponent, MMUIImageView, NSString, UIImageView, UIView;

@interface MMFavCellComponent : MMComponent <IFavoritesExt, INetworkStatusMgrExt>
{
    MMFavHeadComponent *_headCom;
    MMFavTagComponent *_tagCom;
    MMFavNameComponent *_nameCom;
    MMFavThumbComponent *_thumbCom;
    MMFavUrlComponent *_urlCom;
    MMFavVoiceComponent *_voiceCom;
    MMFavImgComponent *_imgCom;
    MMUIImageView *m_selectedView;
    MMUIImageView *m_deselectedView;
    UIImageView *_failIcon;
    UIView *m_contentView;
    _Bool m_editing;
    id <MyFavoritesBaseCellDelegate> _favBaseCellDelegate;
    FavoritesItem *_favItem;
}

+ (double)calHeightWithComData:(id)arg1;
+ (_Bool)isUseNewUI;
- (void).cxx_destruct;
- (void)OnHeadImgLongPress:(id)arg1;
- (void)OnRestartAllUploadFailItems;
- (void)OnStartDownloadFavoritesItem:(id)arg1;
- (void)OnStartUploadFavoritesItem:(id)arg1;
- (void)changeEditingStatus:(_Bool)arg1 animated:(_Bool)arg2;
- (void)changeSelectStatu:(_Bool)arg1;
- (void)configContentLayout;
- (void)configFavCell;
- (void)configHeadAndNameComponent;
- (void)configImgComponent;
- (void)configSelectView;
- (void)configTagComponent;
- (void)configThumbAndUrlComponent;
- (void)configVoiceComponent;
- (void)dealloc;
@property(nonatomic) __weak id <MyFavoritesBaseCellDelegate> favBaseCellDelegate; // @synthesize favBaseCellDelegate=_favBaseCellDelegate;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
- (id)getThumbComponent;
- (_Bool)isPadStyle;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)updateSyncStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

