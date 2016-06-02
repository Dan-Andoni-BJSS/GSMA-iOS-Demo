//
//  FrameworkTools.h
//  Pods
//
//  Created by Andoni Dan on 01/06/16.
//
//

#import <Foundation/Foundation.h>

@interface NSBundle(FrameworkPath)

+ (nullable NSBundle*)frameworkBundle;
+ (nullable NSString*)pathForResource:(nullable NSString*)resourceName ofType:(nullable NSString*)typeName;

@end
