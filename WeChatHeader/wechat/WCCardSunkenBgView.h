//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIColor;

@interface WCCardSunkenBgView : MMUIView
{
    double _vSideWidth;
    double _hSideWidth;
    double _sunkenRadius;
    UIColor *_sunkenColor;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) double hSideWidth; // @synthesize hSideWidth=_hSideWidth;
- (id)init;
@property(retain, nonatomic) UIColor *sunkenColor; // @synthesize sunkenColor=_sunkenColor;
@property(nonatomic) double sunkenRadius; // @synthesize sunkenRadius=_sunkenRadius;
@property(nonatomic) double vSideWidth; // @synthesize vSideWidth=_vSideWidth;

@end
