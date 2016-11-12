//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BalanceMobileInfo, CContact, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSString, TenpayBindCardInfo, TenpayBindCardSubscribeAppInfo, WCPayAppAuthRequestStruct, WCPayAuthenticationPay, WCPayAuthenticationPayStatusStruct, WCPayAuthenticationPayVerifySMSStruct, WCPayBalanceInfo, WCPayBindCardInfo, WCPayBindInfo, WCPayBindUserInfo, WCPayCardBinInfo, WCPayControlDataGroupPayData, WCPayCreditCardInfo, WCPayFetchInfo, WCPayIAPOrderDetail, WCPayLoanEntryInfo, WCPayMultiOrderDetail, WCPayNoticeInfo, WCPayOfflinePayChangeLimitFeeRequestStruct, WCPayOfflinePayQueryInfo, WCPayOfflinePayQueryInfoRequest, WCPayRealnameGuideInfo, WCPayResetPasswordInfo, WCPaySwitchInfo, WCPayTransferPrepayRequestStruct, WCPayUserInfo, WCPayVirtualNoBindCard, WCPayWalletInfo;

@interface WCPayControlData : NSObject
{
    NSString *nsCardHodlerName;
    NSString *nsCardHodlerCredit;
    NSString *nsCardHodlerIdentifyCard;
    NSString *nsCardNumber;
    NSString *nsPhoneNumber;
    NSString *nsResetPhoneNumber;
    NSString *nsResetCVVCode;
    NSString *nsCVVCode;
    NSString *nsResetValidDate;
    NSString *nsValidDate;
    NSString *nsPhoneVerifyCode;
    NSString *nsPayPasswd;
    NSString *nsRepeatPayPasswd;
    NSString *nsVerifiedPasswd;
    NSString *nsSaveBalanceMoney;
    NSString *nsFetchBalanceMoney;
    NSString *nsTransferMoney;
    NSString *nsTransferExtMoney;
    NSString *nsFetchArriveTime;
    _Bool m_bAutoFilledCardInfo;
    NSString *nsTransferRemark;
    NSString *nsWCLanguage;
    NSString *nsFirstName;
    NSString *nsLastName;
    NSString *nsCountry;
    NSString *nsArea;
    NSString *nsCity;
    NSString *nsAddress;
    NSString *nsPhoneNumber_Overseas;
    NSString *nsZipCode;
    NSString *nsEmail;
    NSString *nsCreditPayFirstName;
    NSString *nsCreditPayLast4IDNumber;
    NSString *nsCreditPayName;
    NSString *nsCreditPayIDNumber;
    unsigned int uiFlag;
    unsigned int uiPayScene;
    unsigned int uiBindScene;
    unsigned int uiJSApiPayScene;
    NSString *nsOrderID;
    NSString *nsUUID;
    NSString *nsImportCode;
    NSString *nsProductsID;
    NSString *nsBindSerial;
    NSString *m_nsToken;
    NSString *nsServiceAppID;
    NSString *nsServiceAppUserName;
    NSString *nsServiceAppName;
    NSString *nsServiceAppLogoUrl;
    NSString *nsServiceDetail;
    NSString *nsServiceSubscribeUrl;
    NSString *nsWapPayUrl;
    NSString *nsShareToFriendURL;
    NSString *nsPaidSuccessDetail;
    int uiServiceSubscribeStrategy;
    NSString *nsAppName;
    NSString *nsAppID;
    NSString *nsAppSource;
    WCPayAppAuthRequestStruct *structAppAuthRequest;
    WCPayBindUserInfo *bindUserInfo;
    unsigned int uiCardBankTag;
    NSError *m_oPaidError;
    WCPayAuthenticationPay *m_structAuthenticationPay;
    WCPayAuthenticationPayVerifySMSStruct *m_structAuthenticationPayVerifySMS;
    WCPayResetPasswordInfo *m_structResetPayPasswordInfo;
    NSArray *m_arrTenpayImportBindCard;
    TenpayBindCardInfo *m_structSelectedTenpayBindCardInfo;
    TenpayBindCardSubscribeAppInfo *m_structSelectedTenpayBindCardSubscribeAppInfo;
    WCPayBindInfo *m_structBindInfo;
    NSArray *m_arrBindedCard;
    NSArray *m_arrHistoryCard;
    NSArray *m_arrVirtualNoBindCard;
    NSArray *m_arrWXBorrowMoneyItemList;
    WCPayBindCardInfo *m_structSelectedCardInfo;
    WCPayBindCardInfo *m_structSelectedResetBalanceTelCardInfo;
    WCPayUserInfo *m_structUserInfo;
    WCPaySwitchInfo *m_structSwitchInfo;
    WCPayBalanceInfo *m_structBalanceInfo;
    WCPayNoticeInfo *m_structNoticeInfo;
    WCPayCardBinInfo *m_structSelectedCardType;
    NSArray *m_arrAvailableBank;
    WCPayIAPOrderDetail *m_structIAPOrderDetail;
    WCPayMultiOrderDetail *m_structOrderDetail;
    NSMutableArray *m_arrStatusChangeOrderArray;
    NSMutableArray *m_arrOrderArray;
    NSMutableArray *m_arrNotifyMsgArray;
    WCPayAuthenticationPayStatusStruct *m_structAuthenticationPayStatus;
    WCPayVirtualNoBindCard *m_structVirtualCardInfo;
    NSDate *startPayDate;
    NSDate *startVerifySMSDate;
    _Bool bNeedGetSMSAgain;
    NSString *nsOfflinePayQRCode;
    NSString *nsOfflinepayBarCode;
    _Bool m_bNeedOfflinePayLoading;
    long long uiOfflinePayLimit;
    long long offlinePayAmount;
    long long offlinePayNumber;
    long long uiOfflinePayChangedLimit;
    WCPayOfflinePayChangeLimitFeeRequestStruct *m_structWCPayOfflinePayChangeLimitFeeRequestStruct;
    NSString *nsOfflinePayConfirmViewTips;
    WCPayOfflinePayQueryInfo *m_structWCPayOfflinePayQueryInfo;
    unsigned int uiInitalMoney;
    WCPayOfflinePayQueryInfoRequest *m_sturctWCPayOfflinePayQueryInfoRequest;
    int m_enWCPayOfflinePayCodeDisplayScene;
    _Bool m_bBankUser;
    NSString *m_nsSessionKey;
    _Bool m_bNeedBind;
    NSString *m_nsIDNumberMask;
    NSString *m_nsNameMask;
    NSArray *m_arrIncreaseLimitQuestionArray;
    WCPayCreditCardInfo *m_sturctWCPayCreditCardInfo;
    unsigned int m_uiQueryQuestionCnt;
    CContact *m_oSelectedContact;
    NSString *m_nsSelectedUserNameFromQRCode;
    NSString *m_nsSelectedTruthNameFromQRCode;
    NSString *m_nsControlTransationID;
    NSString *m_nsTransferID;
    NSString *m_nsCurrentUserName;
    NSString *m_nsTranferMoneyString;
    unsigned long long m_uiTransferInvalidTime;
    unsigned int m_uiEffectiveDate;
    WCPayTransferPrepayRequestStruct *m_oWCPayTransferPrepayRequestStruct;
    NSMutableArray *m_arrFacingReceiveMoneyPayer;
    unsigned int m_uiStepInFacingReceiveViewTimestamp;
    NSString *m_nsFixedAmountReceiveMoneyQRCode;
    NSString *m_nsFixedAmountReceiveMoneyDesc;
    long long m_llFixedAmountReceiveMoneyTotalMoney;
    int m_enWCPayFacingReceiveMoneyScene;
    NSString *m_nsFacingPaidID;
    NSString *m_nsInterruptDesc;
    unsigned int m_uiHasUnarriveMoney;
    unsigned int m_uiChargeFee;
    unsigned int m_uiAccFee;
    unsigned int m_uiFeeLimit;
    unsigned int m_uiRemainFee;
    unsigned int m_uiExceedFee;
    NSString *m_nsChargeRate;
    NSString *m_nsTransferInterruptChargeDesc;
    unsigned int m_uiUsedFee;
    _Bool m_isShowCharge;
    NSString *m_nsChargeDesc;
    NSString *m_nsChargeShortDesc;
    unsigned int m_uiShortRemainFee;
    NSString *m_c2c_sender_title;
    NSString *m_c2c_receiver_title;
    NSString *m_c2c_des;
    NSString *m_c2c_sender_des;
    NSString *m_c2c_receiver_des;
    NSString *m_c2c_url;
    NSString *m_c2c_templateId;
    unsigned int m_c2c_sceneId;
    WCPayLoanEntryInfo *m_loanEntryInfo;
    NSString *m_loanJsApiToken;
    unsigned int m_uiPayChannel;
    int m_uiPayEntry;
    unsigned int m_uiRealnameActionFlag;
    NSString *m_nsRealnameToken;
    WCPayWalletInfo *m_walletInfo;
    NSArray *m_arrAvailableWalletInfo;
    NSDictionary *m_dicBanners;
    NSString *m_nsTransferReceiverTrueName;
    _Bool isAutoDeduct;
    WCPayRealnameGuideInfo *realnameInfo;
    int realnameScene;
    _Bool bNeedInputNewTelToResetBalanceTel;
    _Bool _m_bTouchIDAuthOrder;
    unsigned int m_pay_msg_type;
    unsigned int _m_uiFetchChargeFee;
    long long m_placeHolderMoney;
    NSString *m_nsTransferMoneySuccessMsgContent;
    WCPayCardBinInfo *m_structSelectedResetBalanceTelCardType;
    NSArray *m_arrBalanceNotice;
    NSArray *m_arrFetchNotice;
    WCPayFetchInfo *_m_structFetchInfo;
    NSArray *_offlinePayCardIcons;
    double _expiredTimeToPopOfflinePayForCard;
    CDUnknownBlockType _offlinePayReturnBlock;
    NSDictionary *_shareCardStatDic;
    NSString *_m_uifaceTofaceName;
    NSString *_m_uifaceTofaceDescTitle;
    WCPayControlDataGroupPayData *_groupPayData;
    NSString *_m_uiBalanceMobile;
    NSArray *_balanceMobileInfos;
    BalanceMobileInfo *_selectedBalanceMobileInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bNeedGetSMSAgain; // @synthesize bNeedGetSMSAgain;
@property(nonatomic) _Bool bNeedInputNewTelToResetBalanceTel; // @synthesize bNeedInputNewTelToResetBalanceTel;
@property(retain, nonatomic) NSArray *balanceMobileInfos; // @synthesize balanceMobileInfos=_balanceMobileInfos;
@property(retain, nonatomic) WCPayBindUserInfo *bindUserInfo; // @synthesize bindUserInfo;
- (void)dealloc;
@property(nonatomic) double expiredTimeToPopOfflinePayForCard; // @synthesize expiredTimeToPopOfflinePayForCard=_expiredTimeToPopOfflinePayForCard;
@property(retain, nonatomic) WCPayControlDataGroupPayData *groupPayData; // @synthesize groupPayData=_groupPayData;
- (id)init;
@property(nonatomic) _Bool isAutoDeduct; // @synthesize isAutoDeduct;
- (_Bool)isBindedBankCard;
- (_Bool)isPayWithBalance;
@property(retain, nonatomic) NSArray *m_arrAvailableBank; // @synthesize m_arrAvailableBank;
@property(retain, nonatomic) NSArray *m_arrAvailableWalletInfo; // @synthesize m_arrAvailableWalletInfo;
@property(retain, nonatomic) NSArray *m_arrBalanceNotice; // @synthesize m_arrBalanceNotice;
@property(retain, nonatomic) NSArray *m_arrBindedCard; // @synthesize m_arrBindedCard;
@property(retain, nonatomic) NSMutableArray *m_arrFacingReceiveMoneyPayer; // @synthesize m_arrFacingReceiveMoneyPayer;
@property(retain, nonatomic) NSArray *m_arrFetchNotice; // @synthesize m_arrFetchNotice;
@property(retain, nonatomic) NSArray *m_arrHistoryCard; // @synthesize m_arrHistoryCard;
@property(retain, nonatomic) NSArray *m_arrIncreaseLimitQuestionArray; // @synthesize m_arrIncreaseLimitQuestionArray;
@property(retain, nonatomic) NSMutableArray *m_arrNotifyMsgArray; // @synthesize m_arrNotifyMsgArray;
@property(retain, nonatomic) NSMutableArray *m_arrOrderArray; // @synthesize m_arrOrderArray;
@property(retain, nonatomic) NSMutableArray *m_arrStatusChangeOrderArray; // @synthesize m_arrStatusChangeOrderArray;
@property(retain, nonatomic) NSArray *m_arrTenpayImportBindCard; // @synthesize m_arrTenpayImportBindCard;
@property(retain, nonatomic) NSArray *m_arrVirtualNoBindCard; // @synthesize m_arrVirtualNoBindCard;
@property(retain, nonatomic) NSArray *m_arrWXBorrowMoneyItemList; // @synthesize m_arrWXBorrowMoneyItemList;
@property(nonatomic) _Bool m_bAutoFilledCardInfo; // @synthesize m_bAutoFilledCardInfo;
@property(nonatomic) _Bool m_bBankUser; // @synthesize m_bBankUser;
@property(nonatomic) _Bool m_bNeedBind; // @synthesize m_bNeedBind;
@property(nonatomic) _Bool m_bNeedOfflinePayLoading; // @synthesize m_bNeedOfflinePayLoading;
@property(nonatomic) _Bool m_bTouchIDAuthOrder; // @synthesize m_bTouchIDAuthOrder=_m_bTouchIDAuthOrder;
@property(retain, nonatomic) NSString *m_c2c_des; // @synthesize m_c2c_des;
@property(retain, nonatomic) NSString *m_c2c_receiver_des; // @synthesize m_c2c_receiver_des;
@property(retain, nonatomic) NSString *m_c2c_receiver_title; // @synthesize m_c2c_receiver_title;
@property(nonatomic) unsigned int m_c2c_sceneId; // @synthesize m_c2c_sceneId;
@property(retain, nonatomic) NSString *m_c2c_sender_des; // @synthesize m_c2c_sender_des;
@property(retain, nonatomic) NSString *m_c2c_sender_title; // @synthesize m_c2c_sender_title;
@property(retain, nonatomic) NSString *m_c2c_templateId; // @synthesize m_c2c_templateId;
@property(retain, nonatomic) NSString *m_c2c_url; // @synthesize m_c2c_url;
@property(retain, nonatomic) NSDictionary *m_dicBanners; // @synthesize m_dicBanners;
@property(nonatomic) int m_enWCPayFacingReceiveMoneyScene; // @synthesize m_enWCPayFacingReceiveMoneyScene;
@property(nonatomic) int m_enWCPayOfflinePayCodeDisplayScene; // @synthesize m_enWCPayOfflinePayCodeDisplayScene;
@property(nonatomic) _Bool m_isShowCharge; // @synthesize m_isShowCharge;
@property(nonatomic) long long m_llFixedAmountReceiveMoneyTotalMoney; // @synthesize m_llFixedAmountReceiveMoneyTotalMoney;
@property(retain, nonatomic) WCPayLoanEntryInfo *m_loanEntryInfo; // @synthesize m_loanEntryInfo;
@property(retain, nonatomic) NSString *m_loanJsApiToken; // @synthesize m_loanJsApiToken;
@property(retain, nonatomic) NSString *m_nsChargeDesc; // @synthesize m_nsChargeDesc;
@property(retain, nonatomic) NSString *m_nsChargeRate; // @synthesize m_nsChargeRate;
@property(retain, nonatomic) NSString *m_nsChargeShortDesc; // @synthesize m_nsChargeShortDesc;
@property(retain, nonatomic) NSString *m_nsControlTransationID; // @synthesize m_nsControlTransationID;
@property(retain, nonatomic) NSString *m_nsCurrentUserName; // @synthesize m_nsCurrentUserName;
@property(retain, nonatomic) NSString *m_nsFacingPaidID; // @synthesize m_nsFacingPaidID;
@property(retain, nonatomic) NSString *m_nsFixedAmountReceiveMoneyDesc; // @synthesize m_nsFixedAmountReceiveMoneyDesc;
@property(retain, nonatomic) NSString *m_nsFixedAmountReceiveMoneyQRCode; // @synthesize m_nsFixedAmountReceiveMoneyQRCode;
@property(retain, nonatomic) NSString *m_nsIDNumberMask; // @synthesize m_nsIDNumberMask;
@property(retain, nonatomic) NSString *m_nsInterruptDesc; // @synthesize m_nsInterruptDesc;
@property(retain, nonatomic) NSString *m_nsNameMask; // @synthesize m_nsNameMask;
@property(retain, nonatomic) NSString *m_nsRealnameToken; // @synthesize m_nsRealnameToken;
@property(retain, nonatomic) NSString *m_nsSelectedTruthNameFromQRCode; // @synthesize m_nsSelectedTruthNameFromQRCode;
@property(retain, nonatomic) NSString *m_nsSelectedUserNameFromQRCode; // @synthesize m_nsSelectedUserNameFromQRCode;
@property(retain, nonatomic) NSString *m_nsSessionKey; // @synthesize m_nsSessionKey;
@property(retain, nonatomic) NSString *m_nsToken; // @synthesize m_nsToken;
@property(retain, nonatomic) NSString *m_nsTranferMoneyString; // @synthesize m_nsTranferMoneyString;
@property(retain, nonatomic) NSString *m_nsTransferID; // @synthesize m_nsTransferID;
@property(retain, nonatomic) NSString *m_nsTransferInterruptChargeDesc; // @synthesize m_nsTransferInterruptChargeDesc;
@property(retain, nonatomic) NSString *m_nsTransferMoneySuccessMsgContent; // @synthesize m_nsTransferMoneySuccessMsgContent;
@property(retain, nonatomic) NSString *m_nsTransferReceiverTrueName; // @synthesize m_nsTransferReceiverTrueName;
@property(retain, nonatomic) NSError *m_oPaidError; // @synthesize m_oPaidError;
@property(retain, nonatomic) CContact *m_oSelectedContact; // @synthesize m_oSelectedContact;
@property(retain, nonatomic) WCPayTransferPrepayRequestStruct *m_oWCPayTransferPrepayRequestStruct; // @synthesize m_oWCPayTransferPrepayRequestStruct;
@property(nonatomic) unsigned int m_pay_msg_type; // @synthesize m_pay_msg_type;
@property(nonatomic) long long m_placeHolderMoney; // @synthesize m_placeHolderMoney;
@property(retain, nonatomic) WCPayAuthenticationPay *m_structAuthenticationPay; // @synthesize m_structAuthenticationPay;
@property(retain, nonatomic) WCPayAuthenticationPayStatusStruct *m_structAuthenticationPayStatus; // @synthesize m_structAuthenticationPayStatus;
@property(retain, nonatomic) WCPayAuthenticationPayVerifySMSStruct *m_structAuthenticationPayVerifySMS; // @synthesize m_structAuthenticationPayVerifySMS;
@property(retain, nonatomic) WCPayBalanceInfo *m_structBalanceInfo; // @synthesize m_structBalanceInfo;
@property(retain, nonatomic) WCPayBindInfo *m_structBindInfo; // @synthesize m_structBindInfo;
@property(retain, nonatomic) WCPayFetchInfo *m_structFetchInfo; // @synthesize m_structFetchInfo=_m_structFetchInfo;
@property(retain, nonatomic) WCPayIAPOrderDetail *m_structIAPOrderDetail; // @synthesize m_structIAPOrderDetail;
@property(retain, nonatomic) WCPayNoticeInfo *m_structNoticeInfo; // @synthesize m_structNoticeInfo;
@property(retain, nonatomic) WCPayMultiOrderDetail *m_structOrderDetail; // @synthesize m_structOrderDetail;
@property(retain, nonatomic) WCPayResetPasswordInfo *m_structResetPayPasswordInfo; // @synthesize m_structResetPayPasswordInfo;
@property(retain, nonatomic) WCPayBindCardInfo *m_structSelectedCardInfo; // @synthesize m_structSelectedCardInfo;
@property(retain, nonatomic) WCPayCardBinInfo *m_structSelectedCardType; // @synthesize m_structSelectedCardType;
@property(retain, nonatomic) WCPayBindCardInfo *m_structSelectedResetBalanceTelCardInfo; // @synthesize m_structSelectedResetBalanceTelCardInfo;
@property(retain, nonatomic) WCPayCardBinInfo *m_structSelectedResetBalanceTelCardType; // @synthesize m_structSelectedResetBalanceTelCardType;
@property(retain, nonatomic) TenpayBindCardInfo *m_structSelectedTenpayBindCardInfo; // @synthesize m_structSelectedTenpayBindCardInfo;
@property(retain, nonatomic) TenpayBindCardSubscribeAppInfo *m_structSelectedTenpayBindCardSubscribeAppInfo; // @synthesize m_structSelectedTenpayBindCardSubscribeAppInfo;
@property(retain, nonatomic) WCPaySwitchInfo *m_structSwitchInfo; // @synthesize m_structSwitchInfo;
@property(retain, nonatomic) WCPayUserInfo *m_structUserInfo; // @synthesize m_structUserInfo;
@property(retain, nonatomic) WCPayVirtualNoBindCard *m_structVirtualCardInfo; // @synthesize m_structVirtualCardInfo;
@property(retain, nonatomic) WCPayOfflinePayChangeLimitFeeRequestStruct *m_structWCPayOfflinePayChangeLimitFeeRequestStruct; // @synthesize m_structWCPayOfflinePayChangeLimitFeeRequestStruct;
@property(retain, nonatomic) WCPayOfflinePayQueryInfo *m_structWCPayOfflinePayQueryInfo; // @synthesize m_structWCPayOfflinePayQueryInfo;
@property(retain, nonatomic) WCPayCreditCardInfo *m_sturctWCPayCreditCardInfo; // @synthesize m_sturctWCPayCreditCardInfo;
@property(retain, nonatomic) WCPayOfflinePayQueryInfoRequest *m_sturctWCPayOfflinePayQueryInfoRequest; // @synthesize m_sturctWCPayOfflinePayQueryInfoRequest;
@property(nonatomic) unsigned int m_uiAccFee; // @synthesize m_uiAccFee;
@property(retain, nonatomic) NSString *m_uiBalanceMobile; // @synthesize m_uiBalanceMobile=_m_uiBalanceMobile;
@property(nonatomic) unsigned int m_uiChargeFee; // @synthesize m_uiChargeFee;
@property(nonatomic) unsigned int m_uiEffectiveDate; // @synthesize m_uiEffectiveDate;
@property(nonatomic) unsigned int m_uiExceedFee; // @synthesize m_uiExceedFee;
@property(nonatomic) unsigned int m_uiFeeLimit; // @synthesize m_uiFeeLimit;
@property(nonatomic) unsigned int m_uiFetchChargeFee; // @synthesize m_uiFetchChargeFee=_m_uiFetchChargeFee;
@property(nonatomic) unsigned int m_uiHasUnarriveMoney; // @synthesize m_uiHasUnarriveMoney;
@property(nonatomic) unsigned int m_uiPayChannel; // @synthesize m_uiPayChannel;
@property(nonatomic) int m_uiPayEntry; // @synthesize m_uiPayEntry;
@property(nonatomic) unsigned int m_uiQueryQuestionCnt; // @synthesize m_uiQueryQuestionCnt;
@property(nonatomic) unsigned int m_uiRealnameActionFlag; // @synthesize m_uiRealnameActionFlag;
@property(nonatomic) unsigned int m_uiRemainFee; // @synthesize m_uiRemainFee;
@property(nonatomic) unsigned int m_uiShortRemainFee; // @synthesize m_uiShortRemainFee;
@property(nonatomic) unsigned int m_uiStepInFacingReceiveViewTimestamp; // @synthesize m_uiStepInFacingReceiveViewTimestamp;
@property(nonatomic) unsigned long long m_uiTransferInvalidTime; // @synthesize m_uiTransferInvalidTime;
@property(nonatomic) unsigned int m_uiUsedFee; // @synthesize m_uiUsedFee;
@property(retain, nonatomic) NSString *m_uifaceTofaceDescTitle; // @synthesize m_uifaceTofaceDescTitle=_m_uifaceTofaceDescTitle;
@property(retain, nonatomic) NSString *m_uifaceTofaceName; // @synthesize m_uifaceTofaceName=_m_uifaceTofaceName;
@property(retain, nonatomic) WCPayWalletInfo *m_walletInfo; // @synthesize m_walletInfo;
@property(retain, nonatomic) NSString *nsAddress; // @synthesize nsAddress;
@property(retain, nonatomic) NSString *nsAppID; // @synthesize nsAppID;
@property(retain, nonatomic) NSString *nsAppName; // @synthesize nsAppName;
@property(retain, nonatomic) NSString *nsAppSource; // @synthesize nsAppSource;
@property(retain, nonatomic) NSString *nsArea; // @synthesize nsArea;
@property(retain, nonatomic) NSString *nsCVVCode; // @synthesize nsCVVCode;
@property(retain, nonatomic) NSString *nsCardHodlerCredit; // @synthesize nsCardHodlerCredit;
@property(retain, nonatomic) NSString *nsCardHodlerIdentifyCard; // @synthesize nsCardHodlerIdentifyCard;
@property(retain, nonatomic) NSString *nsCardHodlerName; // @synthesize nsCardHodlerName;
@property(retain, nonatomic) NSString *nsCardNumber; // @synthesize nsCardNumber;
@property(retain, nonatomic) NSString *nsCity; // @synthesize nsCity;
@property(retain, nonatomic) NSString *nsCountry; // @synthesize nsCountry;
@property(retain, nonatomic) NSString *nsCreditPayFirstName; // @synthesize nsCreditPayFirstName;
@property(retain, nonatomic) NSString *nsCreditPayIDNumber; // @synthesize nsCreditPayIDNumber;
@property(retain, nonatomic) NSString *nsCreditPayLast4IDNumber; // @synthesize nsCreditPayLast4IDNumber;
@property(retain, nonatomic) NSString *nsCreditPayName; // @synthesize nsCreditPayName;
@property(retain, nonatomic) NSString *nsEmail; // @synthesize nsEmail;
@property(retain, nonatomic) NSString *nsFetchArriveTime; // @synthesize nsFetchArriveTime;
@property(retain, nonatomic) NSString *nsFetchBalanceMoney; // @synthesize nsFetchBalanceMoney;
@property(retain, nonatomic) NSString *nsFirstName; // @synthesize nsFirstName;
@property(retain, nonatomic) NSString *nsImportCode; // @synthesize nsImportCode;
@property(retain, nonatomic) NSString *nsLastName; // @synthesize nsLastName;
@property(retain, nonatomic) NSString *nsOfflinePayConfirmViewTips; // @synthesize nsOfflinePayConfirmViewTips;
@property(retain, nonatomic) NSString *nsOfflinePayQRCode; // @synthesize nsOfflinePayQRCode;
@property(retain, nonatomic) NSString *nsOfflinepayBarCode; // @synthesize nsOfflinepayBarCode;
@property(retain, nonatomic) NSString *nsOrderID; // @synthesize nsOrderID;
@property(retain, nonatomic) NSString *nsPaidSuccessDetail; // @synthesize nsPaidSuccessDetail;
@property(retain, nonatomic) NSString *nsPayPasswd; // @synthesize nsPayPasswd;
@property(retain, nonatomic) NSString *nsPhoneNumber; // @synthesize nsPhoneNumber;
@property(retain, nonatomic) NSString *nsPhoneNumber_Overseas; // @synthesize nsPhoneNumber_Overseas;
@property(retain, nonatomic) NSString *nsPhoneVerifyCode; // @synthesize nsPhoneVerifyCode;
@property(retain, nonatomic) NSString *nsProductsID; // @synthesize nsProductsID;
@property(retain, nonatomic) NSString *nsRepeatPayPasswd; // @synthesize nsRepeatPayPasswd;
@property(retain, nonatomic) NSString *nsResetCVVCode; // @synthesize nsResetCVVCode;
@property(retain, nonatomic) NSString *nsResetPhoneNumber; // @synthesize nsResetPhoneNumber;
@property(retain, nonatomic) NSString *nsResetValidDate; // @synthesize nsResetValidDate;
@property(retain, nonatomic) NSString *nsSaveBalanceMoney; // @synthesize nsSaveBalanceMoney;
@property(retain, nonatomic) NSString *nsServiceAppID; // @synthesize nsServiceAppID;
@property(retain, nonatomic) NSString *nsServiceAppLogoUrl; // @synthesize nsServiceAppLogoUrl;
@property(retain, nonatomic) NSString *nsServiceAppName; // @synthesize nsServiceAppName;
@property(retain, nonatomic) NSString *nsServiceAppUserName; // @synthesize nsServiceAppUserName;
@property(retain, nonatomic) NSString *nsServiceDetail; // @synthesize nsServiceDetail;
@property(retain, nonatomic) NSString *nsServiceSubscribeUrl; // @synthesize nsServiceSubscribeUrl;
@property(retain, nonatomic) NSString *nsShareToFriendURL; // @synthesize nsShareToFriendURL;
@property(retain, nonatomic) NSString *nsTransferExtMoney; // @synthesize nsTransferExtMoney;
@property(retain, nonatomic) NSString *nsTransferMoney; // @synthesize nsTransferMoney;
@property(retain, nonatomic) NSString *nsTransferRemark; // @synthesize nsTransferRemark;
@property(retain, nonatomic) NSString *nsUUID; // @synthesize nsUUID;
@property(retain, nonatomic) NSString *nsValidDate; // @synthesize nsValidDate;
@property(retain, nonatomic) NSString *nsVerifiedPasswd; // @synthesize nsVerifiedPasswd;
@property(retain, nonatomic) NSString *nsWCLanguage; // @synthesize nsWCLanguage;
@property(retain, nonatomic) NSString *nsWapPayUrl; // @synthesize nsWapPayUrl;
@property(retain, nonatomic) NSString *nsZipCode; // @synthesize nsZipCode;
@property(nonatomic) long long offlinePayAmount; // @synthesize offlinePayAmount;
@property(retain, nonatomic) NSArray *offlinePayCardIcons; // @synthesize offlinePayCardIcons=_offlinePayCardIcons;
@property(nonatomic) long long offlinePayNumber; // @synthesize offlinePayNumber;
@property(copy, nonatomic) CDUnknownBlockType offlinePayReturnBlock; // @synthesize offlinePayReturnBlock=_offlinePayReturnBlock;
@property(retain, nonatomic) WCPayRealnameGuideInfo *realnameInfo; // @synthesize realnameInfo;
@property(nonatomic) int realnameScene; // @synthesize realnameScene;
@property(retain, nonatomic) BalanceMobileInfo *selectedBalanceMobileInfo; // @synthesize selectedBalanceMobileInfo=_selectedBalanceMobileInfo;
@property(retain, nonatomic) NSDictionary *shareCardStatDic; // @synthesize shareCardStatDic=_shareCardStatDic;
@property(retain, nonatomic) NSDate *startPayDate; // @synthesize startPayDate;
@property(retain, nonatomic) NSDate *startVerifySMSDate; // @synthesize startVerifySMSDate;
@property(retain, nonatomic) WCPayAppAuthRequestStruct *structAppAuthRequest; // @synthesize structAppAuthRequest;
@property(nonatomic) unsigned int uiBindScene; // @synthesize uiBindScene;
@property(nonatomic) unsigned int uiCardBankTag; // @synthesize uiCardBankTag;
@property(nonatomic) unsigned int uiFlag; // @synthesize uiFlag;
@property(nonatomic) unsigned int uiInitalMoney; // @synthesize uiInitalMoney;
@property(nonatomic) unsigned int uiJSApiPayScene; // @synthesize uiJSApiPayScene;
@property(nonatomic) long long uiOfflinePayChangedLimit; // @synthesize uiOfflinePayChangedLimit;
@property(nonatomic) long long uiOfflinePayLimit; // @synthesize uiOfflinePayLimit;
@property(nonatomic) unsigned int uiPayScene; // @synthesize uiPayScene;
@property(nonatomic) int uiServiceSubscribeStrategy; // @synthesize uiServiceSubscribeStrategy;

@end

