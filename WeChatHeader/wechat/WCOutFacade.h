//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IFriendListMgrExt.h"
#import "IMMWebViewControllerDeepLinkExt.h"
#import "IMsgExt.h"
#import "IRecordPermissionCheckExt.h"
#import "IVOIPExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "IWCOutCallExt.h"
#import "MMService.h"
#import "MMTipsViewControllerDelegate.h"
#import "MonoServiceMsgLogicDelegate.h"
#import "WCOutAddressBookLogicDelegate.h"

@class MMTimer, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, OrderedDictionary, PhoneNumberFormatLogic, WCOFeedBackTips, WCOutAddressBookLogic, WCOutCallLogic, WCOutChargeLogic, WCOutCountryCodeLogic, WCOutDataBase;

@interface WCOutFacade : MMService <IFriendListMgrExt, IWCOutCallExt, IMsgExt, IMMWebViewControllerDeepLinkExt, IVOIPUILogicMgrExt, WCOutAddressBookLogicDelegate, MonoServiceMsgLogicDelegate, MMTipsViewControllerDelegate, IVOIPExt, IRecordPermissionCheckExt, MMService>
{
    NSMutableDictionary *m_hotCountryCodeDic;
    OrderedDictionary *m_lastCallItemOrderDic;
    NSMutableArray *m_wcoutContactItemArray;
    NSMutableDictionary *m_phoneNumToWCOutContact;
    unsigned int m_lastDownloadMFriendListTime;
    unsigned int m_lastReportContactTime;
    unsigned int _showTimesWcoMainFromVoip;
    unsigned int _showTimesFeedback;
    PhoneNumberFormatLogic *_m_phoneNumberFormatLogic;
    WCOutCountryCodeLogic *_m_countryCodeLogic;
    WCOutAddressBookLogic *_m_addressBookLogic;
    WCOutDataBase *_m_dataBase;
    NSRecursiveLock *_m_oLock;
    MMTimer *_inviteTimer;
    WCOutChargeLogic *_chargeLogic;
    WCOutCallLogic *_callLogic;
    unsigned long long _showlastTsWcoMainFromVoip;
    unsigned long long _fromVoipType;
    WCOFeedBackTips *_feedbackTips;
    unsigned long long _showlastFeedbackTs;
}

+ (void)clearReddotWCOut;
+ (id)getEntranceWording;
+ (_Bool)isOpenWCOutPlugin;
+ (_Bool)isWCOSwitchOpen;
+ (_Bool)islocalNewUserReddotTypeWCOut;
+ (void)reportCallEntraceWithType:(unsigned long long)arg1;
+ (void)reportClickStatWithType:(unsigned long long)arg1;
+ (void)reportClickWithType:(unsigned long long)arg1;
+ (void)reportRestrictionCountryCode:(id)arg1;
+ (void)reportSearchReportType:(unsigned long long)arg1;
+ (void)reportTalkingClickStatWithType:(unsigned long long)arg1;
+ (void)reportWCOAccountPageOp:(id)arg1;
+ (void)reportWCOAutoVerify:(id)arg1;
+ (void)reportWCOEnterFromVoip:(id)arg1;
+ (void)reportWCOFeedbackOp:(id)arg1;
+ (void)reportWCOInviteFriendOp:(id)arg1;
+ (void)reportWCOPurchaseOp:(id)arg1;
+ (void)reportWCORechargePageOp:(id)arg1;
+ (void)reportWCORedDotStat:(unsigned long long)arg1 OperationReddotClickScene:(unsigned long long)arg2 NewUserReddotClickScene:(unsigned long long)arg3 AccountRedDotType:(int)arg4 WCOMsgType:(int)arg5;
+ (void)reportWCOShareOp:(id)arg1;
+ (void)reportWCOWhatsNew:(id)arg1;
+ (void)reportWechatOutIdKey:(unsigned long long)arg1;
+ (_Bool)showReddotWCOut;
+ (_Bool)showWCOut;
- (void).cxx_destruct;
- (id)GetCurCallItem;
- (id)GetCurPhoneContact;
- (id)GetHotCountryCodeDicLog;
- (id)GetNeedShowLog;
- (void)InternalCallWCoutContact:(id)arg1 FromViewController:(id)arg2 AndEntrance:(unsigned long long)arg3;
- (void)OnCallEndFinish;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnNoAnswer:(id)arg1;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)OnTimeOut:(id)arg1;
- (void)PhoneContactLoadedComplete;
- (void)PhoneContactLoadedFail;
- (void)accessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3;
- (_Bool)addressBookStatusIsDenied;
- (void)callFullPhoneNumber:(id)arg1 OfContact:(id)arg2 FromViewController:(id)arg3 AndEntrace:(unsigned long long)arg4 CountryCodeFrom:(unsigned long long)arg5;
@property(retain, nonatomic) WCOutCallLogic *callLogic; // @synthesize callLogic=_callLogic;
- (void)callPhoneNumber:(id)arg1 WithCountryCode:(id)arg2 FromViewController:(id)arg3 AndEntrance:(unsigned long long)arg4 CountryCodeFrom:(unsigned long long)arg5;
- (void)callWCOutCallItem:(id)arg1 FromViewController:(id)arg2 AndEntrance:(unsigned long long)arg3 CountryCodeFrom:(unsigned long long)arg4;
- (void)canAccessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3 Ret:(_Bool *)arg4 NeedCheckBitset:(_Bool *)arg5;
- (_Bool)canStartPSTN;
@property(retain, nonatomic) WCOutChargeLogic *chargeLogic; // @synthesize chargeLogic=_chargeLogic;
- (void)checkNumber:(id)arg1 PureNum:(id)arg2 LastCountryCode:(id)arg3 DialScece:(unsigned long long)arg4;
- (unsigned int)countOfCountryCodeStartWith:(id)arg1;
- (id)countryNameForCountryCode:(id)arg1;
- (id)countryNameForISOCountryCode:(id)arg1;
- (id)createWCOutRecentCallItemByCallItem:(id)arg1;
- (id)createWCOutRecentCallItemByFullPhoneNum:(id)arg1 CountryCode:(id)arg2 FromContact:(id)arg3;
- (void)dealloc;
- (id)defaultCoutryCode;
- (void)deleteLastCallWithPhoneNum:(id)arg1 WithCountryCode:(id)arg2;
- (_Bool)deleteRecentCallById:(int)arg1;
- (_Bool)deleteRecentCallByPhoneContact:(id)arg1;
- (_Bool)deleteRecentCallByPhoneNum:(id)arg1;
- (_Bool)deleteRecentCallByPhoneNum:(id)arg1 withCountryCode:(id)arg2;
- (void)didReceiveInviteGap:(int)arg1;
@property(retain, nonatomic) WCOFeedBackTips *feedbackTips; // @synthesize feedbackTips=_feedbackTips;
- (id)findWCOutContactByPhoneNum:(id)arg1;
- (id)findWCOutContactByPhoneNumInput:(id)arg1;
@property(nonatomic) unsigned long long fromVoipType; // @synthesize fromVoipType=_fromVoipType;
- (id)getAllCountryCodes;
- (id)getCarrierCountryCode;
- (id)getCountryCodeFromFullPhoneNum:(id)arg1;
- (id)getFormatedForFullPhoneNum:(id)arg1 countryCode:(id)arg2;
- (id)getFormatedForNum:(id)arg1;
- (id)getFormatedForNum:(id)arg1 countryCode:(id)arg2;
- (id)getHotCountryCodeList;
- (id)getLastRecentCallItems;
- (id)getLocaleCountryCode;
- (int)getNetSpeed;
- (id)getPhoneNumFromFullPhoneNum:(id)arg1;
- (id)getPhoneNumFromFullPhoneNum:(id)arg1 countryCode:(id)arg2;
- (id)getPurePhoneNum:(id)arg1;
- (unsigned int)getWCOMaxTimesForTryShowWcoMainFromVoip;
- (id)getWCOShareRule;
- (id)getWeChatOutMsgBeginLocalID:(unsigned int)arg1 limit:(unsigned int)arg2;
- (void)gotoChargeViewController;
- (void)hangUpCall;
- (id)init;
- (_Bool)insertOrUpdateWcoMsg:(id)arg1;
- (int)insertRecentCall:(id)arg1;
@property(retain, nonatomic) MMTimer *inviteTimer; // @synthesize inviteTimer=_inviteTimer;
- (_Bool)isCalling;
- (_Bool)isChargeClosed;
- (_Bool)isChargeRecordClosed;
- (_Bool)isInviteClosed;
- (_Bool)isMonoServiceCheckingServer;
- (_Bool)isMonoServiceUIExist;
- (_Bool)isMonoServiceUIWorking;
- (_Bool)isRestrictedCountryCode:(id)arg1;
- (_Bool)isSpeakerMode;
- (_Bool)isValidCountryCode:(id)arg1;
- (_Bool)isWebChargeOpen;
- (_Bool)loadAllData;
- (void)loadAllDataAsync;
- (void)loadHotCountryCode;
- (void)loadLastCallItemsAndHotCountryCodeDic;
- (void)loadWCOutPhoneContactAsync;
- (_Bool)loadWCOutPhoneContactsFromMMPhoneContacts;
- (_Bool)loadWCOutPhoneContactsMMInfo;
@property(retain, nonatomic) WCOutAddressBookLogic *m_addressBookLogic; // @synthesize m_addressBookLogic=_m_addressBookLogic;
@property(retain, nonatomic) WCOutCountryCodeLogic *m_countryCodeLogic; // @synthesize m_countryCodeLogic=_m_countryCodeLogic;
@property(retain, nonatomic) WCOutDataBase *m_dataBase; // @synthesize m_dataBase=_m_dataBase;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
@property(retain, nonatomic) PhoneNumberFormatLogic *m_phoneNumberFormatLogic; // @synthesize m_phoneNumberFormatLogic=_m_phoneNumberFormatLogic;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onFriendListUpdated:(id)arg1 ErrorCode:(unsigned int)arg2 Message:(id)arg3;
- (void)onServiceInit;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)playEndingSound;
- (_Bool)pressKeyWhileCallingWithKeyCode:(int)arg1;
- (void)processWeChatOutConfig:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)processWeChatOutMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)pushWCOutDialViewController:(id)arg1 PhoneNum:(id)arg2 DialScece:(unsigned long long)arg3;
- (void)reportContactAndRecentContactStat;
- (id)selectAllRecentCallForWCOutContact:(id)arg1;
- (id)selectRecentCallForWCOutContact:(id)arg1 limit:(unsigned int)arg2;
- (void)setMute:(_Bool)arg1;
@property(nonatomic) unsigned int showTimesFeedback; // @synthesize showTimesFeedback=_showTimesFeedback;
@property(nonatomic) unsigned int showTimesWcoMainFromVoip; // @synthesize showTimesWcoMainFromVoip=_showTimesWcoMainFromVoip;
@property(nonatomic) unsigned long long showlastFeedbackTs; // @synthesize showlastFeedbackTs=_showlastFeedbackTs;
@property(nonatomic) unsigned long long showlastTsWcoMainFromVoip; // @synthesize showlastTsWcoMainFromVoip=_showlastTsWcoMainFromVoip;
- (void)setSpeaker:(_Bool)arg1;
- (void)stopInviteRegister;
- (void)tryShowWCOAlert:(unsigned long long)arg1;
- (void)tryShowWCOFeedBack:(int)arg1;
- (_Bool)updateWCOutContactsInfoWithMfriendList:(id)arg1;
- (void)updateWCOutPhoneContactsMMInfoAsync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

