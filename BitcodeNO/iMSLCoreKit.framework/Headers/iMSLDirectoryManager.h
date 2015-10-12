//
//  iMSLDirectoryManager.h
//
//  Created by Milan Horvatovic on 09/11/14.
//  Copyright (c) 2014 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

typedef enum {
    ResultTypeURL = 0,
    ResultTypeAbsolutePath,
    ResultTypeRelativePath
} ResultType;


@interface iMSLDirectoryManager : NSObject

+ (NSString *)getLibraryDirectoryPath;
+ (NSString *)getDocumentDirectoryPath;
+ (NSString *)getTemporaryDirectoryPath;

+ (NSString *)getDirectoryPath;

+ (NSString *)getIdentityDirectoryPath;

+ (NSString *)coreDataDirectoryPath;
+ (NSString *)coreDataSQLiteDirectoryPath;

+ (void)createDirectoryHierarchy;

+ (BOOL)setFileAsNonBackupAtPath:(NSString *)filePath;

@end

