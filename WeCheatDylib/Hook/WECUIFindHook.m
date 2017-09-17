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
#import "WeChatServiceManager.h"

#import "WeChatUIHeader.h"

CHDeclareClass(AddContactToChatRoomViewController);

CHOptimizedMethod0(self, void, AddContactToChatRoomViewController, reloadTableData) {
    CHSuper0(AddContactToChatRoomViewController, reloadTableData);
    MMTableViewInfo *tableInfo = CHIvar(self, m_tableViewInfo, __strong MMTableViewInfo *);
    NSLog(@"%@", tableInfo);
    MMTableViewSectionInfo *sectionInfo = [tableInfo getSectionAt: 2];
    MMTableViewCellInfo *ignoreCellInfo = [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(sayTest)
                                                                                          target:[WeChatServiceManager shareManager]
                                                                                           title:@"无视这个智障"
                                                                                              on:NO];
    [sectionInfo addCell:ignoreCellInfo];
    MMTableView *tableView = [tableInfo getTableView];
    [tableView reloadData];
}

CHConstructor {
    CHLoadLateClass(AddContactToChatRoomViewController);
    CHClassHook0(AddContactToChatRoomViewController, reloadTableData);
}
