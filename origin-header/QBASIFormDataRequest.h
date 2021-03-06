//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBASIHTTPRequest.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface QBASIFormDataRequest : QBASIHTTPRequest <NSCopying>
{
    NSMutableArray *postData;
    NSMutableArray *fileData;
    int postFormat;
    unsigned long long stringEncoding;
}

+ (id)requestWithURL:(id)arg1;
- (void)addData:(id)arg1 forKey:(id)arg2;
- (void)addData:(id)arg1 withFileName:(id)arg2 andContentType:(id)arg3 forKey:(id)arg4;
- (void)addFile:(id)arg1 forKey:(id)arg2;
- (void)addFile:(id)arg1 withFileName:(id)arg2 andContentType:(id)arg3 forKey:(id)arg4;
- (void)addPostValue:(id)arg1 forKey:(id)arg2;
- (void)appendPostString:(id)arg1;
- (void)buildMultipartFormDataPostBody;
- (void)buildPostBody;
- (void)buildURLEncodedPostBody;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)encodeURL:(id)arg1;
@property(retain) NSMutableArray *fileData; // @synthesize fileData;
- (id)initWithURL:(id)arg1;
- (_Bool)isHeaderContainsContentType;
@property(retain) NSMutableArray *postData; // @synthesize postData;
@property int postFormat; // @synthesize postFormat;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 withFileName:(id)arg2 andContentType:(id)arg3 forKey:(id)arg4;
- (void)setFile:(id)arg1 forKey:(id)arg2;
- (void)setFile:(id)arg1 withFileName:(id)arg2 andContentType:(id)arg3 forKey:(id)arg4;
- (void)setPostValue:(id)arg1 forKey:(id)arg2;
@property unsigned long long stringEncoding; // @synthesize stringEncoding;

@end

