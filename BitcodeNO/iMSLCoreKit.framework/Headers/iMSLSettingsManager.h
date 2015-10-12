//
//  iMSLSettingsManager.h
//
//  Created by Milan Horvatovic on 09/11/14.
//  Copyright (c) 2014 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface iMSLSettingsManager : NSObject

+ (instancetype)sharedInstance;

+ (BOOL)isFirstRunApplication;
+ (void)setIsFirstRunApplication:(BOOL)firstRun;

+ (void)clearData;

@end
