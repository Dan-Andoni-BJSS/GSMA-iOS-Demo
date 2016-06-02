//
//  MCRequestConstructor.h
//  DiscoveryDemoSDK
//
//  Created by Andoni Dan on 18/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>

@interface MCBaseRequestConstructor : NSObject

@property (nonnull) NSString *redirectURL;

- (nonnull instancetype)initWithClientKey:(nonnull NSString*)clientKey
                     clientSecret:(nonnull NSString*)clientSecret
                      redirectURL:(nonnull NSString*)redirectURL;

- (nonnull AFHTTPRequestSerializer*)defaultSerializer;

- (nonnull AFHTTPRequestSerializer*)authorizeSerializer:(nonnull AFHTTPRequestSerializer*)serializer;

@end
