//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class ShakeBeaconItem;

@interface ShakeBeaconSingleView : MMUIView
{
    id <ShakeBeaconSingleViewDelegate> _delegate;
    ShakeBeaconItem *_item;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ShakeBeaconSingleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithBeaconInfo:(id)arg1;
@property(retain, nonatomic) ShakeBeaconItem *item; // @synthesize item=_item;
- (void)onClickHeadImageView:(id)arg1;
- (void)onSelectView:(id)arg1;
- (void)showAnimation;
- (void)stopAnimation;

@end

