//
//  OperatorDataResponse.h
//  MobileConnectDemo
//
//  Created by Andoni Dan on 13/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import "APISModel.h"
#import "MCModel.h"

@interface OperatorDataResponse : MCModel

@property (nullable) APISModel *apis;
@property (nullable) NSString *client_id;
@property (nullable) NSString *client_secret;
@property (nullable) NSString *country;
@property (nullable) NSString *currency;
@property (nullable) NSString *serving_operator;
@property (nullable) NSString *subscriber_id;

@end
