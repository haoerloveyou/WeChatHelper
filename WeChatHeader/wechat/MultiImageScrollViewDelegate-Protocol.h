//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIGestureRecognizer, UIImage, UIView;

@protocol MultiImageScrollViewDelegate <NSObject>
- (UIImage *)imageAtPage:(unsigned int)arg1;
- (UIView *)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;

@optional
- (void)OnLongPress:(id)arg1;
- (void)OnLongPressBegin:(id)arg1;
- (NSString *)imagePathAtPage:(unsigned int)arg1;
- (void)multiImageScrollViewWillBeginDragging;
- (void)onChangePage;
- (void)onDoubleTap:(UIGestureRecognizer *)arg1;
- (void)onSingleTap:(UIGestureRecognizer *)arg1;
@end

