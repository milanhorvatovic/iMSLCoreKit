//
//  iMSLCoreDataManager.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 12/10/15.
//  Copyright © 2015 iMSoft Labs. All rights reserved.
//

#import "iMSLObject.h"
#import <CoreData/CoreData.h>

extern NSUInteger const kCoreDataManagerBatchSize;

extern NSString * const kCoreDataManagerCrashedNotificationName;

@interface iMSLCoreDataManager : iMSLObject

@property (nonatomic, strong, readonly) NSManagedObjectContext *mainObjectContext;

+ (instancetype)sharedInstance;

- (void)resetMainObjectContext;

- (NSManagedObjectContext *)createObjectContext;

- (void)checkSaveObjectContext:(NSManagedObjectContext *)context withLimit:(NSInteger)limit;
- (void)checkSaveAndResetObjectContext:(NSManagedObjectContext *)context withLimit:(NSInteger)limit;

- (void)saveObjectContext:(NSManagedObjectContext *)context;
- (void)saveAndResetObjectContext:(NSManagedObjectContext *)context;

@end
