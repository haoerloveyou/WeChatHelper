//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTableViewInfoDelegate.h"
#import "WCBaseInfoItemDelegate.h"

@class MMTableViewInfo, NSString, WCAccountControlData;

@interface WCAccountBaseViewController : MMUIViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    WCAccountControlData *m_data;
    unsigned int m_uiReportStatus;
    NSString *m_nsStyleID;
    struct timeval m_tvStart;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)callViewDidLoad;
- (id)getArchive;
- (id)getHeaderTipLabel:(id)arg1;
- (id)getHeaderView:(id)arg1;
- (id)getInputLineView;
- (unsigned int)getStayTime;
- (void)hideKeyBoard;
- (id)init;
- (void)initData;
- (void)initNavigationBar;
- (void)initView;
@property(retain, nonatomic) NSString *m_nsStyleID; // @synthesize m_nsStyleID;
@property(nonatomic) unsigned int m_uiReportStatus; // @synthesize m_uiReportStatus;
- (id)makeHeaderView:(id)arg1;
- (void)onNext;
- (_Bool)recoverFromArchive:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)setStartTime;
- (void)setTableFooterView:(id)arg1;
- (void)setTableHeaderView:(id)arg1;
- (void)setupWithData:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)useCustomNavibar;
- (_Bool)useIpadSytle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

