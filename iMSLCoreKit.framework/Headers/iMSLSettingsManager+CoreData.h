//
//  iMSLSettingsManager+CoreData.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 12/10/15.
//  Copyright © 2015 iMSoft Labs. All rights reserved.
//

#import <iMSLCoreKit/iMSLCoreKit.h>

@interface iMSLSettingsManager (CoreDataSQLite)

+ (NSString *)coreDataSQLiteVersion;
+ (NSString *)coreDataSQLiteModelName;
+ (NSString *)coreDataSQLiteModelVersion;

+ (NSString *)coreDataSQLitePreviousVersion;
+ (NSString *)coreDataSQLitePreviousModelName;
+ (NSString *)coreDataSQLitePreviousModelVersion;

+ (BOOL)coreDataSQLiteMoveFromPreviousVersion;

+ (BOOL)coreDataSQLiteAutoload;

@end
