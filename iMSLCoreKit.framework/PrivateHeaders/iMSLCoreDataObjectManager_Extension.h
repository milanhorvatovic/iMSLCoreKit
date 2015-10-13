//
//  iMSLCoreDataObjectManager_Extension.h
//  iMSotf Labs Kit
//
//  Created by Milan Horvatovic on 12/01/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <iMSLCoreKit/iMSLCoreDataObjectManager.h>

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

@class iMSLCoreDataObjectOptions;

@interface iMSLCoreDataConditionOptionObject : NSObject

@property (nonatomic, assign, readwrite) BOOL negation;

@property (nonatomic, strong, readonly) NSString *identifier;
@property (nonatomic, assign, readonly) PredicateConditionCompareType compareType;
@property (nonatomic, strong, readonly) id identifierValue;

@property (nonatomic, assign, readwrite) BOOL bracketLeft;
@property (nonatomic, assign, readwrite) BOOL bracketRight;

@property (nonatomic, strong, readonly) NSString *customCondition;

+ (instancetype)conditionOptionWithIdentifier:(NSString *)identifier withCompareType:(PredicateConditionCompareType)compareType withIdentifierValue:(id)identifierValue;

- (instancetype)initWithIdentifier:(NSString *)identifier withCompareType:(PredicateConditionCompareType)compareType withIdentifierValue:(id)identifierValue;

@end

@interface iMSLCoreDataObjectOptions : NSObject

@property (nonatomic, strong, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong, readonly) NSString *entityIdentifier;

@property (nonatomic, strong, readonly) iMSLCoreDataConditionOptionObject *conditionOptionObject;
@property (nonatomic, strong, readonly) NSArray *conditionsOptionsObjects;
@property (nonatomic, strong, readonly) NSArray *conditionsLogicalTypes;

@property (nonatomic, strong, readonly) NSArray *sortDescriptors;

@property (nonatomic, assign, readonly) NSUInteger fetchOffset;
@property (nonatomic, assign, readonly) NSUInteger fetchLimit;

@property (nonatomic, strong, readonly) NSArray *identifiersToFetch;
@property (nonatomic, assign, readonly) BOOL identifiersToFetchDistinctValues;

+ (instancetype)coreDataOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withFieldIdentifier:(NSString *)fieldIdentifier withFieldIdentifierValue:(id)fieldIdentifierValue;
+ (instancetype)coreDataOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withFieldIdentifier:(NSString *)fieldIdentifier withFieldIdentifierValue:(id)fieldIdentifierValue withCompareConditionType:(PredicateConditionCompareType)compareConditionType;
+ (instancetype)coreDataOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withFieldIdentifier:(NSString *)fieldIdentifier withFieldIdentifierValue:(id)fieldIdentifierValue withCompareConditionType:(PredicateConditionCompareType)compareConditionType withSortDescriptors:(NSArray *)sortDescriptors;
+ (instancetype)coreDataOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withFieldIdentifier:(NSString *)fieldIdentifier withFieldIdentifierValue:(id)fieldIdentifierValue withCompareConditionType:(PredicateConditionCompareType)compareConditionType withSortDescriptors:(NSArray *)sortDescriptors withFetchOffset:(NSUInteger)fetchOffset withFetchLimit:(NSUInteger)fetchLimit;

+ (instancetype)coreDataOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withCustomCondition:(NSString *)customCondition withFieldIdentifierValue:(id)fieldIdentifierValue;
+ (instancetype)coreDataOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withCustomCondition:(NSString *)customCondition withFieldIdentifierValue:(id)fieldIdentifierValue withSortDescriptors:(NSArray *)sortDescriptors;
+ (instancetype)coreDataOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withCustomCondition:(NSString *)customCondition withFieldIdentifierValue:(id)fieldIdentifierValue withSortDescriptors:(NSArray *)sortDescriptors withFetchOffset:(NSUInteger)fetchOffset withFetchLimit:(NSUInteger)fetchLimit;

+ (instancetype)coreDataOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withConditionsOptionsObjects:(NSArray *)conditionsOptionsObjects withConditionsLogicalTypes:(NSArray *)conditionsLogicalTypes;
+ (instancetype)coreDataOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withConditionsOptionsObjects:(NSArray *)conditionsOptionsObjects withConditionsLogicalTypes:(NSArray *)conditionsLogicalTypes withSortDescriptors:(NSArray *)sortDescriptors;
+ (instancetype)coreDataOptionsWithManagedObjectContext:(NSManagedObjectContext *)context withEntityIdentifier:(NSString *)entityIdentifier withConditionsOptionsObjects:(NSArray *)conditionsOptionsObjects withConditionsLogicalTypes:(NSArray *)conditionsLogicalTypes withSortDescriptors:(NSArray *)sortDescriptors withFetchOffset:(NSUInteger)fetchOffset withFetchLimit:(NSUInteger)fetchLimit;

@end

@interface iMSLCoreDataObjectManager ()

+ (NSManagedObject *)_objectWithDatabaseOptions:(iMSLCoreDataObjectOptions *)options;
+ (NSArray *)_objectsWithDatabaseOptions:(iMSLCoreDataObjectOptions *)options;
+ (NSUInteger)_objectsCountWithDatabaseOptions:(iMSLCoreDataObjectOptions *)options;
+ (NSString *)_conditionStringFromConditionLogicalType:(PredicateConditionLogicalType)conditionType;
+ (NSString *)_conditionStringFromConditionCompareType:(PredicateConditionCompareType)conditionCompareType;
+ (NSManagedObjectContext *)_constructContextFromDatabaseOptions:(iMSLCoreDataObjectOptions *)options;
+ (NSFetchRequest *)_constructFetchRequestFromDatabaseOptions:(iMSLCoreDataObjectOptions *)options forManagedObjectContext:(NSManagedObjectContext *)managedObjectContext;
+ (NSPredicate *)_constructPredicateFromDatabaseOptions:(iMSLCoreDataObjectOptions *)options;

@end
