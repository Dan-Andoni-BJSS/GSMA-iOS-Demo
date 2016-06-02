//
//  AuthorizationModel.h
//  DiscoveryDemoSDK
//
//  Created by Andoni Dan on 20/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import "MCModel.h"

@interface AuthorizationModel : MCModel

@property (nullable) NSString *code;
@property (nullable) NSString *state;

@end
