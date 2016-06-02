//
//  OperatorDataRedirectModel.h
//  DiscoveryDemoSDK
//
//  Created by Andoni Dan on 18/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import "MCModel.h"

@interface OperatorDataRedirectModel : MCModel

@property (nullable) NSString *mcc_mnc;
@property (nullable) NSString *subscriber_id;

- (nullable NSString*)mcc;
- (nullable NSString*)mnc;

@end
