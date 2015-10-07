//
//  InsertManager.h
//  InsertFramework
//
//  Created by Oded Regev on 5/13/15.
//  Copyright (c) 2015 Insert. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface InsertManager : NSObject


extern NSString * const kUrlParamsKeySessionID;


+ (instancetype) sharedManager;
- (void) startManagerWithAppKey:(nonnull NSString *) appKey;
- (void) startManagerWithUrl:(nonnull NSURL *)url;

@end
NS_ASSUME_NONNULL_END
