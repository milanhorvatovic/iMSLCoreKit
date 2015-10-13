//
//  iMSLSettingsManager+Crypto.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 07/10/15.
//  Copyright © 2015 iMSoft Labs. All rights reserved.
//

#import "iMSLSettingsManager.h"

#import "iMSLDefines.h"

extern NSString * const kSettingsCryptoPlistKeyDefaultEncodingTypeKey;
extern NSString * const kSettingsCryptoPlistKeyDefaultDecodingTypeString;

@interface iMSLSettingsManager (Crypto)

+ (iMSLStringEncodingType)cryptoDefaultEncodingTypeKey;
+ (iMSLStringEncodingType)cryptoDefaultDecodingTypeString;

@end
