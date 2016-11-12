//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMAsset.h"

#import "MMAssetBigImageDelegate.h"

@class ALAsset, CLLocation, NSMutableArray, NSString;

@interface MMAssetForALAssetLibrary : MMAsset <MMAssetBigImageDelegate>
{
    id <MMAssetBigImageDelegate> m_bigImageDelegate;
    _Bool m_isNeedOriginImage;
    _Bool m_hasStartInitAsset;
    ALAsset *m_asset;
    NSString *m_assetUrlForSystem;
    NSMutableArray *m_bigImageResultBlocks;
    NSMutableArray *m_bigImageErrorBlocks;
    NSMutableArray *m_bigImageProcessBlocks;
    NSMutableArray *m_thumbImageResultBlocks;
    NSMutableArray *m_thumbImageErrorBlocks;
    CLLocation *m_location;
}

+ (id)EditImage:(id)arg1 quality:(double)arg2;
+ (id)ImagePreventRecursiveCompress:(id)arg1 quality:(double)arg2 minEarnings:(double)arg3 normalImageSizeLimit:(unsigned long long)arg4 longImageSizeLimit:(unsigned long long)arg5;
+ (id)LongImage:(id)arg1 quality:(double)arg2 edgeLimit:(double)arg3;
+ (id)NormalImage:(id)arg1 quality:(double)arg2 edgeLimit:(double)arg3;
+ (id)fitShortEdgeForAsset:(id)arg1 toLongEdge:(double)arg2;
+ (id)getOriginImageDataFromRepresentaion:(id)arg1;
+ (_Bool)isGifForAsset:(id)arg1;
+ (_Bool)shouldPreventRecursiveCompress:(id)arg1 edgeLimit:(double)arg2;
- (void).cxx_destruct;
- (id)alAssetReferenceUrl;
- (id)assetUrl;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetMetadata:(CDUnknownBlockType)arg1;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (void)asyncGetVideoUrlWithBlock:(CDUnknownBlockType)arg1;
- (void)callErrorBlocks;
- (void)callResultBlocksWith:(id)arg1 imageData:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4;
- (id)getCreatedDate;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(CDUnknownBlockType)arg2 ErrorBlock:(CDUnknownBlockType)arg3;
- (struct CGSize)getImageRatioSize;
- (id)getOriginImageDataSize;
- (id)getThumbImage;
- (id)getThumbnail;
- (id)getVideoUrl;
- (_Bool)hasLocation;
- (id)init;
- (id)initWithAsset:(id)arg1 IsNeedOrigin:(_Bool)arg2;
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(_Bool)arg2;
- (_Bool)isGif;
- (_Bool)isPicture;
- (_Bool)isVideo;
- (double)latitude;
- (double)longitude;
@property(retain, nonatomic) ALAsset *m_asset; // @synthesize m_asset;
@property(retain, nonatomic) NSString *m_assetUrlForSystem; // @synthesize m_assetUrlForSystem;
@property(retain, nonatomic) NSMutableArray *m_bigImageErrorBlocks; // @synthesize m_bigImageErrorBlocks;
@property(retain, nonatomic) NSMutableArray *m_bigImageProcessBlocks; // @synthesize m_bigImageProcessBlocks;
@property(retain, nonatomic) NSMutableArray *m_bigImageResultBlocks; // @synthesize m_bigImageResultBlocks;
@property(nonatomic) _Bool m_hasStartInitAsset; // @synthesize m_hasStartInitAsset;
- (_Bool)m_isNeedOriginImage;
@property(retain, nonatomic) CLLocation *m_location; // @synthesize m_location;
@property(retain, nonatomic) NSMutableArray *m_thumbImageErrorBlocks; // @synthesize m_thumbImageErrorBlocks;
@property(retain, nonatomic) NSMutableArray *m_thumbImageResultBlocks; // @synthesize m_thumbImageResultBlocks;
- (_Bool)needGetAssetFromLibraryWithCompressConfig:(id)arg1;
- (void)onGetBigImage:(id)arg1 data:(id)arg2;
- (void)onGetBigImageError;
- (void)onGetImageAsset:(id)arg1 compressConfig:(id)arg2;
- (void)onGetImageErrorFromAsset;
- (void)onGetImageFromAsset:(id)arg1 data:(id)arg2;
- (id)retriveAssetUrl;
- (id)retriveLocation;
- (void)setBigImageDelegate:(id)arg1;
- (void)setM_isNeedOriginImage:(_Bool)arg1;
- (id)videoDuration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

