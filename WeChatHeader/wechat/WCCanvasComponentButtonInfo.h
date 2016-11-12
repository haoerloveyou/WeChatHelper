//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCCanvasComponentButtonInfo : MMObject <NSCoding>
{
    int _btnType;
    unsigned int _btnAlignmentType;
    unsigned int _fontSize;
    int _borderSize;
    unsigned int _btnHeight;
    int _btnFontType;
    int _platform;
    NSString *_title;
    NSString *_jumpUrl;
    NSString *_fontColorStr;
    NSString *_btnBgColorTheme;
    NSString *_btnBorderColorTheme;
    NSString *_warningIos;
}

- (void).cxx_destruct;
@property(nonatomic) int borderSize; // @synthesize borderSize=_borderSize;
@property(nonatomic) unsigned int btnAlignmentType; // @synthesize btnAlignmentType=_btnAlignmentType;
@property(retain, nonatomic) NSString *btnBgColorTheme; // @synthesize btnBgColorTheme=_btnBgColorTheme;
@property(retain, nonatomic) NSString *btnBorderColorTheme; // @synthesize btnBorderColorTheme=_btnBorderColorTheme;
@property(nonatomic) int btnFontType; // @synthesize btnFontType=_btnFontType;
@property(nonatomic) unsigned int btnHeight; // @synthesize btnHeight=_btnHeight;
@property(nonatomic) int btnType; // @synthesize btnType=_btnType;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *fontColorStr; // @synthesize fontColorStr=_fontColorStr;
@property(nonatomic) unsigned int fontSize; // @synthesize fontSize=_fontSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) int platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *warningIos; // @synthesize warningIos=_warningIos;

@end

