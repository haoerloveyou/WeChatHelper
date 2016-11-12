//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface QuartzObject : NSObject
{
    NSArray *_data;
    NSString *_action;
    id <IMMQuartz2DContextDelegate> _contextDelegate;
}

- (void).cxx_destruct;
- (void)Execute:(struct CGContext *)arg1;
- (void)clearRect:(struct CGContext *)arg1;
- (void)clip:(struct CGContext *)arg1;
@property(nonatomic) __weak id <IMMQuartz2DContextDelegate> contextDelegate; // @synthesize contextDelegate=_contextDelegate;
- (void)drawImage:(struct CGContext *)arg1;
- (void)fillText:(struct CGContext *)arg1;
- (id)initWithAction:(id)arg1 data:(id)arg2;
- (void)restore:(struct CGContext *)arg1;
- (void)rotate:(struct CGContext *)arg1;
- (void)save:(struct CGContext *)arg1;
- (void)scale:(struct CGContext *)arg1;
- (void)setFillStyle:(struct CGContext *)arg1;
- (void)setFontSize:(struct CGContext *)arg1;
- (void)setGlobalAlpha:(struct CGContext *)arg1;
- (void)setLineCap:(struct CGContext *)arg1;
- (void)setLineJoin:(struct CGContext *)arg1;
- (void)setLineWidth:(struct CGContext *)arg1;
- (void)setMiterLimit:(struct CGContext *)arg1;
- (void)setShadow:(struct CGContext *)arg1;
- (void)setStrokeStyle:(struct CGContext *)arg1;
- (void)setTextAlign:(struct CGContext *)arg1;
- (void)strokeText:(struct CGContext *)arg1;
- (void)translate:(struct CGContext *)arg1;

@end

