//
//  MCJWTDecoder.h
//  DiscoveryDemoSDK
//
//  Created by Andoni Dan on 24/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MCJWTDecoder : NSObject

- (nonnull instancetype)initWithJWT:(nonnull NSString*)JWTString;

- (nullable NSData*)decodedValue;

@end
