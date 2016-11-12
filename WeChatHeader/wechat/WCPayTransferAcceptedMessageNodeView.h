//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

@class UILabel;

@interface WCPayTransferAcceptedMessageNodeView : BaseMessageNodeView
{
    UILabel *moneyLable;
    UILabel *descLabel;
    UILabel *titleLabel;
    double m_height;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)getBackgroundImage;
- (id)getBackgroundImageHL;
- (id)getMoreMainInfomationAccessibilityDescription;
- (id)getSimpleDisplayName:(id)arg1;
- (void)layoutSubviewsInternal;
- (void)onClearResource;
- (void)onClick;
- (void)onDisappear;
- (void)onFavoriteAdd:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onLongTouch;
- (void)onMenuItemWillHide;
- (void)onMoreOperate:(id)arg1;
- (void)onTouchCancel;
- (void)onTouchDown;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (void)showOpearation;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)updateBkgImage:(_Bool)arg1;
- (void)updateStatus:(id)arg1;
- (void)updateThumbImage;

@end

