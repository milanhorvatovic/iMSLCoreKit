//
//  UIDevice+iMSoftLabs.h
//
//  Created by Milan Horvatovic on 09/11/14.
//  Copyright (c) 2014 iMSoft Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
//@import UIKit;

@interface UIDevice (Language)

- (NSString *)languageCode;
- (NSString *)languageCodeLower;
- (NSString *)languageCodeUpper;

@end

@interface UIDevice (UDID)

- (NSString *)udid;
- (NSString *)udidStored;

@end

@interface UIDevice (ApplicationVersion)

- (NSString *)applicationNameAndVersionNumberDisplayString;

- (NSString *)applicationName;

- (NSString *)applicationVersionString;
- (NSNumber *)applicationVersionNumber;

#pragma mark Version
- (NSString *)applicationMajorVersionString;
- (NSNumber *)applicationMajorVersionNumber;

#pragma mark Build Version
- (NSString *)applicationMinorVersionString;
- (NSNumber *)applicationMinorVersionNumber;

@end

@interface UIDevice (DeviceInformation)

- (NSString *)machineName;
- (NSString *)deviceName;

@end