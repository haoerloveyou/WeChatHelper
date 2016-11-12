//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "IWCShareCardPkgExt.h"
#import "WCGroupTagViewControllerDelegate.h"

@class MMLoadingView, MMUILabel, NSArray, NSMutableArray, NSString, UIButton, UIImageView, UIScrollView, WCShareCardData;

@interface WCNewShareCardConsumedView : MMUIView <IWCShareCardPkgExt, WCGroupTagViewControllerDelegate>
{
    double _enterTimeForState;
    _Bool _followCheckBoxSelected;
    _Bool _bIsStatusBarBlack;
    _Bool _isSelectTagGroup;
    int _fromScene;
    id <WCNewShareCardConsumedViewDelegate> _delegate;
    NSArray *_shareCardTPInfoList;
    WCShareCardData *_curShareCardData;
    NSString *_consumedBoxId;
    NSString *_subAppUserName;
    NSString *_subAppWording;
    NSString *_retMsg;
    UIScrollView *_contentView;
    MMUIView *_topContainerView;
    MMUIView *_bottomContainerView;
    MMUIView *_whoCanSeeContainerView;
    MMUIView *_shareInfoContainerView;
    UIButton *_closeBtn;
    UIImageView *_line1ImageView;
    UIImageView *_line2ImageView;
    MMLoadingView *_loadingViewX;
    MMUILabel *_whoCanSeeResultLabel;
    NSMutableArray *_arrGroupUser;
    NSMutableArray *_arrBlackUser;
    NSMutableArray *_arrGroupUserLabelID;
    NSMutableArray *_arrBlackUserLabelID;
}

- (void).cxx_destruct;
- (void)GroupTagViewControllerWillDissappear;
@property(retain, nonatomic) NSMutableArray *arrBlackUser; // @synthesize arrBlackUser=_arrBlackUser;
@property(retain, nonatomic) NSMutableArray *arrBlackUserLabelID; // @synthesize arrBlackUserLabelID=_arrBlackUserLabelID;
@property(retain, nonatomic) NSMutableArray *arrGroupUser; // @synthesize arrGroupUser=_arrGroupUser;
@property(retain, nonatomic) NSMutableArray *arrGroupUserLabelID; // @synthesize arrGroupUserLabelID=_arrGroupUserLabelID;
@property(nonatomic) _Bool bIsStatusBarBlack; // @synthesize bIsStatusBarBlack=_bIsStatusBarBlack;
@property(retain, nonatomic) MMUIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
- (void)clickWhoCanSeeBtn:(id)arg1;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
- (void)closeConsumedView;
@property(retain, nonatomic) NSString *consumedBoxId; // @synthesize consumedBoxId=_consumedBoxId;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) WCShareCardData *curShareCardData; // @synthesize curShareCardData=_curShareCardData;
- (void)dealloc;
@property(nonatomic) __weak id <WCNewShareCardConsumedViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool followCheckBoxSelected; // @synthesize followCheckBoxSelected=_followCheckBoxSelected;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
- (void)initBottomContainerView;
- (void)initNormalView;
- (void)initShareInfoContainerView;
- (void)initTopContainerViewWithError:(_Bool)arg1;
- (void)initView;
- (void)initWhoCanSeeEntranceView;
- (id)initWithFrame:(struct CGRect)arg1 withConsumedInfo:(id)arg2 consumedCardID:(id)arg3 consumedBoxId:(id)arg4 subscribeAppUserName:(id)arg5 subscribeWording:(id)arg6 fromScene:(int)arg7 retMsg:(id)arg8;
@property(nonatomic) _Bool isSelectTagGroup; // @synthesize isSelectTagGroup=_isSelectTagGroup;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImageView *line1ImageView; // @synthesize line1ImageView=_line1ImageView;
@property(retain, nonatomic) UIImageView *line2ImageView; // @synthesize line2ImageView=_line2ImageView;
@property(retain, nonatomic) MMLoadingView *loadingViewX; // @synthesize loadingViewX=_loadingViewX;
- (void)onAttentionBtnClicked:(id)arg1;
- (void)onCloseBtnClicked:(id)arg1;
- (void)onShareBtnClicked:(id)arg1;
- (void)onShareCard:(id)arg1 TpID:(id)arg2 andCardInfo:(id)arg3;
@property(retain, nonatomic) NSString *retMsg; // @synthesize retMsg=_retMsg;
@property(retain, nonatomic) NSArray *shareCardTPInfoList; // @synthesize shareCardTPInfoList=_shareCardTPInfoList;
@property(retain, nonatomic) MMUIView *shareInfoContainerView; // @synthesize shareInfoContainerView=_shareInfoContainerView;
@property(retain, nonatomic) NSString *subAppUserName; // @synthesize subAppUserName=_subAppUserName;
@property(retain, nonatomic) NSString *subAppWording; // @synthesize subAppWording=_subAppWording;
@property(retain, nonatomic) MMUIView *topContainerView; // @synthesize topContainerView=_topContainerView;
@property(retain, nonatomic) MMUIView *whoCanSeeContainerView; // @synthesize whoCanSeeContainerView=_whoCanSeeContainerView;
@property(retain, nonatomic) MMUILabel *whoCanSeeResultLabel; // @synthesize whoCanSeeResultLabel=_whoCanSeeResultLabel;
- (void)showConsumedViewWithAnimation:(_Bool)arg1 isStatusBarBlack:(_Bool)arg2;
- (void)startLoadingBlocked;
- (void)startLoadingNonBlock;
- (void)startLoadingWithText:(id)arg1;
- (void)stopLoading;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

