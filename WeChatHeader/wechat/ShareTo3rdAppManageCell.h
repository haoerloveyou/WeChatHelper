//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class AppRegisterInfo, MMWebImageView, UILabel, UISwitch;

@interface ShareTo3rdAppManageCell : MMUIView
{
    MMWebImageView *_iconImageView;
    UILabel *_nameLabel;
    UISwitch *_switchView;
    AppRegisterInfo *m_appInfo;
    id <ShareTo3rdAppManageCellDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)actionSwitchValueChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withAppInfo:(id)arg2;
- (void)layoutSubviews;
@property(nonatomic) __weak id <ShareTo3rdAppManageCellDelegate> m_delegate; // @synthesize m_delegate;

@end

