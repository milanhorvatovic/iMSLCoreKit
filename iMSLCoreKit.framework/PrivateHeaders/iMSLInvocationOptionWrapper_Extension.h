//
//  NSInvocationOptionWrapper_Protected.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 17/07/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <iMSLCoreKit/iMSLInvocationOptionWrapper.h>

@interface iMSLInvocationOptionWrapper ()

@property (nonatomic, weak, readwrite) NSInvocationOperation *operation;
@property (nonatomic, strong, readwrite) id option;

@end
