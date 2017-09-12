//
//  WECUIFindHook.m
//  WeCheat
//
//  Created by Harry Twan on 12/09/2017.
//  Copyright © 2017 Harry Twan. All rights reserved.
//

#import "WeCheatDylib.h"
#import "CaptainHook.h"
#import <UIKit/UIKit.h>
#import <Cycript/Cycript.h>

CHDeclareClass(AddContactToChatRoomViewController);

@class MMTableViewInfo;

CHOptimizedMethod0(self, void, AddContactToChatRoomViewController, reloadTableData) {
    CHSuper0(AddContactToChatRoomViewController, reloadTableData);
//    MMTableViewInfo *tableInfo = [self valueForKeyPath: @"m_tableViewInfo"];
//    NSLog(@"%@", tableInfo);
}

CHConstructor {
    CHLoadLateClass(AddContactToChatRoomViewController);
    CHClassHook0(AddContactToChatRoomViewController, reloadTableData);
}
