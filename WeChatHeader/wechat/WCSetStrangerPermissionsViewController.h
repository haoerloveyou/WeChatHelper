//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CContact, MMTableView, NSString;

@interface WCSetStrangerPermissionsViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate>
{
    MMTableView *_tableView;
    CContact *_contact;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)initView;
- (id)initWithUserName:(id)arg1;
- (void)makeSwitchCell:(id)arg1 tip:(id)arg2 status:(_Bool)arg3 tag:(long long)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onDissmiss;
- (void)onSwitchValueChange:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
