//
//  DiscoveryResponse.h
//  MobileConnectDemo
//
//  Created by Andoni Dan on 13/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import "OperatorDataResponse.h"
#import "MCModel.h"

@interface DiscoveryResponse : MCModel

@property (nullable) OperatorDataResponse *response;
@property (nullable) NSString *subscriber_id;
@property (nullable) NSNumber *ttl;

@end
