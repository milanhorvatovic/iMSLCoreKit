//
//  DefinesAndMacros.h
//
//  Created by Milan Horvatovic on 09/11/14.
//  Copyright (c) 2014 iMSoft Labs. All rights reserved.
//

#ifndef DefinesAndMacros_h
#define DefinesAndMacros_h

typedef uint32_t CC_LONG;
typedef uint64_t CC_LONG64;

#pragma mark - HashType
typedef NS_ENUM(NSUInteger, iMSLHashType) {
#pragma mark - MD
    kHashTypeMD2,
    kHashTypeMD4,
    kHashTypeMD5,
#pragma mark - SHA
#pragma mark |-> 1
    kHashTypeSHA1,
#pragma mark |-> 2
    kHashTypeSHA2_224,
    kHashTypeSHA2_256,
    kHashTypeSHA2_384,
    kHashTypeSHA2_512,
#pragma mark |-> 3
    kHashTypeSHA3_224,
    kHashTypeSHA3_256,
    kHashTypeSHA3_384,
    kHashTypeSHA3_512
};
#pragma mark -

#pragma mark - StringEncodingType
typedef NS_ENUM(NSUInteger, iMSLStringEncodingType) {
    kStringEncodingTypeUnknown = 0,
    kStringEncodingTypeASCII = NSASCIIStringEncoding,
    kStringEncodingTypeUnicode = NSUnicodeStringEncoding,
    kStringEncodingTypeUTF8 = NSUTF8StringEncoding,
    kStringEncodingTypeUTF16 = NSUTF16StringEncoding,
    kStringEncodingTypeUTF16BE = NSUTF16BigEndianStringEncoding,
    kStringEncodingTypeUTF32 = NSUTF32StringEncoding,
    kStringEncodingTypeUTF32BE = NSUTF32BigEndianStringEncoding,
    kStringEncodingTypeCP1250 = NSWindowsCP1250StringEncoding,
};

#endif
