//
//  MCRequestConstructor.h
//  DiscoveryDemoSDK
//
//  Created by Andoni Dan on 19/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MCBaseRequestConstructor.h"
#import "MCConstants.h"

@interface MCRequestConstructor : MCBaseRequestConstructor

- (NSURLRequest*)authorizationRequestWithClientId:(NSString*)clientID
                                         acrValue:(MCLevelOfAssurance)levelOfAssurance
                                     subscriberId:(NSString*)subscriberId
                         atAuthorizationURLString:(NSString*)authorizationURLString;

- (NSURLRequest*)tokenRequestAtTokenURLString:(NSString*)tokenURLString withCode:(NSString*)code;

@end
