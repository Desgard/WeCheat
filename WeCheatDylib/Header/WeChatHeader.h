//
//  WeChatHeader.h
//  Wecheap
//
//  Created by Harry Twan on 11/09/2017.
//  Copyright © 2017 Harry Twan. All rights reserved.
//

#ifndef WeChatHeader_h
#define WeChatHeader_h

#import <UIKit/UIKit.h>

@interface CMessageWrap

@property(nonatomic, strong) NSString* m_nsContent;        //发送消息的内容
@property(nonatomic, strong) NSString* m_nsToUsr;          //发送人
@property(nonatomic, strong) NSString* m_nsFromUsr;        //接收人
@property(nonatomic, assign) unsigned long m_uiStatus;
@property(nonatomic, assign) unsigned long m_uiCreateTime;
@property(nonatomic, assign) unsigned long m_uiMessageType;
@property(nonatomic, assign) unsigned long m_uiGameType;
@property(nonatomic, assign) unsigned long m_uiGameContent;
@property(nonatomic, strong) NSString *m_nsEmoticonMD5;

+ (BOOL)isSenderFromMsgWrap:(CMessageWrap*) msgWrap;

- (CMessageWrap*)initWithMsgType:(int) type;

@end

@interface MMServiceCenter

- (id)getService:(Class) name;

@end

@interface CMessageMgr

- (void)AddLocalMsg:(NSString*)from MsgWrap:(CMessageWrap*) msgWrap;

@end

@interface GameController : NSObject

+ (NSString*)getMD5ByGameContent:(NSInteger) content;

@end

@interface ManualAuthAesReqData

-(void)setBundleId:(NSString*) bundleID;

@end

#endif /* WeChatHeader_h */
