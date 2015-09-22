//
//  iMSLKeyboardHandler.h
//  iMSLCoreKit
//
//  Created by Milan Horvatovic on 02/08/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import "iMSLObject.h"

#import <UIKit/UIKit.h>
//@import UIKit;

@class iMSLKeyboardHandler;

@protocol iMSLKeyboardHandlerDelegate <NSObject>

@optional
- (void)keyboardHandler:(iMSLKeyboardHandler *)keyboardHandler keyboardWillChangeFrameFromFrame:(CGRect)fromFrame toFrame:(CGRect)toFrame;
- (void)keyboardHandler:(iMSLKeyboardHandler *)keyboardHandler keyboardDidChangeFrameFromFrame:(CGRect)fromFrame toFrame:(CGRect)toFrame;
@optional
- (void)keyboardHandler:(iMSLKeyboardHandler *)keyboardHandler keyboardWillShowFromFrame:(CGRect)fromFrame toFrame:(CGRect)toFrame;
- (void)keyboardHandler:(iMSLKeyboardHandler *)keyboardHandler keyboardDidShowFromFrame:(CGRect)fromFrame toFrame:(CGRect)toFrame;
@optional
- (void)keyboardHandler:(iMSLKeyboardHandler *)keyboardHandler keyboardWillHideFromFrame:(CGRect)fromFrame toFrame:(CGRect)toFrame;
- (void)keyboardHandler:(iMSLKeyboardHandler *)keyboardHandler keyboardDidHideFromFrame:(CGRect)fromFrame toFrame:(CGRect)toFrame;
@optional
- (void)keyboardHandler:(iMSLKeyboardHandler *)keyboardHandler frameChanged:(CGRect)frameDelta;

@end

@interface iMSLKeyboardHandler : iMSLObject

@property (nonatomic, assign, readonly, getter = isKeyboardVisible) BOOL keyboardVisible;
@property (nonatomic, assign, readonly) CGRect keyboardFrame;

+ (instancetype)sharedInstance;

- (instancetype)initWithDelegate:(id<iMSLKeyboardHandlerDelegate>)delegate;

- (void)addDelegate:(id<iMSLKeyboardHandlerDelegate>)delegate;
- (void)removeDelegate:(id<iMSLKeyboardHandlerDelegate>)delegate;

@end
