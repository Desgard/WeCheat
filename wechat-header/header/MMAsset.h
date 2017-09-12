//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "NSCopying-Protocol.h"

@interface MMAsset : MMObject <NSCopying>
{
    _Bool _m_isNeedOriginImage;
    _Bool _m_isFailedFromIcloud;
    _Bool _m_isLoadingFromIcloud;
}

+ (struct CGSize)LongImageSizeWithTargetEdge:(double)arg1 originSize:(struct CGSize)arg2;
+ (id)decodeXmlString:(id)arg1;
+ (_Bool)isAsset:(id)arg1 CreateWithInSecond:(double)arg2;
- (id)alAssetReferenceUrl;
- (id)assetUrl;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetMetadata:(CDUnknownBlockType)arg1;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (void)asyncGetVideoAsset:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetVideoAssetWithBlock:(CDUnknownBlockType)arg1;
- (void)asyncGetVideoFileSizeWithBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)encodeXmlString;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4;
- (id)getCreatedDate;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(CDUnknownBlockType)arg2 ErrorBlock:(CDUnknownBlockType)arg3;
- (id)getDrawLayerArray;
- (id)getEditImageAttr;
- (id)getEditVideoAttr;
- (id)getEditedVideoDrawLayers;
- (struct CGSize)getImageRatioSize;
- (_Bool)getIsEdited;
- (_Bool)getIsEditedVideo;
- (id)getOriginImageDataSize;
- (id)getOriginalAssetLocalIdentifier;
- (id)getThumbImage;
- (id)getThumbnail;
- (void)getVideoDurationForDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (id)getVideoUrl;
- (_Bool)hasLocation;
- (id)imageExifLogInfo;
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(_Bool)arg2;
- (_Bool)isGif;
- (_Bool)isPicture;
- (_Bool)isPictureForIncludeGif:(_Bool)arg1;
- (_Bool)isSlowMotionVideo;
- (_Bool)isTimeLapseVideo;
- (_Bool)isVideo;
- (double)latitude;
- (double)longitude;
@property(nonatomic) _Bool m_isFailedFromIcloud; // @synthesize m_isFailedFromIcloud=_m_isFailedFromIcloud;
@property(nonatomic) _Bool m_isLoadingFromIcloud; // @synthesize m_isLoadingFromIcloud=_m_isLoadingFromIcloud;
@property(nonatomic) _Bool m_isNeedOriginImage; // @synthesize m_isNeedOriginImage=_m_isNeedOriginImage;
- (void)setEditedImage:(id)arg1 withDrawLayer:(id)arg2 withEdited:(_Bool)arg3;
- (void)stopGetBigImageICloudActivity;
- (void)stopICloudActivity;
- (id)videoDuration;

@end
