//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ForwardMessageLogicController, UIViewController;

@protocol ForwardMessageLogicDelegate <NSObject>
- (UIViewController *)getCurrentViewController;

@optional
- (void)OnForwardMessageBackToApp:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageCancel:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageException:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageSend:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageStayAtWeChat:(ForwardMessageLogicController *)arg1;
@end

