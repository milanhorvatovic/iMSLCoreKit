//
//  iMSLSettingsManager+Application.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 07/10/15.
//  Copyright © 2015 iMSoft Labs. All rights reserved.
//

#import "iMSLSettingsManager.h"

@interface iMSLSettingsManager (ApplicationRun)

+ (BOOL)isFirstRunApplication;
+ (void)setIsFirstRunApplication:(BOOL)firstRun;

@end


@interface iMSLSettingsManager (ApplicationVersion)

+ (NSString *)applicationVersion;
+ (NSString *)applicationVersionPrevious;

@end
