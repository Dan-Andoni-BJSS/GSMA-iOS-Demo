//
//  WebController.h
//  DiscoveryDemoSDK
//
//  Created by Andoni Dan on 18/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MCWebControllerDelegate;

@interface MCWebController : UIViewController

@property (nonnull) NSObject<MCWebControllerDelegate>  *delegate;
@property (nonnull) NSURLRequest *requestToLoad;

@end

@protocol MCWebControllerDelegate <NSObject>

- (void)webControllerDidCancel:(nonnull MCWebController*)controller;
- (BOOL)webController:(nonnull MCWebController*)controller shouldRedirectToURL:(nonnull NSURL*)url;
- (void)webController:(nonnull MCWebController*)controller failedLoadingRequestWithError:(nullable NSError*)error;

@end
