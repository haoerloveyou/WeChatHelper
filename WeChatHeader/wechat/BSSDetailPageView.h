//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BSSDetailPageLogicControllerDelegate.h"
#import "BSSItemViewDelegate.h"
#import "MMRefreshTableFooterDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class BSSDetailPageLogicController, MMLoadingView, MMTableView, MMUILabel, NSMutableDictionary, NSString, UIButton, UIViewController, WCTimeLineFooterView;

@interface BSSDetailPageView : UIView <UITableViewDataSource, UITableViewDelegate, BSSDetailPageLogicControllerDelegate, MMRefreshTableFooterDelegate, BSSItemViewDelegate>
{
    unsigned int _friendScene;
    id <BSSDetailViewDelegate> _delegate;
    MMTableView *_tableView;
    UIViewController *_parentVC;
    WCTimeLineFooterView *_footerView;
    UIButton *_backBtn;
    MMLoadingView *_loadingView;
    MMUILabel *_nonResultLabel;
    NSString *_keyword;
    long long _resultType;
    NSMutableDictionary *_dicItemViews;
    BSSDetailPageLogicController *_logicController;
}

- (void).cxx_destruct;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
- (void)dealloc;
@property(nonatomic) __weak id <BSSDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *dicItemViews; // @synthesize dicItemViews=_dicItemViews;
- (void)didDeviceRotate;
- (void)dismissView;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) unsigned int friendScene; // @synthesize friendScene=_friendScene;
- (id)getCellItemViewWithDataItem:(id)arg1 keywords:(id)arg2;
- (long long)getCurrentResultType;
- (double)getSearchTextFieldWidth;
- (void)handleDetailSearchWithKeyword:(id)arg1;
- (void)handleDetailViewCancelSearch;
- (id)initBSSDetailPageViewWithResultType:(long long)arg1 andBusinessType:(unsigned long long)arg2 andKeyword:(id)arg3 andLocation:(id)arg4 andParentVC:(id)arg5 andFriendScene:(unsigned int)arg6 andEntrySrc:(unsigned int)arg7;
- (void)initBackBtn;
- (void)initFooterView;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) BSSDetailPageLogicController *logicController; // @synthesize logicController=_logicController;
@property(retain, nonatomic) MMUILabel *nonResultLabel; // @synthesize nonResultLabel=_nonResultLabel;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onItemViewInnerSelectWithServiceUrlString:(id)arg1;
- (void)onResultViewNeedReload;
- (void)onReturn:(id)arg1;
- (void)onSearchStart;
- (void)onSelectItemWithContactInfo:(id)arg1 andSearchId:(id)arg2;
- (void)onSelectItemWithProductId:(id)arg1;
- (void)onSelectItemWithUrlAddress:(id)arg1;
- (void)onSvrError;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
- (void)removeFromParentView;
@property(nonatomic) long long resultType; // @synthesize resultType=_resultType;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)showView;
- (void)startLoading;
- (void)stopLoading;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

