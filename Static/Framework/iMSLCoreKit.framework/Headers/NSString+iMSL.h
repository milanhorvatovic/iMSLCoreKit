//
//  NSString+iMSoftLabs.h
//
//  Created by Milan Horvatovic on 09/11/14.
//  Copyright (c) 2014 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

#import <UIKit/UIKit.h>
//@import UIKit;

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

- (NSString *)xorEncryptionWithKey:(NSString *)key;

#pragma mark NSData Hash
- (NSData *)md2;
- (NSData *)md4;
- (NSData *)md5;
- (NSData *)sha;
- (NSData *)sha224;
- (NSData *)sha256;
- (NSData *)sha384;
- (NSData *)sha512;

#pragma mark NSString Hash
- (NSString *)md2Hash;
- (NSString *)md4Hash;
- (NSString *)md5Hash;
- (NSString *)shaHash;
- (NSString *)sha224Hash;
- (NSString *)sha256Hash;
- (NSString *)sha384Hash;
- (NSString *)sha512Hash;

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