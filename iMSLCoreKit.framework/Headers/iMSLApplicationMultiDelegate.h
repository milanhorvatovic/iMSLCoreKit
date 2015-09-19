//
//  iMSLApplicationMultiDelegate.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 06/08/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <iMSLCoreKit/iMSLCoreMultiDelegate.h>

@interface iMSLApplicationMultiDelegate : iMSLCoreMultiDelegate

- (instancetype)initWithDelegate:(id)delegate originalDelegate:(id)originalDelegate;

@end
