//
//  NSData+Category.h
//
//  Created by Milan Horvatovic on 16/02/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

@interface NSData (Crypto)

- (NSData *)xorEncryptionWithKey:(NSString *)key;

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
