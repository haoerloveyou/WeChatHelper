//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCVideoRender : NSObject
{
}

- (void)cameraFrontMode:(_Bool)arg1;
- (void)changeFrame:(struct CGRect)arg1;
- (void)flipView;
- (id)getRenderView;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)updateOrientation;

@end

