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

- (NSString *)appNameAndVersionNumberDisplayString;

- (NSString *)appName;

- (NSString *)appVersionString;
- (NSNumber *)appVersionNumber;

#pragma mark Version
- (NSString *)appMajorVersionString;
- (NSNumber *)appMajorVersionNumber;

#pragma mark Build Version
- (NSString *)appMinorVersionString;
- (NSNumber *)appMinorVersionNumber;

@end

@interface UIDevice (DeviceInformation)

- (NSString *)machineName;
- (NSString *)deviceName;

@end