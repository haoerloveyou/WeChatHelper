//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"
#import "WCCommitViewResultDelegate.h"

@class FavDataItemWrap, MMLoadingView, NSString, UIViewController;

@interface FavForwardToSNSLogicController : MMObject <PBMessageObserverDelegate, WCCommitViewResultDelegate>
{
    FavDataItemWrap *m_favDataWrap;
    UIViewController *m_curViewController;
    MMLoadingView *m_loadingView;
    id <FavForwardToSNSLogicDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)HandleShareFav:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ShareFail;
- (void)ShareWCUploadTask:(id)arg1;
- (void)ShareWithUrl:(id)arg1;
- (void)ShowShareFail;
- (void)forwardFavDataToSns:(id)arg1;
- (void)getVideoShareUrlForSNS;
- (id)initWithViewController:(id)arg1;
@property(retain, nonatomic) UIViewController *m_curViewController; // @synthesize m_curViewController;
@property(nonatomic) __weak id <FavForwardToSNSLogicDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) FavDataItemWrap *m_favDataWrap; // @synthesize m_favDataWrap;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)showLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

