//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface ImplicitView : UILabel
{
    int vx;
    int vy;
    _Bool bStop;
}

- (id)initWithEmoji:(id)arg1 withSize:(struct CGSize)arg2;
- (void)onAnimationComplete:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)start;
- (void)stop;
- (void)tick;

@end

