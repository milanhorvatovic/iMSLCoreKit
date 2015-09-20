//
//  iMSLProtocolProtected.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 07/08/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

@protocol iMSLCoreInitProtocolProtected <NSObject>

- (void)_willInit;
- (void)_becomeInit;
- (void)_didInit;

@end
