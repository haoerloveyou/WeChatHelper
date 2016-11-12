//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMMLanguageMgrExt.h"
#import "IMMRegionPackageDownloadMgrExt.h"
#import "MMService.h"

@class NSMutableArray, NSString, SafeDictionaryWrap;

@interface MMRegionCodeMgr : MMService <MMService, IMMRegionPackageDownloadMgrExt, IMMLanguageMgrExt>
{
    SafeDictionaryWrap *m_regionDict;
    NSMutableArray *m_pickedRegionAry;
}

+ (id)encodeCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
+ (int)numberOfOccurrencesOfString:(id)arg1 inString:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getChildrenOfCode:(id)arg1;
- (id)getCountries;
- (id)getDisplayRegionWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (id)getLanguagePrefixByLanguage:(id)arg1;
- (id)getPickedResult;
- (id)getRegionCodeFromString:(id)arg1 type:(int)arg2;
- (id)getRegionCodeLangForCurLang:(id)arg1;
- (id)getValueForKey:(id)arg1;
- (id)init;
- (_Bool)isCountryHK:(id)arg1;
- (_Bool)isCountryMO:(id)arg1;
- (_Bool)isCountryTW:(id)arg1;
- (_Bool)isProvinceHK:(id)arg1;
- (_Bool)isProvinceMO:(id)arg1;
- (_Bool)isProvinceTW:(id)arg1;
- (_Bool)isZhCN:(id)arg1;
- (void)onLanguageChange;
- (void)onRegionPackageUpdated;
- (void)popupData;
- (void)pushData:(id)arg1;
- (id)readRegionCodeFileForLang:(id)arg1;
- (void)removePickedResult;
- (_Bool)saveStirng:(id)arg1 toFileForLang:(id)arg2;
- (void)setRegionDictForCurLang;
- (void)splitRegionCodeFile:(id)arg1;
- (void)trySplitRegionCodeFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

