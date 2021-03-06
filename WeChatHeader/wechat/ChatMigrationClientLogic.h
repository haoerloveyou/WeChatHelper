//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ChatMigrationClientDataProcessMgrDelegate.h"
#import "ChatMigrationGetConnectInfoDelegate.h"
#import "LocalAreaNetworkClientDelegate.h"

@class ChatMigrationClientDataProcessMgr, ChatMigrationGetConnectInfo, GetConnectInfoResponse, LocalAreaNetworkClient, MMTimer, NSString;

@interface ChatMigrationClientLogic : MMObject <LocalAreaNetworkClientDelegate, ChatMigrationGetConnectInfoDelegate, ChatMigrationClientDataProcessMgrDelegate>
{
    ChatMigrationClientDataProcessMgr *m_DataProcMgr;
    LocalAreaNetworkClient *m_NetworkHandle;
    ChatMigrationGetConnectInfo *m_GetConnectInfoHandle;
    GetConnectInfoResponse *m_cacheInfoRes;
    MMTimer *m_transferSpeedTimer;
    id <ChatMigrationClientLogicDelegate> m_delegate;
    unsigned long long uiChatMigrationTotalSize;
    NSString *nsRemoteWifiName;
}

- (void).cxx_destruct;
- (void)GetConnectInfo:(id)arg1;
- (void)checkTransferSpeed;
- (void)dealloc;
- (_Bool)getLocalDiskCheckResult:(unsigned long long)arg1;
- (id)init;
- (_Bool)isClientInResumeState;
- (_Bool)isEnoughDiskSize:(unsigned long long)arg1;
- (_Bool)isSameAccount:(id)arg1;
- (_Bool)isSameNetGateWay:(id)arg1;
- (_Bool)isSameWifi:(id)arg1;
- (_Bool)isServerSupportReScanQRCode;
- (_Bool)isSupportKVUpload;
@property(nonatomic) __weak id <ChatMigrationClientLogicDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *nsRemoteWifiName; // @synthesize nsRemoteWifiName;
- (void)onDisconnect;
- (void)onGetConnectInfo:(id)arg1;
- (void)onNotifyEvent:(int)arg1;
- (void)onProcError:(int)arg1;
- (void)onReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)onSendData:(id)arg1;
- (void)onSizeNoGrow;
- (void)onTransferProgress:(unsigned int)arg1 procSize:(unsigned int)arg2;
@property(nonatomic) unsigned long long uiChatMigrationTotalSize; // @synthesize uiChatMigrationTotalSize;
- (void)startClientService:(id)arg1;
- (_Bool)startClientServiceWithIP:(id)arg1 andPort:(unsigned short)arg2;
- (void)stopClientService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

