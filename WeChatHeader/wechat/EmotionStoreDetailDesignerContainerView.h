//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EmotionButtonWithClickState.h"

@class MMWebImageView, PersonalDesigner, UIActivityIndicatorView, UILabel, UIView;

@interface EmotionStoreDetailDesignerContainerView : EmotionButtonWithClickState
{
    UIView *m_contentView;
    MMWebImageView *m_designerHeaderView;
    UILabel *m_designerNameLabel;
    UILabel *m_designerPageLabel;
    UIActivityIndicatorView *m_loadingView;
    UIView *m_lineInTop;
    UIView *m_lineInBottom;
    PersonalDesigner *_personalDesigner;
}

+ (id)lineView;
- (void).cxx_destruct;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) PersonalDesigner *personalDesigner; // @synthesize personalDesigner=_personalDesigner;
- (void)setDesignerHeaderSideLen:(double)arg1;
- (void)setIsShowLineInTop:(_Bool)arg1 IsShowLineInBottom:(_Bool)arg2;
- (void)startLoading;
- (void)stopLoading;

@end

