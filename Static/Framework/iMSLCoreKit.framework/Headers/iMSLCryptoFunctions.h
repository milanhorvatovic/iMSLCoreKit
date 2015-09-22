//
//  CryptoFunctions.h
//  iMSotf Labs Kit
//
//  Created by Milan Horvatovic on 20/02/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

typedef uint32_t CC_LONG;
//#import <CommonCrypto/CommonDigest.h>
//#import <CommonCrypto/CommonCrypto.h>
//@import CommonCrypto;

NSData *NSDataXOREncryptionWithKey(NSString *key, NSData *data);

NSData *NSDataCCHashFunction(unsigned char *(function)(const void *data, CC_LONG len, unsigned char *md), CC_LONG digestLength, NSData *data);
NSString *NSStringCCHashFunction(unsigned char *(function)(const void *data, CC_LONG len, unsigned char *md), CC_LONG digestLength, NSData *data);
