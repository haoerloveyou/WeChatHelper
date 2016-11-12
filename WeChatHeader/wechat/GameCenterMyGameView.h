//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMWebImageViewDelegate.h"

@class NSMutableSet, NSString, RecentPlayGameInfoData;

@interface GameCenterMyGameView : MMUIView <MMWebImageViewDelegate>
{
    RecentPlayGameInfoData *_gameInfo;
    int _sourceScene;
    NSMutableSet *_gameRectangleIconSet;
    id <GameCenterMyGameViewDelegate> _delegate;
    long long _index;
}

+ (double)getBannerAHeight;
+ (double)getModuleHeight:(id)arg1;
+ (double)getTopicHeight:(id)arg1;
+ (double)heightForData:(id)arg1 atIdx:(long long)arg2;
- (void).cxx_destruct;
- (_Bool)calcDrawGiftWay:(id)arg1 CanDrawAllGift:(_Bool)arg2;
- (id)createBannerAView:(id)arg1 SuperView:(id)arg2;
- (id)createBannerBView:(id)arg1 SuperView:(id)arg2;
- (id)createBannerView:(id)arg1;
- (id)createCommView:(id)arg1;
- (id)createGameCircleView:(id)arg1;
- (id)createGiftView:(id)arg1;
- (id)createHeadView;
- (id)createLine;
- (id)createRankView:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <GameCenterMyGameViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawGiftFromLeft:(id)arg1 GiftData:(id)arg2 GiftSpacing:(double)arg3 ProcessBarCenterY:(float)arg4 CanDrawAllGift:(_Bool)arg5;
- (void)drawGiftFromRight:(id)arg1 GiftData:(id)arg2 GiftSpacing:(double)arg3 ProcessBarCenterY:(float)arg4 CanDrawAllGift:(_Bool)arg5;
- (id)genLabelWithFontSize:(double)arg1 text:(id)arg2 textColor:(id)arg3 x:(double)arg4 y:(double)arg5 maxWidth:(double)arg6 superView:(id)arg7;
- (_Bool)getGiftSpacing:(id)arg1 TotalWidth:(double)arg2 GiftSpacing:(double *)arg3;
- (id)giftStateImg:(id)arg1;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
- (id)initWithFrame:(struct CGRect)arg1 recentGameInfo:(id)arg2 index:(long long)arg3 SourceScene:(int)arg4;
- (int)lastGiftIndexTaken:(id)arg1;
- (void)onBannerClicked:(id)arg1;
- (void)onCircleClicked:(id)arg1;
- (void)onCommModuleClicked:(id)arg1;
- (void)onDownloadButtonClicked:(id)arg1;
- (void)onGameRowClicked:(id)arg1;
- (void)onGiftCenterClicked:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)onRankClicked:(id)arg1;
- (void)setupView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

