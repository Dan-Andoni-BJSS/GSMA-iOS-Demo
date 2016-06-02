//
//  MobileConnectSDK.h
//  DiscoveryDemoSDK
//
//  Created by Andoni Dan on 23/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MCButton.h"
#import "TokenResponseModel.h"

typedef void (^MobileConnectSDKResponseBlock)(TokenResponseModel * _Nullable tokenResponse, NSError * _Nullable error);

@protocol MobileConnectSDKDelegate <NSObject>

@optional
- (void)mobileConnectWillStart;
- (void)mobileConnectWillPresentWebController;
- (void)mobileConnectWillDismissWebController;
- (void)mobileConnectDidGetTokenResponse:(nonnull TokenResponseModel*)tokenResponse;
- (void)mobileConnectFailedGettingTokenWithError:(nonnull NSError*)error;

@end

@interface MobileConnectSDK : NSObject

#pragma mark - Setters
+ (void)setClientKey:(nonnull NSString*)clientKey;
+ (void)setClientSecret:(nonnull NSString*)clientSecret;
+ (void)setRedirectURL:(nonnull NSString*)redirectURL;
+ (void)setApplicationEndpoint:(nonnull NSString*)applicationEndpoint;
+ (void)setDelegate:(nullable NSObject<MobileConnectSDKDelegate>*)delegate;

#pragma mark - UI elements
+ (nonnull MCButton*)button;

#pragma mark - Actions
//if handler is provided the delegate will not be called
+ (void)getTokenInController:(nonnull UIViewController*)controller withCompletitionHandler:(nullable MobileConnectSDKResponseBlock)handler;

@end
