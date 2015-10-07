//
//  IIOSwiftCategoryBridge.h
//  InsertFramework
//
//  Created by Netanel Rabinowitz on 9/3/15.
//  Copyright (c) 2015 Insert. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol IIOSwiftPerformSelector <NSObject>
//[self performSelector:nil withObject:nil afterDelay:0];
-(void)iio_performSelector:(SEL)selector withObject:(id)obj afterDelay:(NSTimeInterval)delay;
@end

@interface NSObject (IIOPerformSelectorSwift) <IIOSwiftPerformSelector>
-(void)iio_performSelector:(SEL)selector withObject:(id)obj afterDelay:(NSTimeInterval)delay;
@end
