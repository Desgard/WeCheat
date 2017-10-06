//
//  WECUIFindHook.m
//  WeCheat
//
//  Created by Harry Twan on 12/09/2017.
//  Copyright © 2017 Harry Twan. All rights reserved.
//

#import "WeCheatDevDylib.h"

// 个人设置，UI 修改部分
// 作为整体功能的开放入口


// 屏蔽个人信息，UI 修改部分
CHDeclareClass(AddContactToChatRoomViewController);

CHOptimizedMethod0(self, void, AddContactToChatRoomViewController, reloadTableData) {
    CHSuper0(AddContactToChatRoomViewController, reloadTableData);
    MMTableViewInfo *tableInfo = CHIvar(self, m_tableViewInfo, __strong MMTableViewInfo *);
    NSLog(@"%@", tableInfo);
    MMTableViewSectionInfo *sectionInfo = [tableInfo getSectionAt: 3];
    MMTableViewCellInfo *ignoreCellInfo = [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(sayTest)
                                                                                          target:[WeChatServiceManager shareManager]
                                                                                           title:@"无视这个智障"
                                                                                              on:NO];
    [sectionInfo addCell:ignoreCellInfo];
    MMTableView *tableView = [tableInfo getTableView];
    [tableView reloadData];
}

// 关闭部分入口

// 夜间模式
// 防止撤回
// 步数设定
// 定位选择
CHDeclareClass(NewSettingViewController);

CHOptimizedMethod0(self, void, NewSettingViewController, reloadTableData) {
    CHSuper0(NewSettingViewController, reloadTableData);
    
    MMTableViewInfo *tableInfo = CHIvar(self, m_tableViewInfo, __strong MMTableViewInfo *);
    MMTableViewSectionInfo *pluginSection = [objc_getClass("MMTableViewSectionInfo") sectionInfoDefaut];
    MMTableViewCellInfo *nightModeCellInfo = [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(handleNightMode:)
                                                                                             target:[WeCheatConfigCenter shareInstance]
                                                                                              title:@"Night Mode"
                                                                                                 on:[WeCheatConfigCenter shareInstance].isNightMode];
    MMTableViewCellInfo *revokeMsgCellInfo = [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(handleRevokeMsg:)
                                                                                             target:[WeCheatConfigCenter shareInstance]
                                                                                              title:@"Intercept Revoke Message"
                                                                                                 on:[WeCheatConfigCenter shareInstance].isNightMode];
    [pluginSection addCell:nightModeCellInfo];
    [pluginSection addCell:revokeMsgCellInfo];
    [tableInfo insertSection:pluginSection At:0];
    MMTableView *tableView = [tableInfo getTableView];
    [tableView reloadData];
}

CHConstructor {
    CHLoadLateClass(AddContactToChatRoomViewController);
    CHHook0(AddContactToChatRoomViewController, reloadTableData);
    CHLoadLateClass(NewSettingViewController);
    CHHook0(NewSettingViewController, reloadTableData);
}

// 屏蔽小红点
