//
//  NSNotificationCenter+iMSoftLabs.h
//
//  Created by Milan Horvatovic on 09/11/14.
//  Copyright (c) 2014 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

@interface NSNotificationCenter (PostMainThreadNotification)

+ (void)postMainThreadNotificationName:(NSString *)notificationName object:(id)object;
+ (void)postMainThreadNotificationName:(NSString *)notificationName object:(id)object userInfo:(NSDictionary *)userInfo;

@end
