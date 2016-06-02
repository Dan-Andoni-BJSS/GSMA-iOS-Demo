//
//  DiscoveryRequestConstructor.h
//  DiscoveryDemoSDK
//
//  Created by Andoni Dan on 18/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MCBaseRequestConstructor.h"

@interface DSDiscoveryRequestConstructor : MCBaseRequestConstructor

- (nonnull instancetype)initWithApplicationURLString:(nonnull NSString*)applicationURLString
                           redirectURLString:(nonnull NSString*)redirectURLString
                                   clientKey:(nonnull NSString*)clientKey
                                clientSecret:(nonnull NSString*)clientSecret;

- (nonnull NSURLRequest*)requestWithPhoneNumber:(nonnull NSString*)phoneNumber;
- (nonnull NSURLRequest*)requestWithMCC:(nonnull NSString*)mcc andMNC:(nonnull NSString*)mnc;

- (nonnull NSURLRequest*)requestWithParameters:(nullable NSDictionary*)parametersDictionary;

@end
