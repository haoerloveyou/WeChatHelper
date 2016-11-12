//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "MMSearchBarDelegate.h"
#import "MMVoiceSearchDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMLoadingView, MMTableView, MMVoiceSearchBar, NSObject<MemberDataLogicProtocol>, NSString, UILabel, UIView;

@interface MemberListViewController : MMSearchBarDisplayController <UITableViewDataSource, UITableViewDelegate, MMSearchBarDelegate, MMVoiceSearchDelegate, UIAlertViewDelegate>
{
    MMLoadingView *m_loadingView;
    MMTableView *m_tableView;
    UIView *m_viewLabel;
    UILabel *m_countLabel;
    NSObject<MemberDataLogicProtocol> *m_memberData;
    id <MemberDataDelegate> m_delegate;
    MMVoiceSearchBar *m_mmSearchBar;
    _Bool m_needIndexBar;
}

- (void).cxx_destruct;
- (void)cancelSearch;
- (id)cellForHandleVoiceSearchViewTable:(id)arg1 index:(id)arg2;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)dealloc;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (_Bool)handleVoiceSearchResults:(id)arg1;
- (_Bool)hasIndexBar;
- (double)heightForSearchViewTable:(id)arg1;
- (id)init;
- (void)initCountLabel:(id)arg1;
- (void)initSearchBar;
- (void)initTableView;
- (void)makeCell:(id)arg1 contact:(id)arg2;
@property(nonatomic) _Bool needIndexBar; // @synthesize needIndexBar=m_needIndexBar;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)openContactInfoView:(int)arg1;
- (void)pushVoiceSearchResultsViewController:(id)arg1 Animation:(_Bool)arg2;
- (void)reloadTable;
- (void)resetTableViewOffset:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMemberLogic:(id)arg1;
- (void)showContactInfoView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateCount;
- (id)usrNameConvertToOContacts:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

