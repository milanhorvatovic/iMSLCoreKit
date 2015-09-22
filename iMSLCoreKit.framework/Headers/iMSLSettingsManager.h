//
//  iMSLSettingsManager.h
//
//  Created by Milan Horvatovic on 09/11/14.
//  Copyright (c) 2014 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

extern NSString * const kSettingsManagerKeyPathFirstRunApplication;
extern NSString * const kSettingsManagerKeyPathFirstRunApplicationPrivate;

extern NSString * const kSettingsManagerKeyPathApiToken;
extern NSString * const kSettingsManagerKeyPathApiTokenPrivate;

@interface iMSLSettingsManager : NSObject

+ (instancetype)sharedInstance;

+ (BOOL)isFirstRunApplication;
+ (void)setIsFirstRunApplication:(BOOL)firstRun;

+ (NSString *)appVersion;
+ (NSString *)appVersionPrevious;

+ (void)clearData;

@end
