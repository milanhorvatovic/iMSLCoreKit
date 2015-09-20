//
//  AESBlockCipher.h
//  bloomberry
//
//  Created by Milan Horvatovic on 09/11/14.
//  Copyright (c) 2014 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

@interface iMSLAESBlockCipher : NSObject

@property (nonatomic, strong, readonly) NSString *cipherKey;

- (instancetype)initWithKey:(NSString *)key;

- (NSData *)encrypt:(NSData *)plainText;
- (NSData *)decrypt:(NSData *)cipherText;

@end
