//
//  NSData+Category.h
//
//  Created by Milan Horvatovic on 16/02/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "iMSLCryptoFunctions.h"

@interface NSData (Crypto)

#pragma mark - Hex
- (NSString *)hexString;

#pragma mark - XOR
#pragma mark - NSData
#pragma mark |-> KeyEncoding
- (NSData *)XORTransformationDataWithKey:(NSString *)key usingKeyEncoding:(iMSLStringEncodingType)keyEncodingType;
#pragma mark |-> KeyEncodingDefault
- (NSData *)XORTransformationDataWithKey:(NSString *)key;
#pragma mark - NSString
#pragma mark |-> KeyEncoding
- (NSString *)XORTransformationStringWithKey:(NSString *)key usingKeyEncoding:(iMSLStringEncodingType)keyEncodingType;
#pragma mark |-> KeyEncodingDefault
- (NSString *)XORTransformationStringWithKey:(NSString *)key;

#pragma mark - Hash

#pragma mark - NSData
#pragma mark |-> MD
- (NSData *)MD2HashData;
- (NSData *)MD4HashData;
- (NSData *)MD5HashData;
#pragma mark |-> SHA
- (NSData *)SHA1HashData;
- (NSData *)SHA224HashData;
- (NSData *)SHA256HashData;
- (NSData *)SHA384HashData;
- (NSData *)SHA512HashData;
- (NSData *)SHA3_224HashData;
- (NSData *)SHA3_256HashData;
- (NSData *)SHA3_384HashData;
- (NSData *)SHA3_512HashData;

#pragma mark - NSString
#pragma mark |--> MD
- (NSString *)MD2HashString;
- (NSString *)MD4HashString;
- (NSString *)MD5HashString;
#pragma mark |--> SHA
- (NSString *)SHA1HashString;
- (NSString *)SHA224HashString;
- (NSString *)SHA256HashString;
- (NSString *)SHA384HashString;
- (NSString *)SHA512HashString;
- (NSString *)SHA3_224HashString;
- (NSString *)SHA3_256HashString;
- (NSString *)SHA3_384HashString;
- (NSString *)SHA3_512HashString;

@end
