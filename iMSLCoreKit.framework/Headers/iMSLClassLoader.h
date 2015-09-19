//
//  iMSLClassLoader.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 30/08/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <iMSLCoreKit/iMSLObject.h>

@interface iMSLClassLoader : iMSLObject

+ (NSMapTable *)classesTable;

NSArray *iMSLClassGetSubclasses(Class parentClass);
NSArray *iMSLClassGetAllSubclasses(Class parentClass);
NSArray *iMSLClassGetLastSubclasses(Class parentClass);

@end
