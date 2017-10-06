//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface FavoritesSetting : NSObject <NSCoding>
{
    unsigned long long _totalCapacity;
    unsigned long long _usedCapcity;
    unsigned int _maxAutoUploadSize;
    unsigned int _maxAutoDownloadSize;
    unsigned int _maxFavFileSize;
    _Bool _bIsFirstTimeInFav;
    int _showFavIntroViewTimes;
    _Bool _bHasCalculateFavItemSize;
    _Bool _bUseH5Note;
    unsigned long long _usedCapacity;
}

@property(nonatomic) _Bool bHasCalculateFavItemSize; // @synthesize bHasCalculateFavItemSize=_bHasCalculateFavItemSize;
@property(nonatomic) _Bool bIsFirstTimeInFav; // @synthesize bIsFirstTimeInFav=_bIsFirstTimeInFav;
@property(nonatomic) _Bool bUseH5Note; // @synthesize bUseH5Note=_bUseH5Note;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned int maxAutoDownloadSize; // @synthesize maxAutoDownloadSize=_maxAutoDownloadSize;
@property(nonatomic) unsigned int maxAutoUploadSize; // @synthesize maxAutoUploadSize=_maxAutoUploadSize;
@property(nonatomic) unsigned int maxFavFileSize; // @synthesize maxFavFileSize=_maxFavFileSize;
@property(nonatomic) int showFavIntroViewTimes; // @synthesize showFavIntroViewTimes=_showFavIntroViewTimes;
@property(nonatomic) unsigned long long totalCapacity; // @synthesize totalCapacity=_totalCapacity;
@property(nonatomic) unsigned long long usedCapacity; // @synthesize usedCapacity=_usedCapacity;

@end
