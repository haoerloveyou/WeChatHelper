//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface WCPayOfflineUpdatedTipsView : UIView
{
    UILabel *_tipsLabel;
    UIImageView *_tipsIcon;
    unsigned long long _type;
}

- (void).cxx_destruct;
- (void)changeTypeToNormalAfterSeconds:(long long)arg1;
- (void)commonInit;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) UIImageView *tipsIcon; // @synthesize tipsIcon=_tipsIcon;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)setType:(unsigned long long)arg1 andChangeBackToNormalLater:(_Bool)arg2;

@end

