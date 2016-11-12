//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WAIconHeadViewDelegate.h"

@class CContact, NSArray, NSMutableArray, NSString, UIButton, UIView, UIVisualEffectView, WAIconHeadView;

@interface WAIconActionSheet : MMObject <WAIconHeadViewDelegate>
{
    CContact *m_contact;
    NSArray *m_btnTitles;
    NSString *m_cancelTitle;
    NSString *m_destructiveTitle;
    id <WAIconActionSheetDelegate> m_delegate;
    UIView *_interateView;
    UIView *_containerView;
    UIVisualEffectView *_blurView;
    WAIconHeadView *_headView;
    NSMutableArray *_btnArray;
    UIButton *_destructiveBtn;
    UIButton *_cancelBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *destructiveBtn; // @synthesize destructiveBtn=_destructiveBtn;
- (void)dismissWithAnimation;
- (id)genDestructiveBtn;
- (id)genNormalBtn:(id)arg1;
@property(retain, nonatomic) WAIconHeadView *headView; // @synthesize headView=_headView;
- (id)initWithUsrName:(id)arg1 Activitys:(id)arg2 otherButtonTitle:(id)arg3 delegate:(id)arg4 isDebugMode:(_Bool)arg5;
- (id)initWithUsrName:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 buttonTitleArray:(id)arg4 delegate:(id)arg5;
@property(retain, nonatomic) UIView *interateView; // @synthesize interateView=_interateView;
- (_Bool)isSupportVisualEffect;
@property(nonatomic) __weak id <WAIconActionSheetDelegate> m_delegate; // @synthesize m_delegate;
- (void)onButtonClicked:(id)arg1;
- (void)onCancelButtonClick:(id)arg1;
- (void)onDestructiveButtonClick:(id)arg1;
- (void)onExposeButtonClicked;
- (void)onInfoButtonClicked;
- (void)show;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

