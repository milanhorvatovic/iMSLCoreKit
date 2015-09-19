//
//  iMSLApplicationHandler.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 02/08/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import "iMSLObject.h"

@class iMSLApplicationHandler;

@protocol iMSLApplicationHandlerDelegate <NSObject>

#pragma mark Launching
@optional
- (void)applicationHandler:(iMSLApplicationHandler *)applicationHandler application:(UIApplication *)application willFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (void)applicationHandler:(iMSLApplicationHandler *)applicationHandler application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (void)applicationHandler:(iMSLApplicationHandler *)applicationHandler applicationDidFinishLaunching:(UIApplication *)application;

#pragma mark Moving to Background
@optional
- (void)applicationHandler:(iMSLApplicationHandler *)applicationHandler applicationWillResignActive:(UIApplication *)application;
- (void)applicationHandler:(iMSLApplicationHandler *)applicationHandler applicationDidEnterBackground:(UIApplication *)application;

#pragma mark Moving to Foreground
@optional
- (void)applicationHandler:(iMSLApplicationHandler *)applicationHandler applicationWillEnterForeground:(UIApplication *)application;
- (void)applicationHandler:(iMSLApplicationHandler *)applicationHandler applicationDidBecomeActive:(UIApplication *)application;

#pragma mark Terminating
@optional
- (void)applicationHandler:(iMSLApplicationHandler *)applicationHandler applicationWillTerminate:(UIApplication *)application;

#pragma mark Opening
@optional
- (void)applicationHandler:(iMSLApplicationHandler *)applicationHandler application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

#pragma mark User Notifications
@optional
- (void)applicationHandler:(iMSLApplicationHandler *)applicationHandler application:(UIApplication *)application didRegisterUserNotificationSettings:(UIUserNotificationSettings *)notificationSettings NS_AVAILABLE_IOS(8_0);
#pragma mark Remote Notifications
@optional
- (void)applicationHandler:(iMSLApplicationHandler *)applicationHandler application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
- (void)applicationHandler:(iMSLApplicationHandler *)applicationHandler application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;
- (void)applicationHandler:(iMSLApplicationHandler *)applicationHandler application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo;
#pragma mark Local Notifications
@optional
- (void)applicationHandler:(iMSLApplicationHandler *)applicationHandler application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification;

//@optional
//- (void)application:(UIApplication *)application willChangeStatusBarOrientation:(UIInterfaceOrientation)newStatusBarOrientation duration:(NSTimeInterval)duration;
//- (void)application:(UIApplication *)application didChangeStatusBarOrientation:(UIInterfaceOrientation)oldStatusBarOrientation;
//@optional
//- (void)application:(UIApplication *)application willChangeStatusBarFrame:(CGRect)newStatusBarFrame;
//- (void)application:(UIApplication *)application didChangeStatusBarFrame:(CGRect)oldStatusBarFrame;
//@optional
//- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;
//@optional
//- (void)application:(UIApplication *)application didUpdateUserActivity:(NSUserActivity *)userActivity NS_AVAILABLE_IOS(8_0);

@end

@interface iMSLApplicationHandler : iMSLObject

@property (nonatomic, strong, readonly) id<UIApplicationDelegate> originalApplicationDelegate;

+ (instancetype)sharedInstance;

- (instancetype)initWithDelegate:(id<iMSLApplicationHandlerDelegate>)delegate;

- (void)addDelegate:(id<iMSLApplicationHandlerDelegate>)delegate;
- (void)removeDelegate:(id<iMSLApplicationHandlerDelegate>)delegate;

@end
