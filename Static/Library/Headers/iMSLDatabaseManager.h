//
//  iMSLDatabaseManager.h
//
//  Created by Milan Horvatovic on 09/11/14.
//  Copyright (c) 2014 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;
#import <CoreData/CoreData.h>
//@import CoreData;

extern NSUInteger kDatabaseManagerBatchSize;

extern NSString * const kDatabaseManagerDatabaseCrashedNotificationName;

@interface iMSLDatabaseManager : NSObject

@property (nonatomic, strong, readonly) NSManagedObjectContext *mainObjectContext;

+ (instancetype)sharedInstance;

- (void)resetMainContext;

- (NSManagedObjectContext *)createDatabaseContext;

- (void)checkDatabaseContextForSave:(NSManagedObjectContext *)context withLimit:(NSInteger)limit;
- (void)checkDatabaseContextForSaveAndReset:(NSManagedObjectContext *)context withLimit:(NSInteger)limit;

- (void)saveDatabaseContext:(NSManagedObjectContext *)context;
- (void)saveDatabaseContextAndReset:(NSManagedObjectContext *)context;

- (void)removeDatabase;

@end
