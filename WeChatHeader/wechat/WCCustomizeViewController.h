//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMImagePickerManagerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTableView, NSMutableArray, NSString;

@interface WCCustomizeViewController : MMUIViewController <WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource, MMImagePickerManagerDelegate>
{
    NSMutableArray *m_rowsData;
    MMTableView *m_tableView;
    NSString *m_username;
    _Bool m_isUploading;
}

- (void).cxx_destruct;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (id)cropAndResize:(id)arg1 realCropRect:(struct CGRect)arg2;
- (id)getNavigationController;
- (id)getViewController;
@property(retain, nonatomic) NSMutableArray *m_rowsData; // @synthesize m_rowsData;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) NSString *m_username; // @synthesize m_username;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onFinishedSelectImage:(id)arg1;
- (void)popToMessageSessionView;
- (void)reloadRowData;
- (void)showImagePicker:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
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

