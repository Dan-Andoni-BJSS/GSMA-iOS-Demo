//
//  MCConstants.h
//  DiscoveryDemoSDK
//
//  Created by Andoni Dan on 19/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#ifndef MCConstants_h
#define MCConstants_h


#endif /* MCConstants_h */


#define kMobileConnectErrorDomain @"com.gsma.mobileconnect"

typedef NS_ENUM(NSInteger, MCErrorCode)
{
    MCErrorCodeUserCancelled,
    MCErrorNoMNC_MCC,
    MCErrorNoPhoneNumber,
    MCErrorConcurrentDiscoveryOperations,
    MCInsufficientMobileConnectParameters,
    MCNoInternetConnection,
    MCOperatorNotFound
};

typedef NS_ENUM(NSInteger, MCLevelOfAssurance) {
    
    MCLevelOfAssurance2 = 2,
    MCLevelOfAssurance3 = 3
};