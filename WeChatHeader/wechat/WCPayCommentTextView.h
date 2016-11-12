//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RichTextView.h"

#import "ILinkEventExt.h"

@class NSString;

@interface WCPayCommentTextView : RichTextView <ILinkEventExt>
{
    unsigned int _m_maxCommentLength;
    id <WCPayCommentTextViewDelegate> _m_alertDelegate;
    NSString *_m_comment;
    NSString *_m_initComment;
    NSString *_m_modifyComment;
    NSString *_m_inputTitle;
}

- (void).cxx_destruct;
- (void)cancelComment:(id)arg1;
- (id)commentText;
- (void)confirmComment:(id)arg1;
- (id)init;
@property(nonatomic) __weak id <WCPayCommentTextViewDelegate> m_alertDelegate; // @synthesize m_alertDelegate=_m_alertDelegate;
@property(retain, nonatomic) NSString *m_comment; // @synthesize m_comment=_m_comment;
@property(retain, nonatomic) NSString *m_initComment; // @synthesize m_initComment=_m_initComment;
@property(retain, nonatomic) NSString *m_inputTitle; // @synthesize m_inputTitle=_m_inputTitle;
@property(nonatomic) unsigned int m_maxCommentLength; // @synthesize m_maxCommentLength=_m_maxCommentLength;
@property(retain, nonatomic) NSString *m_modifyComment; // @synthesize m_modifyComment=_m_modifyComment;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateComment:(id)arg1;
- (void)updateCommentMaxLength:(unsigned int)arg1;
- (void)updateContent;
- (void)updateInitComment:(id)arg1;
- (void)updateInputTitle:(id)arg1;
- (void)updateModifyComment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

