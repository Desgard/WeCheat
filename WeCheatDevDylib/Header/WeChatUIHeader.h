//
//  WeChatUIHeader.h
//  WeCheat
//
//  Created by Harry Twan on 12/09/2017.
//  Copyright © 2017 Harry Twan. All rights reserved.
//

#ifndef WeChatUIHeader_h
#define WeChatUIHeader_h

//@interface NewSettingViewController
//
//- (void)reloadTableData;
//
//@end

@interface MMTableView

- (void)reloadData;

@end

@interface MMTableViewInfo

- (void)insertSection:(id)arg1 At:(unsigned int)arg2;
- (id)getSectionAt:(unsigned int)arg1;
- (id)getTableView;

@end

@interface MMTableViewCellInfo

+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 on:(_Bool)arg4;
+ (id)editorCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 margin:(double)arg4 tip:(id)arg5 focus:(_Bool)arg6 text:(id)arg7;

@end

@interface MMTableViewSectionInfo

+ (id)sectionInfoDefaut;

- (id)getSectionAt:(unsigned int)arg1;
- (void)addCell:(id)arg1;

@end

#endif /* WeChatUIHeader_h */
