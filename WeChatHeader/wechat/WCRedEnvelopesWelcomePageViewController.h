//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCRedEnvelopesBaseViewController.h"

@interface WCRedEnvelopesWelcomePageViewController : WCRedEnvelopesBaseViewController
{
    id <WCRedEnvelopesWelcomePageViewControllerDelegate> m_delegate;
    _Bool m_bDidBack;
}

- (void).cxx_destruct;
- (void)OnClickBannerActivity;
- (void)OnClickHeadActivity;
- (void)OnClickTailActivity;
- (void)OnLeftBarButtonDone;
- (id)init;
- (void)initNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;

@end

