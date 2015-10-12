//
//  NSString+iMSoftLabs.h
//
//  Created by Milan Horvatovic on 09/11/14.
//  Copyright (c) 2014 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <UIKit/UIKit.h>

#import "iMSLCryptoFunctions.h"

@interface NSString (Parse)

#pragma mark - static methods
+ (UIColor *)colorFromString:(NSString *)colorString;
+ (CGSize)sizeFromString:(NSString *)frameString;
+ (CGRect)rectFromString:(NSString *)frameString;
+ (BOOL)boolValueFromString:(NSString *)boolValueString;
+ (BOOL)isNumberFromString:(NSString *)numberString;
+ (NSUInteger)integerValueFromHexString:(NSString *)hexString;

#pragma mark - instance methods
- (UIColor *)colorValue;
- (CGSize)sizeValue;
- (CGRect)rectValue;
- (BOOL)booleanValue;
- (BOOL)isNumber;
- (NSUInteger)integerValueFromHex;

@end

@interface NSString (Append)

+ (NSString *)append:(id) first, ...;

@end

@interface NSString (Validate)

- (BOOL)isValidNonEmpty;

@end

@interface NSString (Crypto)

- (NSString *)HMACWithSecret:(NSString *)secret;
+ (NSString *)fileMD5:(NSString *)path;

#pragma mark - XOR
#pragma mark - NSData
#pragma mark |-> KeyEncoding StringEncoding
- (NSData *)XORTransformationDataWithKey:(NSString *)key usingKeyEncoding:(iMSLStringEncodingType)keyEncodingType stringEncoding:(iMSLStringEncodingType)stringEncodingType;
#pragma mark |-> KeyEncoding StringEncodingDefault
- (NSData *)XORTransformationDataWithKey:(NSString *)key usingKeyEncoding:(iMSLStringEncodingType)keyDecodeEncodingType;
#pragma mark |-> KeyEncodingDefault StringEncodingDefault
- (NSData *)XORTransformationDataWithKey:(NSString *)key;
#pragma mark - NSString
#pragma mark |-> KeyEncoding StringEncoding
- (NSString *)XORTransformationStringWithKey:(NSString *)key usingKeyEncoding:(iMSLStringEncodingType)keyEncodingType stringEncoding:(iMSLStringEncodingType)stringEncodingType;
#pragma mark |-> KeyEncoding StringEncodingDefault
- (NSString *)XORTransformationStringWithKey:(NSString *)key usingKeyEncoding:(iMSLStringEncodingType)keyEncodingType;
#pragma mark |-> KeyEncodingDefault StringEncodingDefault
- (NSString *)XORTransformationStringWithKey:(NSString *)key;

#pragma mark - Hash
#pragma mark - NSData
#pragma mark |-> Decoding
#pragma mark |--> MD
- (NSData *)MD2HashDataUsingEncoding:(iMSLStringEncodingType)encodingType;
- (NSData *)MD4HashDataUsingEncoding:(iMSLStringEncodingType)encodingType;
- (NSData *)MD5HashDataUsingEncoding:(iMSLStringEncodingType)encodingType;
#pragma mark |--> SHA
- (NSData *)SHA1HashDataUsingEncoding:(iMSLStringEncodingType)encodingType;
- (NSData *)SHA224HashDataUsingEncoding:(iMSLStringEncodingType)encodingType;
- (NSData *)SHA256HashDataUsingEncoding:(iMSLStringEncodingType)encodingType;
- (NSData *)SHA384HashDataUsingEncoding:(iMSLStringEncodingType)encodingType;
- (NSData *)SHA512HashDataUsingEncoding:(iMSLStringEncodingType)encodingType;
- (NSData *)SHA3_224HashDataUsingEncoding:(iMSLStringEncodingType)encodingType;
- (NSData *)SHA3_256HashDataUsingEncoding:(iMSLStringEncodingType)encodingType;
- (NSData *)SHA3_384HashDataUsingEncoding:(iMSLStringEncodingType)encodingType;
- (NSData *)SHA3_512HashDataUsingEncoding:(iMSLStringEncodingType)encodingType;
#pragma mark |-> Default Decoding
#pragma mark |--> MD
- (NSData *)MD2HashData;
- (NSData *)MD4HashData;
- (NSData *)MD5HashData;
#pragma mark |--> SHA
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
#pragma mark |-> Encoding
#pragma mark |--> MD
- (NSString *)MD2HashStringUsingEncoding:(iMSLStringEncodingType)encodeEncodingType;
- (NSString *)MD4HashStringUsingEncoding:(iMSLStringEncodingType)encodeEncodingType;
- (NSString *)MD5HashStringUsingEncoding:(iMSLStringEncodingType)encodeEncodingType;
#pragma mark |--> SHA
- (NSString *)SHA1HashStringUsingEncoding:(iMSLStringEncodingType)encodeEncodingType;
- (NSString *)SHA224HashStringUsingEncoding:(iMSLStringEncodingType)encodeEncodingType;
- (NSString *)SHA256HashStringUsingEncoding:(iMSLStringEncodingType)encodeEncodingType;
- (NSString *)SHA384HashStringUsingEncoding:(iMSLStringEncodingType)encodeEncodingType;
- (NSString *)SHA512HashStringUsingEncoding:(iMSLStringEncodingType)encodeEncodingType;
- (NSString *)SHA3_224HashStringUsingEncoding:(iMSLStringEncodingType)encodeEncodingType;
- (NSString *)SHA3_256HashStringUsingEncoding:(iMSLStringEncodingType)encodeEncodingType;
- (NSString *)SHA3_384HashStringUsingEncoding:(iMSLStringEncodingType)encodeEncodingType;
- (NSString *)SHA3_512HashStringUsingEncoding:(iMSLStringEncodingType)encodeEncodingType;
#pragma mark |-> Default Encoding
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

@interface NSString (SeoText)

- (NSString *)canonicalized;
- (NSString *)seoText;

@end

@interface NSString (Encoding)

- (NSString *)utf8UrlEncoded;

@end

@interface NSString (Decoding)

- (NSString *)utf8UrlDecoded;

@end