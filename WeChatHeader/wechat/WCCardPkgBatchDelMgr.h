//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSMutableArray, WCCardPkgDB;

@interface WCCardPkgBatchDelMgr : MMObject <PBMessageObserverDelegate>
{
    WCCardPkgDB *_wccardPkgDB;
    NSMutableArray *_batchDelArray;
    id <WCCardPkgBatchDelMgrDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)addBatchDelWCCardList:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <WCCardPkgBatchDelMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleBatchDelWCCardResp:(id)arg1 Event:(unsigned int)arg2;
- (id)init;
- (void)initDB:(id)arg1;
- (void)tryStartBatchDel;

@end

