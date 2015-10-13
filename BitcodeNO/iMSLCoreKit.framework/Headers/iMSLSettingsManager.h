//
//  iMSLSettingsManager.h
//
//  Created by Milan Horvatovic on 09/11/14.
//  Copyright (c) 2014 iMSoft Labs. All rights reserved.
//

#import "iMSLObject.h"

@interface iMSLSettingsManager : iMSLObject

+ (instancetype)sharedInstance;

+ (void)clearData;

@end

#import "iMSLSettingsManager+Application.h"
#import "iMSLSettingsManager+Crypto.h"
#import "iMSLSettingsManager+CoreData.h"
