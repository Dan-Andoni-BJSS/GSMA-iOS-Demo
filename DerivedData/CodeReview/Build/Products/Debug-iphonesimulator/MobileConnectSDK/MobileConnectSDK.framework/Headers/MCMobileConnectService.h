//
//  MCMobileConnectManager.h
//  DiscoveryDemoSDK
//
//  Created by Andoni Dan on 19/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MCConstants.h"
#import "TokenModel.h"
#import "MCManager.h"

typedef void (^MobileConnectDataResponseBlock)(TokenModel * _Nullable tokenModel, NSError * _Nullable error);
typedef void (^MobileConnectControllerResponseBlock)(UIViewController * _Nonnull controller, TokenModel * _Nullable tokenModel, NSError * _Nullable error);

@interface MCMobileConnectService : MCManager

#pragma mark - Initialization
- (nonnull instancetype)initWithLevelOfAssurance:(MCLevelOfAssurance)levelOfAssurance
                                clientId:(nonnull NSString*)clientId
                        authorizationURL:(nonnull NSString*)authorizationURL
                                tokenURL:(nonnull NSString*)tokenURL;

- (nonnull instancetype)initWithClientId:(nonnull NSString*)clientId
                authorizationURL:(nonnull NSString*)authorizationURL
                        tokenURL:(nonnull NSString*)tokenURL;

#pragma mark - Mobile connect actions
- (void)getTokenWithSubscriberId:(nonnull NSString*)subscriberId completitionHandler:(nullable MobileConnectDataResponseBlock)completitionHandler;
- (void)getTokenInController:(nonnull UIViewController*)controller withCompletitionHandler:(nullable MobileConnectControllerResponseBlock)completitionHandler;

@end
