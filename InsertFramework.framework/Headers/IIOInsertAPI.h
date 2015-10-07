//
//  InsertAPI.h
//  InsertFramework
//
//  Created by Oded Regev on 5/31/15.
//  Copyright (c) 2015 Insert. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN
@interface IIOInsertAPI : NSObject

+ (instancetype) sharedInsertAPI;


- (void) registerDeviceToServer;

- (void) getInsertsFromServer;

- (BOOL) getAccessTokenFromServer;

- (void) sendAnalyticsEventsBufferToServer:(NSArray * __nonnull) events;


extern NSString * const kReceived401onAccessToken;
extern NSString * const kReceivedInsertsFromServer;

@property (nonatomic, strong) NSString *appKey;

@end
NS_ASSUME_NONNULL_END
