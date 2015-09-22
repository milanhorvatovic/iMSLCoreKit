//
//  DefinesAndMacros.h
//
//  Created by Milan Horvatovic on 09/11/14.
//  Copyright (c) 2014 iMSoft Labs. All rights reserved.
//

#ifndef DefinesAndMacros_h
#define DefinesAndMacros_h

    typedef void (^void_block_t)();
    typedef void (^void_block_with_void_block_t)(void_block_t);

    #define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
    #define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
    #define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
    #define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
    #define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

    #ifdef DEBUG
        #define DLog( s, ... ) NSLog( @"<%p %@[%@]:(%d)> %@", self, [[NSString stringWithUTF8String:__FILE__] lastPathComponent], [self class], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__] )
    #else
        #define DLog( s, ... )
    #endif

    #define ErrorLog(error) \
        if (error != nil) {                                                                                     \
            NSLog(@"%s[%d] - %s: ERROR: %@", __FILE__, __LINE__, __FUNCTION__, error.localizedDescription);     \
            /* \
            NSArray *detailedErrors = [[error userInfo] objectForKey:NSDetailedErrorsKey];                      \
            if (detailedErrors != nil && [detailedErrors count] > 0) {                                          \
                NSLog(@"\tDetailedError:");                                                                     \
                for (NSError *detailedError in detailedErrors) {                                                \
                    NSLog(@"\t\t%@", [detailedError userInfo]);                                                 \
                }                                                                                               \
            }                                                                                                   \
            else {                                                                                              \
                NSLog(@"\tError: %@", [error userInfo]);                                                        \
            }                                                                                                   \
*/\
        }                                                                                                       \

//    #define ErrorLog(error) \
//        if (error != nil) {                                                                                     \
//            NSLog(@"%s[%d] - %s: ERROR: %@", __FILE__, __LINE__, __FUNCTION__, error.localizedDescription);     \
//            NSLog(@"\tError: %@", [error userInfo]);                                                            \
//        }                                                                                                       \


    #define ErrorLogClear(error)    \
        ErrorLog(error);            \
        error = nil;

    #define ErrnoLog(errno) \
        NSLog(@"%s[%d] - %s: ERRNO: %d", __FILE__, __LINE__, __FUNCTION__, errno);						\
        NSLog(@"Description:");																			\
        char errnorBuffer[256];																			\
        if (strerror_r(errno, errnorBuffer, 256) == 0) {												\
            NSLog(@"\t:%s", errnorBuffer);																\
        }																								\

    #define ExceptionLog(exception) \
        NSLog(@"%s[%d] - %s: EXCEPTION: %@", __FILE__, __LINE__, __FUNCTION__, exception.description);	\
        NSArray *detailedErrors = [[exception userInfo] objectForKey:NSDetailedErrorsKey];				\
        if (detailedErrors != nil && [detailedErrors count] > 0) {										\
            NSLog(@"\tDetailedError:");																	\
            for (NSError *detailedError in detailedErrors) {											\
                NSLog(@"\t\t%@", [detailedError userInfo]);												\
            }																							\
        }																								\
        else {																							\
            NSLog(@"\tError: %@", [exception userInfo]);												\
        }

    #define DBoolFormated(value) (value ? @"YES" : @"NO")

    #define NSAssertParameterNil(condition, desc) NSAssert(condition, ([NSString stringWithFormat:@"Invalid parameter - %@ cannot be nil", desc]));

    #define NSAssertDoesntExist(condition, desc) NSAssert(condition, ([NSString stringWithFormat:@"Invalid parameter - %@ doesnt exists", desc]));

#endif
