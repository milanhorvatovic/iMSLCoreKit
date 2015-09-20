//
//  NSInvocationOptionWrapper.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 17/07/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

@interface iMSLInvocationOptionWrapper : NSObject

@property (nonatomic, weak, readonly) NSInvocationOperation *operation;
//@property (nonatomic, copy, readonly) id option;
@property (nonatomic, strong, readonly) id option;

- (instancetype)initWithOperationWithOption:(id)option;
- (instancetype)initWithOperationWithOperation:(NSInvocationOperation *)operation option:(id)option;

@end
