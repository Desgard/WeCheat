//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QBFileUtils : NSObject
{
}

+ (_Bool)checkRootPathExist;
+ (id)commonFilePathWithName:(id)arg1;
+ (_Bool)deleteFileWithName:(id)arg1;
+ (_Bool)disableFileBackup:(id)arg1;
+ (id)fileNameWithPrefix:(id)arg1 subfix:(id)arg2;
+ (id)getDataWithFileName:(id)arg1;
+ (id)libPath;
+ (id)rootPath;
+ (_Bool)saveData:(id)arg1 withFileName:(id)arg2;
+ (void)setCommonFileDirectory:(id)arg1;

@end
