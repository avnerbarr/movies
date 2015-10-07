//
//  IIOScreenCapture.h
//  InsertFramework
//
//  Created by Avner Barr on 7/16/15.
//  Copyright (c) 2015 Insert. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IIOScreenCapture : NSObject

/**
 *  Returns a <b><u>dictionary</u></b> according to the protocol <a>https://sites.google.com/a/insert.io/wiki/development/pair-device-protocol</a>
 *
 *  @return The screen capture dictionary
 */
+(NSDictionary *)screenCaptureDictForSessionId:(NSString *)sessionId;


@end
