//
//  MCManager.h
//  DiscoveryDemoSDK
//
//  Created by Andoni Dan on 19/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MCWebController.h"

typedef void (^AFNetworkingResponseBlock)(NSURLResponse * _Nonnull response, id  _Nullable responseObject, NSError * _Nullable error);

@interface MCManager : NSObject<MCWebControllerDelegate>

@property BOOL isAwaitingResponse;

- (nonnull MCWebController *)webController;

- (void)didReceiveResponseWithParameters:(nullable NSDictionary*)parameters fromController:(nullable MCWebController*)controller;
- (void)finishWebBrowsingForController:(nonnull MCWebController*)controller withError:(nullable NSError*)error;
- (BOOL)canStartRequesting;

- (BOOL)isValidRedirectWithURL:(nonnull NSURL*)url inController:(nullable MCWebController*)controller;

- (void)executeRequest:(nonnull NSURLRequest*)request withSuccessBlock:(void (^ _Nullable)(NSDictionary * _Nullable responseDictionary))successBlock errorBlock:(void (^ _Nullable)(NSError * _Nonnull error))errorBlock;

//withCompletitionHandler:(nullable AFNetworkingResponseBlock)completitionHandler;

@end
