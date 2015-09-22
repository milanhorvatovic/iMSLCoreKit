//
//  CoreKitFW.h
//  CoreKitFW
//
//  Created by Milan Horvatovic on 16/07/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

//! Project version number for CoreKitFW.
//#ifdef CORE_DEPENDENCY
extern double CoreKitFWVersionNumber;
//#else
//FOUNDATION_EXPORT double CoreKitFWVersionNumber;
//#endif

//! Project version string for CoreKitFW.
//#ifdef CORE_DEPENDENCY
extern const unsigned char CoreKitFWVersionString[];
//#else
//FOUNDATION_EXPORT const unsigned char CoreKitFWVersionString[];
//#endif

// In this header, you should import all the public headers of your framework using statements like #import <CoreKitFW/PublicHeader.h>

#pragma mark - Class -
#import <iMSLCoreKit/iMSLClassLoader.h>

#pragma mark - Common -
#import <iMSLCoreKit/iMSLDefines.h>
#import <iMSLCoreKit/iMSLCryptoFunctions.h>
#import <iMSLCoreKit/iMSLCoreValidatesFunctions.h>

#pragma mark - Object
#import <iMSLCoreKit/iMSLObject.h>

#pragma mark - Category
#pragma mark 
#pragma mark NSNotificationCenter
#import <iMSLCoreKit/NSNotificationCenter+iMSL.h>
#pragma mark NSData
#import <iMSLCoreKit/NSData+iMSL.h>
#pragma mark NSString
#import <iMSLCoreKit/NSString+iMSL.h>
#pragma mark UIDevice
#import <iMSLCoreKit/UIDevice+iMSL.h>
#pragma mark KeychainStore
#import <iMSLCoreKit/UICKeyChainStore+iMSL.h>

#pragma mark - Cipher
#import <iMSLCoreKit/iMSLAESBlockCipher.h>

#pragma mark - Data
#pragma mark Transform
#import <iMSLCoreKit/iMSLValueTransformer.h>
#import <iMSLCoreKit/iMSLArrayValueTransformer.h>

#pragma mark - Manager
#pragma mark |-> Database
#import <iMSLCoreKit/iMSLCDObjectManager.h>
#import <iMSLCoreKit/iMSLDatabaseManager.h>
#pragma mark |-> Directory
#import <iMSLCoreKit/iMSLDirectoryManager.h>
#pragma mark |-> Execution
#import <iMSLCoreKit/iMSLExecutionManager.h>
#pragma mark |-> Settings
#import <iMSLCoreKit/iMSLSettingsManager.h>
#pragma mark |-> UDID
#import <iMSLCoreKit/iMSLUDIDManager.h>

#pragma mark - Handler
#pragma mark |-> Application
#import <iMSLCoreKit/iMSLApplicationHandler.h>
#pragma mark |-> Keyboard
#import <iMSLCoreKit/iMSLKeyboardHandler.h>

#pragma mark - Delegate
#import <iMSLCoreKit/iMSLMultiDelegate.h>
#import <iMSLCoreKit/iMSLSpecifiedMultiDelegate.h>
#import <iMSLCoreKit/iMSLApplicationMultiDelegate.h>

#pragma mark - Wrapper
#import <iMSLCoreKit/iMSLWeakWrapper.h>

#pragma mark - Operation
#pragma mark InvocationOperation
#import <iMSLCoreKit/iMSLInvocationOperationWrapper.h>
#import <iMSLCoreKit/iMSLInvocationOptionWrapper.h>
