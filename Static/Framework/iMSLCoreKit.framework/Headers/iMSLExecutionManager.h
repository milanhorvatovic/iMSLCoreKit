//
//  iMSLExecutionManager.h
//
//  Created by Milan Horvatovic on 09/11/14.
//  Copyright (c) 2014 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

typedef void (^iMSLExecutionManagerEmptyParamater_block_t)();

@interface iMSLExecutionManager : NSObject

+ (void)initializeQueue:(dispatch_queue_t)queue;
+ (dispatch_queue_t)createQueueWithLabel:(NSString *)label attribute:(dispatch_queue_attr_t)attribute;

+ (void)callbackOnMainQueue:(iMSLExecutionManagerEmptyParamater_block_t)block;
+ (void)asyncCallbackOnMainQueue:(iMSLExecutionManagerEmptyParamater_block_t)block;
+ (void)callbackOnMainQueue:(iMSLExecutionManagerEmptyParamater_block_t)block withDelay:(NSTimeInterval)delay;

+ (void)callbackOnBackgroundQueue:(iMSLExecutionManagerEmptyParamater_block_t)block;
+ (void)asyncCallbackOnBackgroundQueue:(iMSLExecutionManagerEmptyParamater_block_t)block;
+ (void)callbackOnBackgroundThread:(iMSLExecutionManagerEmptyParamater_block_t)block withDelay:(NSTimeInterval)delay;

+ (void)callbackOnBackgroundConcurrentQueue:(iMSLExecutionManagerEmptyParamater_block_t)block;
+ (void)asyncCallbackOnBackgroundConcurrentQueue:(iMSLExecutionManagerEmptyParamater_block_t)block;
+ (void)callbackOnBackgroundConcurrentQueue:(iMSLExecutionManagerEmptyParamater_block_t)block withDelay:(NSTimeInterval)delay;

+ (void)callbackOnBackgroundSystemQueue:(iMSLExecutionManagerEmptyParamater_block_t)block;
+ (void)asyncCallbackOnBackgroundSystemQueue:(iMSLExecutionManagerEmptyParamater_block_t)block;
+ (void)callbackOnBackgroundSystemQueue:(iMSLExecutionManagerEmptyParamater_block_t)block withDelay:(NSTimeInterval)delay;

@end
