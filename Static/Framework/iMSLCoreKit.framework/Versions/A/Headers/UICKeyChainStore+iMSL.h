//
//  UICKeyChainStore+iMSL.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 17/07/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <UICKeyChainStore/UICKeyChainStore.h>
//@import UICKeyChainStore;

@interface UICKeyChainStore (iMSL)

+ (instancetype)deviceInstance;
+ (instancetype)accountInstance;

@end
