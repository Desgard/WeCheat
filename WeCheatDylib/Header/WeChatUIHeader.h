//
//  WeChatUIHeader.h
//  WeCheat
//
//  Created by Harry Twan on 12/09/2017.
//  Copyright © 2017 Harry Twan. All rights reserved.
//

#ifndef WeChatUIHeader_h
#define WeChatUIHeader_h

@interface MMTableView

- (void)reloadData;

@end

@interface MMTableViewInfo

- (id)getSectionAt:(unsigned int)arg1;
- (id)getTableView;

@end

@interface MMTableViewSectionInfo

- (id)getSectionAt:(unsigned int)arg1;
- (void)addCell:(id)arg1;

@end

@interface MMTableViewCellInfo

+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 on:(_Bool)arg4;

@end

#endif /* WeChatUIHeader_h */
