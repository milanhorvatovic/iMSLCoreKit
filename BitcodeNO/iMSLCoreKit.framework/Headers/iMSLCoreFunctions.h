//
//  iMSLCoreFunctions.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 12/10/15.
//  Copyright © 2015 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "iMSLDefines.h"

#pragma mark - Hex
#pragma mark - From Data
NSString *NSStringHexFromData(NSData *data);
NSString *NSStringHexFromBytes(uint8_t *data, size_t dataLength);
#pragma mark - To Data
NSData *NSDataFromHexString(NSString *string, iMSLStringEncodingType encodingType);
