//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CDownloadVideoWrap : NSObject
{
    NSString *m_nsFromUsrName;
    NSString *m_nsToUsrName;
    unsigned int m_uiLocalID;
    long long m_n64SvrID;
    unsigned int m_uiVideoTotalLen;
    unsigned int m_uiVideoStartPos;
    NSData *m_dtVideo;
    unsigned int m_uiNetwork;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;
@property(retain, nonatomic) NSData *m_dtVideo; // @synthesize m_dtVideo;
@property(nonatomic) long long m_n64SvrID; // @synthesize m_n64SvrID;
@property(retain, nonatomic) NSString *m_nsFromUsrName; // @synthesize m_nsFromUsrName;
@property(retain, nonatomic) NSString *m_nsToUsrName; // @synthesize m_nsToUsrName;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
@property(nonatomic) unsigned int m_uiNetwork; // @synthesize m_uiNetwork;
@property(nonatomic) unsigned int m_uiVideoStartPos; // @synthesize m_uiVideoStartPos;
@property(nonatomic) unsigned int m_uiVideoTotalLen; // @synthesize m_uiVideoTotalLen;

@end

