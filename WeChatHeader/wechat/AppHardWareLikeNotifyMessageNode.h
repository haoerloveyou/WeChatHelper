//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

@class UIImageView;

@interface AppHardWareLikeNotifyMessageNode : BaseMessageNodeView
{
    UIImageView *m_oArrowImageView;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)getBackgroundImage;
- (id)getBackgroundImageHL;
- (id)getMoreMainInfomationAccessibilityDescription;
- (void)layoutSubviewsInternal;
- (void)onClick;
- (void)onLongTouch;
- (void)onMenuItemWillHide;
- (void)onMoreOperate:(id)arg1;
- (void)onTouchCancel;
- (void)onTouchDown;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (void)reLayoutSubviews;
- (void)showOpearation;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)updateBkgImage:(_Bool)arg1;

@end

