//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "IMMGrowTextViewExt.h"
#import "InputControllerDelegate.h"
#import "MMGrowTextViewDelegate.h"

@class EmoticonBoardView, MMGrowTextView, NSMutableArray, NSString, UIButton, UIImageView, UIView, WCInputController, WCOutFeedbackCgi;

@interface WCOFeedBackTips : MMWindowViewController <MMGrowTextViewDelegate, InputControllerDelegate, IMMGrowTextViewExt>
{
    _Bool _hasInputSth;
    int _roomid;
    UIView *_starView;
    UIView *_feedWordingSubView;
    UIView *_inviteView;
    UIImageView *_backgroundView;
    double _tipsHeight;
    UIButton *_backgroundBtn;
    double _feedWordingSubViewHeight;
    NSMutableArray *_starBtnArr;
    NSMutableArray *_wordingBtnArr;
    UIView *_bottomBtnView;
    UIImageView *_inputView;
    EmoticonBoardView *_moticonBoardView;
    UIButton *_expressionButton;
    MMGrowTextView *_textView;
    UIView *_textBackgroundImage;
    WCInputController *_inputController;
    NSMutableArray *_resitemArr;
    long long _currStarTag;
    NSString *_defaultShowText;
    WCOutFeedbackCgi *_cgi;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
@property(retain, nonatomic) UIButton *backgroundBtn; // @synthesize backgroundBtn=_backgroundBtn;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)becomeInput;
@property(retain, nonatomic) UIView *bottomBtnView; // @synthesize bottomBtnView=_bottomBtnView;
@property(retain, nonatomic) WCOutFeedbackCgi *cgi; // @synthesize cgi=_cgi;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) long long currStarTag; // @synthesize currStarTag=_currStarTag;
@property(retain, nonatomic) NSString *defaultShowText; // @synthesize defaultShowText=_defaultShowText;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) UIView *feedWordingSubView; // @synthesize feedWordingSubView=_feedWordingSubView;
@property(nonatomic) double feedWordingSubViewHeight; // @synthesize feedWordingSubViewHeight=_feedWordingSubViewHeight;
- (id)genBackgroundView;
- (id)genNewBigButton;
- (id)getInputText;
@property(nonatomic) _Bool hasInputSth; // @synthesize hasInputSth=_hasInputSth;
- (id)init;
- (void)initBottomButtons;
- (void)initData;
- (void)initInputController;
- (void)initInputToolView;
- (void)initInputView;
- (void)initInviteView;
- (void)initStarView;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) UIImageView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIView *inviteView; // @synthesize inviteView=_inviteView;
- (void)keyboardDidHide;
- (void)keyboardWillShow;
@property(retain, nonatomic) EmoticonBoardView *moticonBoardView; // @synthesize moticonBoardView=_moticonBoardView;
- (void)onCancelFeedback;
- (void)onCancelInvite;
- (void)onClickStarBtn:(id)arg1;
- (void)onClickWordingBtn:(id)arg1;
- (void)onConfirm;
- (void)onDoInvite;
- (void)onHideView:(id)arg1;
- (void)parseConfigXml:(id)arg1;
- (void)resignInput;
@property(retain, nonatomic) NSMutableArray *resitemArr; // @synthesize resitemArr=_resitemArr;
@property(nonatomic) int roomid; // @synthesize roomid=_roomid;
@property(retain, nonatomic) NSMutableArray *starBtnArr; // @synthesize starBtnArr=_starBtnArr;
@property(retain, nonatomic) UIView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UIView *textBackgroundImage; // @synthesize textBackgroundImage=_textBackgroundImage;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) double tipsHeight; // @synthesize tipsHeight=_tipsHeight;
@property(retain, nonatomic) NSMutableArray *wordingBtnArr; // @synthesize wordingBtnArr=_wordingBtnArr;
- (void)showLoadingOk;
- (void)textViewTextDidChange;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

