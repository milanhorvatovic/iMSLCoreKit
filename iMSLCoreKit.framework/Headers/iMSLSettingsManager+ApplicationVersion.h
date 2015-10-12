//
//  iMSLSettingsManager+ApplicationVersion.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 07/10/15.
//  Copyright © 2015 iMSoft Labs. All rights reserved.
//

#import "iMSLSettingsManager.h"

@interface iMSLSettingsManager (ApplicationVersion)

+ (NSString *)appVersion;
+ (NSString *)appVersionPrevious;

@end
