//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MonoServiceMsg.h"

@class NSString, UILocalNotification, WXCMultiTalkGroup;

@interface MultiTalkMonoMsg : MonoServiceMsg
{
    _Bool m_isCancelMsg;
    WXCMultiTalkGroup *_m_group;
    NSString *_m_fromUser;
    UILocalNotification *_m_notification;
    unsigned long long _m_msgReceiveTime;
}

+ (id)cancelMsg;
+ (id)getInviteUserFromGroup:(id)arg1;
+ (id)inviteMsg;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (_Bool)isCancelMsg;
- (_Bool)isOutOfDate;
- (_Bool)isParaVaild;
- (_Bool)isTheSameToMsg:(id)arg1;
- (id)localNotification;
@property(retain, nonatomic) NSString *m_fromUser; // @synthesize m_fromUser=_m_fromUser;
@property(retain, nonatomic) WXCMultiTalkGroup *m_group; // @synthesize m_group=_m_group;
@property(nonatomic) _Bool m_isCancelMsg; // @synthesize m_isCancelMsg;
@property(nonatomic) unsigned long long m_msgReceiveTime; // @synthesize m_msgReceiveTime=_m_msgReceiveTime;
@property(retain, nonatomic) UILocalNotification *m_notification; // @synthesize m_notification=_m_notification;
- (id)msgKey;
- (id)serviceType;

@end

