//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "MMVideoPlayerViewDelegate.h"

@class NSString;

@interface WAWebViewPlugin_VideoPlayer : WAWebViewPlugin_embedView <MMVideoPlayerViewDelegate>
{
}

- (void)dealloc;
- (void)disableScroll:(_Bool)arg1 videoId:(unsigned int)arg2;
- (void)enableAutoPlay:(_Bool)arg1 videoId:(unsigned int)arg2;
- (void)enableDanmu:(_Bool)arg1 videoId:(unsigned int)arg2;
- (void)enterBackground;
- (unsigned int)getControlsMask:(unsigned int)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (unsigned int)insertVideo:(id)arg1 pos:(struct CGRect)arg2 videoId:(unsigned int)arg3;
- (void)onVideoEvent:(id)arg1 param:(id)arg2;
- (void)onVideoFullScreen:(_Bool)arg1;
- (_Bool)operateVideoPlayer:(id)arg1 videoId:(unsigned int)arg2;
- (void)pauseAllVideos;
- (void)playVideo:(unsigned int)arg1;
- (void)resizeVideo:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (void)setControls:(unsigned int)arg1 videoId:(unsigned int)arg2;
- (void)setDanmuList:(id)arg1 videoId:(unsigned int)arg2;
- (void)setDirection:(unsigned long long)arg1 videoId:(unsigned int)arg2;
- (void)setVideoPath:(id)arg1 videoId:(unsigned int)arg2;
- (void)setVideoThumb:(id)arg1 videoId:(unsigned int)arg2;
- (void)setVideoVisible:(unsigned int)arg1 visible:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

