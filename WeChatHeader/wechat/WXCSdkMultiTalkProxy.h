//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IWXTalkExt.h"

@class NSString;

@interface WXCSdkMultiTalkProxy : NSObject <IWXTalkExt>
{
    NSString *_tmpUniqueID;
    NSString *_mUserName;
    long long _mUin;
}

- (void).cxx_destruct;
- (void)OnBeginStartDevice;
- (void)OnCreateTalkModeOKWithGroupId:(id)arg1;
- (void)OnDataConnectOK;
- (void)OnDeviceStartOK;
- (void)OnEnterTalkModeOK:(id)arg1;
- (void)OnError:(id)arg1 errorType:(int)arg2 errorNo:(int)arg3;
- (void)OnInviteWXTalkModeResult:(_Bool)arg1 groupId:(id)arg2;
- (void)OnMuteStateChange:(_Bool)arg1;
- (void)OnReceiveOtherMemberTalkData;
- (void)OnRoomMemberChange:(id)arg1;
- (void)OnSelfAndOtherEntered;
- (void)OnSpeakerStateChange:(_Bool)arg1;
- (void)OnSysCallNotifyInterrupt:(int)arg1;
- (void)OnVideoStateChange:(_Bool)arg1 VideoOn:(_Bool)arg2;
- (int)VideoEncAndSend:(char *)arg1 Length:(unsigned int)arg2 Format:(void *)arg3 resolutionMode:(int)arg4 cameraMode:(int)arg5;
- (_Bool)addMultiTalkMemberToCurTalk:(id)arg1 wxGroupId:(id)arg2 addMemberList:(id)arg3;
- (_Bool)closeVideoRecvAndSend;
- (id)convertGroupInfoItemListToGroupBriefInfoList:(id)arg1;
- (void)dealloc;
- (_Bool)enterCurMultiTalk:(id)arg1 routId:(int)arg2 isAnswerCall:(_Bool)arg3;
- (_Bool)exitCurMultiTalk:(id)arg1;
- (id)genMultiTalkClientGroupId;
- (long long)getCurMultiTalkUin;
- (id)getCurMultiTalkUserName;
- (_Bool)getSpeakerStatus;
- (id)getTalkIngMember:(id)arg1;
- (id)getWXCMultiTalkGroupWithRoomData:(id)arg1;
- (id)getWXCMultiTalkMemberListWithVoiceGroupMemList:(id)arg1;
- (_Bool)holdMultiTalk:(_Bool)arg1 holdType:(int)arg2;
- (id)init;
- (_Bool)isMultiTalkWorking;
@property(nonatomic) long long mUin; // @synthesize mUin=_mUin;
@property(copy, nonatomic) NSString *mUserName; // @synthesize mUserName=_mUserName;
- (_Bool)modifyCutomMultiTalkGroupId:(id)arg1 grpName:(id)arg2;
- (void)onCancelCreateMultiTalk:(id)arg1;
- (void)onInviteMultiTalk:(id)arg1;
- (void)onMultiTalkAudioDevicePlugin;
- (void)onMultiTalkAudioDeviceUnPlugin;
- (void)onMultiTalkRedirectOk;
- (void)onOtherDeviceHandleTalk:(id)arg1;
- (void)onReceiveMissMultiTalk:(id)arg1;
- (void)onReceiveReawakeOrPokerMessage:(id)arg1 extData:(id)arg2;
- (void)onReceiveVideoMemberChangeMessage:(id)arg1 extArray:(id)arg2;
- (void)onRespActiveGroupInfoItemList:(id)arg1 isSuccess:(_Bool)arg2;
- (void)onRespPokerOrResumeFriend:(id)arg1 isSuccess:(_Bool)arg2;
- (void)onVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(_Bool)arg5;
- (_Bool)rejectMultiTalk:(id)arg1;
- (_Bool)requestActiveGroupBriefInfoList:(id)arg1;
- (_Bool)sendResumeFriendOrSendPokerToFriend:(id)arg1 friendUserName:(id)arg2 extData:(id)arg3;
- (void)setCurMuteTalkInfo:(id)arg1 uin:(long long)arg2;
- (_Bool)setMute:(_Bool)arg1;
- (_Bool)setSpeaker:(_Bool)arg1;
@property(copy, nonatomic) NSString *tmpUniqueID; // @synthesize tmpUniqueID=_tmpUniqueID;
- (_Bool)setVideo:(_Bool)arg1;
- (_Bool)startCreateMultiTalk:(id)arg1 wxGroupId:(id)arg2 memberList:(id)arg3;

@end

