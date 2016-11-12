//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingBaseViewController.h"

#import "CSettingExt.h"
#import "MMPickerViewDelegate.h"
#import "MMRegionPickerViewControllerDelegate.h"
#import "settingModifySignDelegate.h"
#import "settingMyAccountExtInfoLogicDelegate.h"

@class MMPickerView, NSString, SettingMyAccountExtInfoLogic;

@interface SettingMyAccountExtInfoViewController : SettingBaseViewController <settingModifySignDelegate, MMPickerViewDelegate, MMRegionPickerViewControllerDelegate, settingMyAccountExtInfoLogicDelegate, CSettingExt>
{
    map_0e718273 m_mapAccountCellToCellType;
    map_0e718273 m_mapSessionType;
    id <settingMyAccountExtInfoDelegate> m_delegate;
    unsigned int m_curPickerMode;
    MMPickerView *m_pickerView;
    SettingMyAccountExtInfoLogic *m_infoLogic;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)ChangeSex:(id)arg1;
- (void)MMPickerViewDidChooseRowTitle:(id)arg1 atSessionTitle:(id)arg2;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)Save;
- (void)SaveAndExit;
- (void)dealloc;
- (void)initCellType;
- (void)initSessionType;
@property(nonatomic) __weak id <settingMyAccountExtInfoDelegate> m_delegate; // @synthesize m_delegate;
- (void)makeAccountCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeAddressCell:(id)arg1;
- (void)makeCellInfoInternal:(id)arg1 col:(id)arg2 value:(id)arg3 mustFill:(_Bool)arg4;
- (id)makeMustFillLabel;
- (void)makeSexCell:(id)arg1;
- (void)makeSignCell:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onInfoChange;
- (void)onSettingChanged:(int)arg1;
- (void)returnBack;
- (void)saveNewSign:(id)arg1;
- (void)showModifyAddressView;
- (void)showModifySexView:(id)arg1;
- (void)showModifySignView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

