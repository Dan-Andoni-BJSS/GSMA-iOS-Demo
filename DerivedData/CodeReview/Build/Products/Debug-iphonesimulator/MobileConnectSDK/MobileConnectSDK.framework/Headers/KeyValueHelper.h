//
//  KeyValueHelper.h
//  MobileConnectDemo
//
//  Created by Andoni Dan on 13/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KeyValueHelper : NSObject

+ (nonnull NSDictionary*)queryParamsFromString:(nullable NSString*)string;

@end
