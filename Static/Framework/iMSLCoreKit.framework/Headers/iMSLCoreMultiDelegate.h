//
//  iMSLCoreMultiDelegate.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 07/08/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import "iMSLObject.h"

@interface iMSLCoreMultiDelegate : iMSLObject

@property (nonatomic, strong, readonly) NSPointerArray *delegates;

@property (nonatomic, assign, readwrite, getter = isRequiredStrictResponding) BOOL requiredStrictResponding;

@property (nonatomic, assign, readonly) NSUInteger numberOfDelegates;

- (void)addDelegate:(id)delegate;
- (void)addDelegate:(id)delegate beforeDelegate:(id)otherDelegate;
- (void)addDelegate:(id)delegate afterDelegate:(id)otherDelegate;

- (void)removeDelegate:(id)delegate;
- (void)removeAllDelegates;

@end
