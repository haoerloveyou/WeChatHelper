//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, MMHeadImageView, NSString, UIImage, UIImageView;

@interface FindContactSearchCell : MMTableViewCell
{
    NSString *_searchText;
    NSString *_userName;
    NSString *_displayName;
    NSString *_detail;
    UIImage *_headImage;
    MMHeadImageView *_headImageView;
    UIImageView *_imageView;
    AttributeLabel *_displayNameLabel;
    AttributeLabel *_detailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void)updateSearchCellWithSearchText:(id)arg1;
- (void)updateStatus:(_Bool)arg1;
- (void)updateWithImage:(id)arg1 displayName:(id)arg2 detail:(id)arg3 searchText:(id)arg4;
- (void)updateWithUserName:(id)arg1 displayName:(id)arg2 detail:(id)arg3 searchText:(id)arg4;

@end

