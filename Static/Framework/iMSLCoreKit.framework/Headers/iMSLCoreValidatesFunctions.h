//
//  DefinesAndMacros.h
//
//  Created by Milan Horvatovic on 09/11/14.
//  Copyright (c) 2014 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

BOOL isStringValid(NSString *string);
BOOL isStringValidNotEmpty(NSString *string);
BOOL isStringValidWithLength(NSString *string, NSUInteger length);
BOOL isStringValidWithMinLength(NSString *string, NSUInteger length);

BOOL isArrayValid(NSArray *array);
BOOL isArrayValidNotEmpty(NSArray *array);
BOOL isArrayValidWithCount(NSArray *array, NSUInteger count);
BOOL isArrayValidWithMinCount(NSArray *array, NSUInteger count);

BOOL isSetValid(NSSet *set);
BOOL isSetValidNotEmpty(NSSet *set);
BOOL isSetValidWithCount(NSSet *set, NSUInteger count);
BOOL isSetValidWithMinCount(NSSet *set, NSUInteger count);

BOOL isDataValid(NSData *data);
BOOL isDataValidNotEmpty(NSData *data);
BOOL isDataValidWithLength(NSData *data, NSUInteger length);
BOOL isDataValidWithMinLength(NSData *data, NSUInteger length);

BOOL isValidEmail(NSString *emailString);
BOOL isValidPhone(NSString*phoneString);

BOOL isDictionaryContaintsObjectNotNull(NSDictionary *dictionary, NSString *key);
