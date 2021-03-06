//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class MMDelegateProxy<MultiTalkSessionDetailLogicControllerDelegate>, MultiTalkSessionItem, NSArray;

@interface MultiTalkSessionDetailLogicController : MMObject
{
    MMDelegateProxy<MultiTalkSessionDetailLogicControllerDelegate> *_delegate;
    MultiTalkSessionItem *_sessionItem;
    NSArray *_sessionMemberArray;
    NSArray *_sessionMesssageArray;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak MMDelegateProxy<MultiTalkSessionDetailLogicControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)getSessionMemberList;
- (id)getSessionMessageList;
- (void)handleStartMultiTalk;
- (void)initData;
- (id)initWithSessionItem:(id)arg1;
- (long long)numberOfMemberListCount;
- (long long)numberOfMessageListCount;
@property(retain, nonatomic) MultiTalkSessionItem *sessionItem; // @synthesize sessionItem=_sessionItem;
@property(retain, nonatomic) NSArray *sessionMemberArray; // @synthesize sessionMemberArray=_sessionMemberArray;
@property(retain, nonatomic) NSArray *sessionMesssageArray; // @synthesize sessionMesssageArray=_sessionMesssageArray;

@end

