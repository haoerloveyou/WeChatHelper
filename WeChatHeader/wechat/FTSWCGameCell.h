//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, GameSearchItem, MMWebImageView, NSMutableArray, NSString;

@interface FTSWCGameCell : MMTableViewCell
{
    GameSearchItem *_wcgameItem;
    MMWebImageView *_iconView;
    AttributeLabel *_titleLabel;
    AttributeLabel *_descLabel;
    NSMutableArray *_arrKeyword;
    NSString *_searchText;
}

- (void).cxx_destruct;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void)updateStatus:(_Bool)arg1;
- (void)updateWCGameItem:(id)arg1 keywords:(id)arg2;

@end

