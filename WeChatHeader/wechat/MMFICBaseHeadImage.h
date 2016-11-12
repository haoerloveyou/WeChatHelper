//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FICEntity.h"

@class NSString, UIImage;

@interface MMFICBaseHeadImage : NSObject <FICEntity>
{
    NSString *_usrName;
    NSString *_sourceImgUrl;
    NSString *_entityUUID;
    NSString *_sourceImageUUID;
    unsigned int _eliminationFactor;
    NSString *_formatName;
}

+ (id)genFICEntity:(id)arg1;
- (void).cxx_destruct;
- (CDUnknownBlockType)drawingBlockForImage:(id)arg1;
@property(nonatomic) unsigned int eliminationFactor; // @synthesize eliminationFactor=_eliminationFactor;
@property(readonly, nonatomic) NSString *entityUUID;
@property(readonly, nonatomic) NSString *formatName; // @synthesize formatName=_formatName;
- (id)init;
@property(retain, nonatomic) NSString *sourceImgUrl; // @synthesize sourceImgUrl=_sourceImgUrl;
@property(retain, nonatomic) NSString *usrName; // @synthesize usrName=_usrName;
@property(readonly, nonatomic) UIImage *sourceImage;
@property(readonly, nonatomic) NSString *sourceImageUUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

