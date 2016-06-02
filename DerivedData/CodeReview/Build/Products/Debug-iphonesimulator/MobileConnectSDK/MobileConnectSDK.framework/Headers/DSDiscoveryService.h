//
//  DSDiscoveryManager.h
//  DiscoveryDemoSDK
//
//  Created by Andoni Dan on 17/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DiscoveryResponse.h"
#import "MCManager.h"

typedef void (^DiscoveryDataResponse)(DiscoveryResponse * _Nullable operatorsData, NSError * _Nullable error);
typedef void (^DiscoveryResponseBlock)(UIViewController * _Nonnull controller, DiscoveryResponse * _Nullable operatorsData, NSError * _Nullable error);

@interface DSDiscoveryService : MCManager

- (nonnull instancetype)initWithApplicationEndpoint:(nonnull NSString*)endpoint;

- (void)setApplicationEndpoint:(nonnull NSString*)endpoint;

//start discovery with absolutely no data
- (void)startOperatorDiscoveryInController:(nonnull UIViewController*)controller withCompletitionHandler:(nullable DiscoveryResponseBlock)completitionHandler;

//start discovery with mcc_mnc data
- (void)startOperatorDiscoveryWithCountryCode:(nonnull NSString*)countryCode networkCode:(nonnull NSString*)networkCode withCompletitionHandler: (nullable DiscoveryDataResponse)completitionHandler;

//start discovery with phone number
- (void)startOperatorDiscoveryForPhoneNumber:(nonnull NSString*)phoneNumber withCompletitionHandler:(nullable DiscoveryDataResponse)completitionHandler;

@end
