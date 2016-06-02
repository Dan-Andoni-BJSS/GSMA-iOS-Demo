//
//  MCServices.h
//  DiscoveryDemoSDK
//
//  Created by Andoni Dan on 17/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MCServices : NSObject

+ (void)setClientKey:(nonnull NSString *)clientKey;
+ (void)setClientSecret:(nonnull NSString *)clientSecret;
+ (void)setRedirectURL:(nonnull NSString *)redirectURL;

@end
