//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@interface MainWindow : UIWindow
{
    double windowOffset;
    double mainWindowX;
    double mainWindowY;
    double mainWindowWidth;
    double mainWindowHeight;
    struct CGRect mainWindowFrame;
}

- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGRect mainWindowFrame; // @synthesize mainWindowFrame;
@property(nonatomic) double mainWindowHeight; // @synthesize mainWindowHeight;
@property(nonatomic) double mainWindowWidth; // @synthesize mainWindowWidth;
@property(nonatomic) double mainWindowX; // @synthesize mainWindowX;
@property(nonatomic) double mainWindowY; // @synthesize mainWindowY;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) double windowOffset; // @synthesize windowOffset;
- (void)setX:(double)arg1;

@end

