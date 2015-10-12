//
//  CryptoFunctions.h
//  iMSotf Labs Kit
//
//  Created by Milan Horvatovic on 20/02/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "iMSLDefines.h"

#ifndef iMSLCryptoFunctions_H_
#define iMSLCryptoFunctions_H_

#pragma mark - Public
#pragma mark - Encoding
iMSL_INLINE NSStringEncoding NSStringEncodingFromEncodingType(iMSLStringEncodingType encodingType) {
    switch (encodingType) {
        case kStringEncodingTypeASCII:
            return NSASCIIStringEncoding;
            break;
        case kStringEncodingTypeUnicode:
            return NSUnicodeStringEncoding;
            break;
        case kStringEncodingTypeUTF8:
            return NSUTF8StringEncoding;
            break;
            /*
        case kStringEncodingTypeUTF16:
            return NSUTF16StringEncoding;
            break;
             */
        case kStringEncodingTypeUTF16BE:
            return NSUTF16BigEndianStringEncoding;
            break;
        case kStringEncodingTypeUTF32:
            return NSUTF32StringEncoding;
            break;
        case kStringEncodingTypeUTF32BE:
            return NSUTF32BigEndianStringEncoding;
            break;
        case kStringEncodingTypeCP1250:
            return NSWindowsCP1250StringEncoding;
            break;
        case kStringEncodingTypeUnknown:
        default:
            return 0;
            break;
    }
}

#endif /* iMSLCryptoFunctions_H_ */