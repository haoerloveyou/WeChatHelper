//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIColor, UIFont;

@interface CircleProgressBar : UIView
{
    NSTimer *_animationTimer;
    double _currentAnimationProgress;
    double _startProgress;
    double _endProgress;
    double _animationProgressStep;
    CDUnknownBlockType _hintTextGenerationBlock;
    CDUnknownBlockType _hintAttributedTextGenerationBlock;
    _Bool _hintHidden;
    id <CircleProgressBarDelegate> delegate;
    double _progressBarWidth;
    UIColor *_progressBarProgressColor;
    UIColor *_progressBarTrackColor;
    double _startAngle;
    double _hintViewSpacing;
    UIColor *_hintViewBackgroundColor;
    UIFont *_hintTextFont;
    UIColor *_hintTextColor;
    double _progress;
}

- (void).cxx_destruct;
- (void)animateProgressBarChangeFrom:(double)arg1 to:(double)arg2 duration:(double)arg3;
@property(nonatomic) __weak id <CircleProgressBarDelegate> delegate; // @synthesize delegate;
- (void)drawAttributedHintTextAtCenter:(struct CGPoint)arg1;
- (void)drawBackground:(struct CGContext *)arg1;
- (void)drawHint:(struct CGContext *)arg1 center:(struct CGPoint)arg2 radius:(double)arg3;
- (void)drawProgressBar:(struct CGContext *)arg1 progressAngle:(double)arg2 center:(struct CGPoint)arg3 radius:(double)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawSimpleHintTextAtCenter:(struct CGPoint)arg1;
@property(nonatomic) _Bool hintHidden; // @synthesize hintHidden=_hintHidden;
@property(retain, nonatomic) UIColor *hintTextColor; // @synthesize hintTextColor=_hintTextColor;
- (id)hintTextColorForDrawing;
@property(retain, nonatomic) UIFont *hintTextFont; // @synthesize hintTextFont=_hintTextFont;
- (id)hintTextFontForDrawing;
@property(retain, nonatomic) UIColor *hintViewBackgroundColor; // @synthesize hintViewBackgroundColor=_hintViewBackgroundColor;
- (id)hintViewBackgroundColorForDrawing;
@property(nonatomic) double hintViewSpacing; // @synthesize hintViewSpacing=_hintViewSpacing;
- (double)hintViewSpacingForDrawing;
@property(readonly, nonatomic) _Bool isAnimating;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
- (double)progressAccordingToBounds:(double)arg1;
@property(retain, nonatomic) UIColor *progressBarProgressColor; // @synthesize progressBarProgressColor=_progressBarProgressColor;
- (id)progressBarProgressColorForDrawing;
@property(retain, nonatomic) UIColor *progressBarTrackColor; // @synthesize progressBarTrackColor=_progressBarTrackColor;
- (id)progressBarTrackColorForDrawing;
@property(nonatomic) double progressBarWidth; // @synthesize progressBarWidth=_progressBarWidth;
- (double)progressBarWidthForDrawing;
- (void)setHintAttributedGenerationBlock:(CDUnknownBlockType)arg1;
- (void)setHintTextGenerationBlock:(CDUnknownBlockType)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 duration:(double)arg3;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
- (void)stopAnimation;
- (id)stringRepresentationOfProgress:(double)arg1;
- (void)updateProgressBarForAnimation;

@end

