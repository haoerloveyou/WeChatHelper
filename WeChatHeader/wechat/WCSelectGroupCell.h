//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMUILabel, UIImageView, UIView;

@interface WCSelectGroupCell : MMTableViewCell
{
    UIImageView *leftCheckMark;
    UIImageView *rightArrowView;
    UIView *lineView;
    UIView *headLineView;
    MMUILabel *nameLabel;
    MMUILabel *memberLabel;
    _Bool blackMode;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool blackMode; // @synthesize blackMode;
- (id)getMemberDesc:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateCell:(int)arg1 postPrivacy:(int)arg2 labelName:(id)arg3 checked:(_Bool)arg4 expandMode:(_Bool)arg5;

@end

