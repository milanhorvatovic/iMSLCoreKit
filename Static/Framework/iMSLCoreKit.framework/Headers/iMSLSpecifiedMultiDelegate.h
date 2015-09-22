//
//  iMSLSpecifiedMultiDelegate.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 06/08/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import "iMSLCoreMultiDelegate.h"

@interface iMSLSpecifiedMultiDelegate : iMSLCoreMultiDelegate

@property (nonatomic, strong, readonly) Protocol *requiredProtocol;

- (instancetype)initWithProtocol:(Protocol *)protocol;
- (instancetype)initWithDelegates:(NSArray *)delegates protocol:(Protocol *)protocol;

@end
