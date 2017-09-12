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

CHDeclareClass(AddContactToChatRoomViewController)

//CHDeclareMethod0(void, AddContactToChatRoomViewController, reloadTableData) {
//    CHSuper0(AddContactToChatRoomViewController, reloadTableData);
//    NSString *userName = [FishConfigurationCenter sharedInstance].currentUserName;
//    MMTableViewInfo *tableInfo = [self valueForKeyPath:@"m_tableViewInfo"];
//    MMTableViewSectionInfo *sectionInfo = [tableInfo getSectionAt:1];
//    MMTableViewCellInfo *ignoreCellInfo = [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(handleIgnoreChatRoom:) target:[FishConfigurationCenter sharedInstance] title:@"屏蔽这个逗比" on:[FishConfigurationCenter sharedInstance].chatIgnoreInfo[userName].boolValue];
//    [sectionInfo addCell:ignoreCellInfo];
//    MMTableView *tableView = [tableInfo getTableView];
//    [tableView reloadData];
//}
//
//CHConstructor{
//    CHLoadLateClass(AddContactToChatRoomViewController);
//    CHClassHook(AddContactToChatRoomViewController);
//}



CHDeclareMethod0(void, AddContactToChatRoomViewController, reloadTableData) {
    CHSuper0(AddContactToChatRoomViewController, reloadTableData);
    NSLog(@"reload");
}
