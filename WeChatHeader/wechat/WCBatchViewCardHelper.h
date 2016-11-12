//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IWCCardPkgExt.h"
#import "WCCardListViewControllerDelegate.h"
#import "WCNewCardDetailViewControllerDelegate.h"

@class MMUIViewController, NSMutableArray, NSString;

@interface WCBatchViewCardHelper : MMObject <IWCCardPkgExt, WCNewCardDetailViewControllerDelegate, WCCardListViewControllerDelegate>
{
    NSString *_templateMsgId;
    NSMutableArray *_aryCardData;
    MMUIViewController *_currViewController;
    id <WCBatchViewCardHelpDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *aryCardData; // @synthesize aryCardData=_aryCardData;
@property(retain, nonatomic) MMUIViewController *currViewController; // @synthesize currViewController=_currViewController;
- (void)dealloc;
@property(nonatomic) __weak id <WCBatchViewCardHelpDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleCardTpInfoList:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)onGetCardsItemByTpInfo:(id)arg1 ErrCode:(int)arg2;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)onWCCardDetailViewControllerCancel:(id)arg1;
- (void)onWCCardListViewControllerCancel:(id)arg1;
- (void)onWCCardListViewControllerDidSelected:(id)arg1 listViewController:(id)arg2;
@property(retain, nonatomic) NSString *templateMsgId; // @synthesize templateMsgId=_templateMsgId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

