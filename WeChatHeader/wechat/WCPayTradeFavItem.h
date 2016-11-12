//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayTradeFavItem : NSObject
{
    unsigned int m_uiFavType;
    unsigned int m_uiFavSubType;
    unsigned long long m_uiFavProperty;
    NSString *m_nsFavorTypeDesc;
    NSString *m_nsFavID;
    NSString *m_nsFavName;
    NSString *m_nsFavDesc;
    NSString *m_nsFavUsedManual;
    NSString *m_nsFavUsedRemark;
    _Bool m_bBankFav;
    NSString *m_nsBankType;
    NSString *m_nsBankName;
    NSString *m_nsBankLogoUrl;
    int m_enCurrentItemStatus;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) _Bool m_bBankFav; // @synthesize m_bBankFav;
@property(nonatomic) int m_enCurrentItemStatus; // @synthesize m_enCurrentItemStatus;
@property(retain, nonatomic) NSString *m_nsBankLogoUrl; // @synthesize m_nsBankLogoUrl;
@property(retain, nonatomic) NSString *m_nsBankName; // @synthesize m_nsBankName;
@property(retain, nonatomic) NSString *m_nsBankType; // @synthesize m_nsBankType;
@property(retain, nonatomic) NSString *m_nsFavDesc; // @synthesize m_nsFavDesc;
@property(retain, nonatomic) NSString *m_nsFavID; // @synthesize m_nsFavID;
@property(retain, nonatomic) NSString *m_nsFavName; // @synthesize m_nsFavName;
@property(retain, nonatomic) NSString *m_nsFavUsedManual; // @synthesize m_nsFavUsedManual;
@property(retain, nonatomic) NSString *m_nsFavUsedRemark; // @synthesize m_nsFavUsedRemark;
@property(retain, nonatomic) NSString *m_nsFavorTypeDesc; // @synthesize m_nsFavorTypeDesc;
@property(nonatomic) unsigned long long m_uiFavProperty; // @synthesize m_uiFavProperty;
@property(nonatomic) unsigned int m_uiFavSubType; // @synthesize m_uiFavSubType;
@property(nonatomic) unsigned int m_uiFavType; // @synthesize m_uiFavType;

@end

