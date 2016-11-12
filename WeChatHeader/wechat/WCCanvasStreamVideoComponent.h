//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "VoiceComponentExt.h"
#import "WCCanvasImageLoaderObserver.h"
#import "WCNetworkMediaCoreDelegate.h"

@class MMProgressViewEx, MMTimer, MMUILabel, NSString, UIButton, UIImageView, UIView, WCNetworkMediaCore, WCNetworkMediaSlider;

@interface WCCanvasStreamVideoComponent : WCCanvasComponent <WCNetworkMediaCoreDelegate, VoiceComponentExt, WCCanvasImageLoaderObserver>
{
    _Bool _streamVideoThumbReady;
    _Bool _isFirstInit;
    _Bool _isLastPlaying;
    _Bool _shouldPlayAtBegin;
    MMProgressViewEx *_loadingView;
    MMUILabel *_durationLabel;
    UIView *_bottomView;
    MMUILabel *_currentLabel;
    WCNetworkMediaSlider *_sliderView;
    UIButton *_playButton;
    UIButton *_detailButton;
    UIButton *_voiceControlButton;
    UIButton *_m_hideBtn;
    UIView *_m_maskView;
    UIButton *_m_initPlayButton;
    UIView *_m_initPlayMaskView;
    UIImageView *_m_previewImageView;
    MMTimer *_timer;
    WCNetworkMediaCore *_mediaCore;
    struct CGSize _videoSize;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
- (void)componentDidFullyApperaInMainScreen:(_Bool)arg1;
- (void)componentHasApperedInMainScreenWithFactor:(double)arg1;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
@property(retain, nonatomic) MMUILabel *currentLabel; // @synthesize currentLabel=_currentLabel;
- (void)dealloc;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
- (void)hideControlViews;
- (void)hideControlViewsAndTryShowArrowAnimate;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isControlViewsHidden;
@property(nonatomic) _Bool isFirstInit; // @synthesize isFirstInit=_isFirstInit;
@property(nonatomic) _Bool isLastPlaying; // @synthesize isLastPlaying=_isLastPlaying;
- (void)layoutSubviews;
@property(retain, nonatomic) MMProgressViewEx *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *m_hideBtn; // @synthesize m_hideBtn=_m_hideBtn;
@property(retain, nonatomic) UIButton *m_initPlayButton; // @synthesize m_initPlayButton=_m_initPlayButton;
@property(retain, nonatomic) UIView *m_initPlayMaskView; // @synthesize m_initPlayMaskView=_m_initPlayMaskView;
@property(retain, nonatomic) UIView *m_maskView; // @synthesize m_maskView=_m_maskView;
@property(retain, nonatomic) UIImageView *m_previewImageView; // @synthesize m_previewImageView=_m_previewImageView;
@property(retain, nonatomic) WCNetworkMediaCore *mediaCore; // @synthesize mediaCore=_mediaCore;
- (void)onHideClick;
- (void)onInitPlayButtonClick;
- (void)onMediaCore:(id)arg1 CacheDarutionChange:(double)arg2;
- (void)onMediaCore:(id)arg1 DarutionUpdate:(double)arg2;
- (void)onMediaCore:(id)arg1 StateChange:(int)arg2;
- (void)onMediaCore:(id)arg1 VideoSizeUpdate:(struct CGSize)arg2;
- (void)onPlayClick:(id)arg1;
- (void)onPlaySliderChange:(id)arg1;
- (void)onShowDetail:(id)arg1;
- (void)onSliderChange:(id)arg1;
- (void)onVoiceComponentHasPlayWithSound:(id)arg1;
- (void)onVoiceIconBtnClick:(id)arg1;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
- (void)refreshCurrentTime;
- (void)retryToLoadVideo;
@property(nonatomic) _Bool shouldPlayAtBegin; // @synthesize shouldPlayAtBegin=_shouldPlayAtBegin;
@property(retain, nonatomic) WCNetworkMediaSlider *sliderView; // @synthesize sliderView=_sliderView;
@property(nonatomic) _Bool streamVideoThumbReady; // @synthesize streamVideoThumbReady=_streamVideoThumbReady;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) UIButton *voiceControlButton; // @synthesize voiceControlButton=_voiceControlButton;
- (_Bool)shouldAutoPlayStreamVideo;
- (_Bool)shouldForbidDelegateShowArrowDown;
- (void)showControlViews;
- (void)showControlViewsWithAutoHide;
- (id)stringFromTimeInterval:(double)arg1;
- (void)tryPlayStreamVideo;
- (void)tryShowDownArrowAnimate;
- (void)updateSubviewsFrame:(long long)arg1;
- (void)updateVideoFrame:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

