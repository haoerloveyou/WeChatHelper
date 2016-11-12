//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMLSSessionItem, UIImageView, UILabel;

@interface WXGBackupSessionItemCell : MMTableViewCell
{
    UIImageView *_selectedImage;
    UIImageView *_resourceIcon;
    UILabel *_sourceLabel;
    MMLSSessionItem *_sessionItem;
}

- (void).cxx_destruct;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UIImageView *resourceIcon; // @synthesize resourceIcon=_resourceIcon;
@property(retain, nonatomic) UIImageView *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(readonly, nonatomic) MMLSSessionItem *sessionItem; // @synthesize sessionItem=_sessionItem;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
- (void)updateSessionItem:(id)arg1 selected:(_Bool)arg2;

@end

