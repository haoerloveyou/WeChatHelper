//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "MMovieDecoderDelegate.h"

@class MMovieDecoder, NSString, UIImage;

@interface MVideoPlayerView : UIImageView <MMovieDecoderDelegate>
{
    MMovieDecoder *m_decoder;
    UIImage *m_firstFrame;
    UIImage *m_lastFrame;
    id <MVideoPlayerViewDelegate> delegate;
    NSString *_cpKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
- (void)dealloc;
@property(nonatomic) __weak id <MVideoPlayerViewDelegate> delegate; // @synthesize delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *lastFrame; // @synthesize lastFrame=m_lastFrame;
- (void)loadAndPlay:(id)arg1;
- (void)mMovieDecoder:(id)arg1 onNewVideoFrameReady:(struct opaqueCMSampleBuffer *)arg2;
- (void)mMovieDecoderOnDecodeFinished:(id)arg1;
- (void)pause;
- (void)pauseForRelease;
- (void)restart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

