//
//  iMSLWeekWrapper.h
//  iMSotf Labs Kit
//
//  Created by Milan Horvatovic on 4/30/14.
//  Copyright (c) 2014 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

@interface iMSLWeakWrapper : NSObject

@property (nonatomic, weak, readonly) id object;

+ (instancetype)weakWrapperWithObject:(id)object;

- (instancetype)initWithObject:(id)object;

@end
