
//
//  TokenModel.h
//  MobileConnectDemo
//
//  Created by Andoni Dan on 16/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import "MCModel.h"

@interface TokenModel : MCModel

@property (nullable) NSString *access_token;
@property (nullable) NSString *token_type;
@property (nullable) NSString *id_token;
@property (nullable) NSString *expires_in;
@property (nullable) NSString *refresh_token;

@end
