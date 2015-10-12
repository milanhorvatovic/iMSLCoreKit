//
//  iMSLSettingsManager+Crypto.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 07/10/15.
//  Copyright © 2015 iMSoft Labs. All rights reserved.
//

#import <iMSLCoreKit/iMSLCoreKit.h>

#import "iMSLCryptoFunctions.h"

extern NSString * const kSettingsCryptoPlistKeyDefaultEncodingTypeKey;
extern NSString * const kSettingsCryptoPlistKeyDefaultDecodingTypeString;

@interface iMSLSettingsManager (Crypto)

+ (iMSLStringEncodingType)cryptoDefaultEncodingTypeKey;
+ (iMSLStringEncodingType)cryptoDefaultDecodingTypeString;

@end
