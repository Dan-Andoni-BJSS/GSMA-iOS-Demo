//
//  LinkModel.h
//  MobileConnectDemo
//
//  Created by Andoni Dan on 13/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import "MCModel.h"

@protocol LinkModel
@end

@interface LinkModel : MCModel

@property (nullable) NSString *href;
@property (nullable) NSString *rel;

@end
