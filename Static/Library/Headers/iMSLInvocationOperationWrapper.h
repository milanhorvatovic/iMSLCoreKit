
//  NSInvocationOperationWrapper.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 17/07/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

@class iMSLInvocationOptionWrapper;

@interface iMSLInvocationOperationWrapper : NSInvocationOperation

@property (nonatomic, strong, readonly) iMSLInvocationOptionWrapper *option;

@end
