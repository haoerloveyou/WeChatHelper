//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IFavoritesExt.h"
#import "UITextViewDelegate.h"

@class FavoritesItem, NSString, POIInfo, UIImageView, UILabel, UITextView;

@interface FavLocationRemarkViewController : MMUIViewController <IFavoritesExt, UITextViewDelegate>
{
    FavoritesItem *m_favItem;
    POIInfo *m_locInfo;
    UIImageView *m_textBkgView;
    UITextView *m_textView;
    UIImageView *m_locImg;
    UILabel *m_poiLabel;
    UILabel *m_placeholderLabel;
    id <FavLocRemarkDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)OnUpdateItemRemark:(unsigned int)arg1 ErrCode:(int)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)initLeftBtn;
- (void)initRightBtn;
- (void)initView;
- (id)initWithFavItem:(id)arg1;
- (id)initWithLocInfo:(id)arg1;
@property(nonatomic) __weak id <FavLocRemarkDelegate> m_delegate; // @synthesize m_delegate;
- (void)onCancel;
- (void)onFavLocRemarkComplete;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)updateTextViewSize;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

