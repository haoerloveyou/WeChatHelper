//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "PBMessageObserverDelegate.h"

@class CContact, JSEvent, MMLoadingView, NSString, UIButton, UIImageView;

@interface MMWebAddContactView : MMUIView <PBMessageObserverDelegate>
{
    NSString *m_nsUsrName;
    JSEvent *m_nsCallBack;
    id <WebAddContactDelegate> m_delegate;
    int m_scene;
    MMLoadingView *m_loadingView;
    UIButton *m_btnConfirm;
    UIButton *m_btnCancel;
    UIButton *m_btnRetry;
    UIButton *m_btnAdd;
    UIImageView *m_backgroundView;
    CContact *m_oContact;
}

- (void).cxx_destruct;
- (void)CreateSearch;
- (void)CreateVerify;
- (void)HandleContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnAdd;
- (void)OnAddOk;
- (void)OnCancel;
- (void)OnConfirm;
- (void)UpdateView:(unsigned int)arg1;
- (void)dealloc;
- (void)initView;
- (id)initWithUsrName:(id)arg1 CallBack:(id)arg2;
- (void)layoutSubviewToOrientation:(long long)arg1;
@property(nonatomic) __weak id <WebAddContactDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) int m_scene; // @synthesize m_scene;

@end

