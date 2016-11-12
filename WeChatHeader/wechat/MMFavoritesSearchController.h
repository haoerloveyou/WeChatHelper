//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "FavForwardLogicDelegate.h"
#import "FavFullScreenImageViewDelegate.h"
#import "FavTagSearchFilterDelegate.h"
#import "IFavoritesExt.h"
#import "MsgFastBrowseViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FMSearchBar, FavForwardLogicController, FavTagSearchFilter, MsgFastBrowseView, NSMutableArray, NSString, UIButton, UILabel, UISearchDisplayController, UITextField, UIView;

@interface MMFavoritesSearchController : MMObject <FavFullScreenImageViewDelegate, FavTagSearchFilterDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, MsgFastBrowseViewDelegate, FavForwardLogicDelegate, IFavoritesExt>
{
    NSString *m_searchText;
    NSString *m_tagText;
    NSMutableArray *m_arrFilterItems;
    NSMutableArray *m_arrFilterDatas;
    _Bool m_bSearching;
    _Bool m_bInSearchSession;
    _Bool m_bShouldBlurAgain;
    FMSearchBar *m_searchBar;
    FavTagSearchFilter *m_filterView;
    UIView *m_searchFooterView;
    UISearchDisplayController *m_searchDisplayController;
    UITextField *m_searchField;
    long long m_statusBarStyle;
    id <FavSearchControllerDelegate> m_delegate;
    MsgFastBrowseView *m_msgFastBrowseView;
    NSMutableArray *m_arrImgInfo;
    UIButton *m_editBtn;
    UIButton *m_forwardBtn;
    UIView *m_searchBarDimmingView;
    UIView *m_filterFooterView;
    _Bool m_bEditing;
    UIView *m_loadingView;
    UILabel *m_loadingLabel;
    FavForwardLogicController *m_favForwardController;
    _Bool _m_bUseFilter;
}

- (void).cxx_destruct;
- (void)OnDelFavoritesItem:(unsigned int)arg1;
- (void)OnForwardDone;
- (void)OnSearch:(id)arg1;
- (void)addFilterFooterView:(id)arg1;
- (void)cancelSearchByTap;
- (id)convertFavDataToSimpleInfo:(id)arg1 inItem:(id)arg2;
- (void)dealloc;
- (void)doSearch;
- (void)doSearchByFilter;
- (void)genFilterCellView:(id)arg1 indexPath:(id)arg2;
- (double)getContentViewY;
- (id)getFavForawrdViewController;
- (double)getVisibleHeight;
- (void)hideKeyboardOnScroll;
- (void)hideSearchBarBkgView;
- (void)initFastBrowserView;
- (void)initFilterFooterView;
- (id)initWithViewController:(id)arg1 SuperView:(id)arg2 ShowEditBtn:(_Bool)arg3;
- (_Bool)isSearchActive;
- (void)keyboardDidShow:(id)arg1;
@property(nonatomic) _Bool m_bUseFilter; // @synthesize m_bUseFilter=_m_bUseFilter;
@property(nonatomic) __weak id <FavSearchControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_searchText; // @synthesize m_searchText;
@property(retain, nonatomic) NSString *m_tagText; // @synthesize m_tagText;
- (id)messageWrapsForMsgFastBrowseView:(id)arg1;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (_Bool)msgFastBrowseView:(id)arg1 willChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onEdit;
- (void)onFavFullScreenImageViewHide;
- (void)onForward;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (void)onViewBePoped;
- (void)onViewControllerBeDeleted;
- (void)relayoutSubviews;
- (void)resetStatusBarStyle;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateFastBrowserData;
- (void)updateSearchFieldText;
- (void)visitViews:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

