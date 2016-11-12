//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class CContact, MMHeadImageView, UIImageView, UILabel;

@interface SightDistributeTableItemView : MMUIView
{
    CContact *m_contact;
    MMHeadImageView *m_headImage;
    UILabel *m_nickNameLabel;
    UILabel *m_descLabel;
    UIImageView *m_checkBtn;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)getDescText;
- (void)initCheckBtn;
- (void)initDescLabel:(id)arg1;
- (void)initHeadImage:(id)arg1 withUrl:(id)arg2;
- (void)initNickNameLabel:(id)arg1;
- (void)initTextArea;
- (id)initWithContact:(id)arg1 andFrame:(struct CGRect)arg2;
- (void)switchToSelected;
- (void)switchToUnselected;

@end

