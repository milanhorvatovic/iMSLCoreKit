//
//  iMSLCDObjectManager_Extension.h
//  iMSotf Labs Kit
//
//  Created by Milan Horvatovic on 12/01/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import "iMSLCDObjectManager.h"

typedef NS_ENUM(NSUInteger, PredicateConditionLogicalType) {
    PredicateConditionLogicalTypeUnknow = 0,
    PredicateConditionLogicalTypeAnd,
    PredicateConditionLogicalTypeOr
};

typedef NS_ENUM(NSUInteger, PredicateConditionCompareType) {
    PredicateConditionCompareTypeUnknow = 0,
    PredicateConditionCompareTypeEmpty,
    PredicateConditionCompareTypeEqual,
    PredicateConditionCompareTypeNotEqual,
    PredicateConditionCompareTypeGreatenThan,
    PredicateConditionCompareTypeGreatenEqualThan,
    PredicateConditionCompareTypeLessThan,
    PredicateConditionCompareTypeLessEqualThan,
    PredicateConditionCompareTypeIn,
    PredicateConditionCompareTypeLike,
    PredicateConditionCompareTypeNotLike,
    PredicateConditionCompareTypeContains,
    PredicateConditionCompareTypeBeginWith,
    PredicateConditionCompareTypeEndsWith,
    /*
     PredicateConditionCompareTypeMatches
     */
};

@class DatabaseOptions;

@interface DatabaseConditionOptionObject : NSObject

@property (nonatomic, assign, readwrite) BOOL negation;

@property (nonatomic, strong, readonly) NSString *identifier;
@property (nonatomic, assign, readonly) PredicateConditionCompareType compareType;
@property (nonatomic, strong, readonly) id identifierValue;

@property (nonatomic, assign, readwrite) BOOL bracketLeft;
@property (nonatomic, assign, readwrite) BOOL bracketRight;

@property (nonatomic, strong, readonly) NSString *customCondition;

+ (DatabaseConditionOptionObject *)conditionOptionWithIdentifier:(NSString *)identifier withCompareType:(PredicateConditionCompareType)compareType withIdentifierValue:(id)identifierValue;

- (id)initWithIdentifier:(NSString *)identifier withCompareType:(PredicateConditionCompareType)compareType withIdentifierValue:(id)identifierValue;

@end

@interface DatabaseOptions : NSObject

@property (nonatomic, strong, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong, readonly) NSString *entityIdentifier;

@property (nonatomic, strong, readonly) DatabaseConditionOptionObject *conditionOptionObject;
@property (nonatomic, strong, readonly) NSArray *conditionsOptionsObjects;
@property (nonatomic, strong, readonly) NSArray *conditionsLogicalTypes;

@property (nonatomic, strong, readonly) NSArray *sortDescriptors;

@property (nonatomic, assign, readonly) NSUInteger fetchOffset;
@property (nonatomic, assign, readonly) NSUInteger fetchLimit;

@property (nonatomic, strong, readonly) NSArray *identifiersToFetch;
@property (nonatomic, assign, readonly) BOOL identifiersToFetchDistinctValues;

+ (DatabaseOptions *)databaseOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withFieldIdentifier:(NSString *)fieldIdentifier withFieldIdentifierValue:(id)fieldIdentifierValue;
+ (DatabaseOptions *)databaseOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withFieldIdentifier:(NSString *)fieldIdentifier withFieldIdentifierValue:(id)fieldIdentifierValue withCompareConditionType:(PredicateConditionCompareType)compareConditionType;
+ (DatabaseOptions *)databaseOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withFieldIdentifier:(NSString *)fieldIdentifier withFieldIdentifierValue:(id)fieldIdentifierValue withCompareConditionType:(PredicateConditionCompareType)compareConditionType withSortDescriptors:(NSArray *)sortDescriptors;
+ (DatabaseOptions *)databaseOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withFieldIdentifier:(NSString *)fieldIdentifier withFieldIdentifierValue:(id)fieldIdentifierValue withCompareConditionType:(PredicateConditionCompareType)compareConditionType withSortDescriptors:(NSArray *)sortDescriptors withFetchOffset:(NSUInteger)fetchOffset withFetchLimit:(NSUInteger)fetchLimit;

+ (DatabaseOptions *)databaseOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withCustomCondition:(NSString *)customCondition withFieldIdentifierValue:(id)fieldIdentifierValue;
+ (DatabaseOptions *)databaseOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withCustomCondition:(NSString *)customCondition withFieldIdentifierValue:(id)fieldIdentifierValue withSortDescriptors:(NSArray *)sortDescriptors;
+ (DatabaseOptions *)databaseOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withCustomCondition:(NSString *)customCondition withFieldIdentifierValue:(id)fieldIdentifierValue withSortDescriptors:(NSArray *)sortDescriptors withFetchOffset:(NSUInteger)fetchOffset withFetchLimit:(NSUInteger)fetchLimit;

+ (DatabaseOptions *)databaseOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withConditionsOptionsObjects:(NSArray *)conditionsOptionsObjects withConditionsLogicalTypes:(NSArray *)conditionsLogicalTypes;
+ (DatabaseOptions *)databaseOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withConditionsOptionsObjects:(NSArray *)conditionsOptionsObjects withConditionsLogicalTypes:(NSArray *)conditionsLogicalTypes withSortDescriptors:(NSArray *)sortDescriptors;
+ (DatabaseOptions *)databaseOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withConditionsOptionsObjects:(NSArray *)conditionsOptionsObjects withConditionsLogicalTypes:(NSArray *)conditionsLogicalTypes withSortDescriptors:(NSArray *)sortDescriptors withFetchOffset:(NSUInteger)fetchOffset withFetchLimit:(NSUInteger)fetchLimit;

@end

@interface iMSLCDObjectManager ()

+ (NSManagedObject *)_objectWithDatabaseOptions:(DatabaseOptions *)options;
+ (NSArray *)_objectsWithDatabaseOptions:(DatabaseOptions *)options;
+ (NSUInteger)_objectsCountWithDatabaseOptions:(DatabaseOptions *)options;
+ (NSString *)_conditionStringFromConditionLogicalType:(PredicateConditionLogicalType)conditionType;
+ (NSString *)_conditionStringFromConditionCompareType:(PredicateConditionCompareType)conditionCompareType;
+ (NSManagedObjectContext *)_constructContextFromDatabaseOptions:(DatabaseOptions *)options;
+ (NSFetchRequest *)_constructFetchRequestFromDatabaseOptions:(DatabaseOptions *)options forManagedObjectContext:(NSManagedObjectContext *)managedObjectContext;
+ (NSPredicate *)_constructPredicateFromDatabaseOptions:(DatabaseOptions *)options;

@end
