//
//  MCServices_MCServices_InternalAPI_h.h
//  DiscoveryDemoSDK
//
//  Created by Andoni Dan on 17/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import "MCServices.h"

@interface MCServices ()

@property (nonnull) NSString *clientKey;
@property (nonnull) NSString *clientSecret;
@property (nonnull) NSString *redirectURL;

+ (nonnull instancetype)sharedInstance;

@end
