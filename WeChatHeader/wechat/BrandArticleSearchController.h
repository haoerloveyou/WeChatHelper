//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BrandArticleSearchLogicDelegateForController.h"
#import "MMSearchBarDelegate.h"

@class BrandArticleSearchLogic, BrandArticleSearchResultLogic, BrandArticleSearchResultView, MMSearchBar, NSString;

@interface BrandArticleSearchController : NSObject <MMSearchBarDelegate, BrandArticleSearchLogicDelegateForController>
{
    MMSearchBar *m_searchBar;
    BrandArticleSearchLogic *m_logic;
    BrandArticleSearchResultView *m_resultView;
    BrandArticleSearchResultLogic *m_resultLogic;
    id <BrandArticleSearchControllerDelegate> m_delegate;
}

+ (_Bool)isOpenSearchEntry;
- (void).cxx_destruct;
- (void)clearResultView;
- (id)currentViewController;
- (void)dealloc;
- (void)hideKeyboardForSearchBar;
- (void)hideResultView;
- (void)hideSearchBarDimView;
- (void)hideSearchBarResultView;
- (id)initWithViewController:(id)arg1 tableView:(id)arg2;
@property(nonatomic) __weak id <BrandArticleSearchControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)mmSearchBarTextDidChange:(id)arg1;
- (void)mmSearchDisplayControllerDidBeginSearch;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)mmSearchDisplayControllerWillEndSearch;
- (void)mmsearchBarSearchButtonClicked:(id)arg1;
- (_Bool)mmsearchBarShouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(id)arg2;
- (void)mmsearchBarTextDidBeginEditing:(id)arg1;
- (void)onClearSearchText;
- (void)onExitSearch;
- (void)onOpenBrandProfile:(id)arg1 withParams:(id)arg2;
- (void)onOpenMsgSession:(id)arg1;
- (void)onOpenUrl:(id)arg1 withParams:(id)arg2;
- (void)onSetSearchText:(id)arg1;
- (void)onViewDidBePoped;
- (void)onViewDidPop;
- (void)onViewWillBePushed;
- (void)openBrandProfile:(id)arg1 withParams:(id)arg2;
- (void)openMsgSession:(id)arg1;
- (void)openWebViewForUrl:(id)arg1 withParams:(id)arg2;
- (void)removeCustomView;
- (void)resetResultViewSuperView;
- (void)resetStatusBarFontColor;
- (double)searchBarBottomYPosToView:(id)arg1;
- (void)setupResultView;
- (void)showResultView;
- (void)visitViewToHideDimView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

