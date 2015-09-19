//
//  iMSLArrayValueTransformer.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 17/07/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <iMSLCoreKit/iMSLValueTransformer.h>

@interface iMSLArrayValueTransformer : iMSLValueTransformer

@end

#pragma mark - NSString
@interface iMSLArrayOfStringValueTransformer : iMSLArrayValueTransformer

@end

@interface iMSLStringArrayValueTransformer : iMSLArrayValueTransformer

@end

#pragma mark - NSNumber
@interface iMSLArrayOfNumberValueTransformer : iMSLArrayValueTransformer

@end

@interface iMSLNumberArrayValueTransformer : iMSLArrayValueTransformer

@end