//
//  IIOInsertTransitionAnimation.h
//  InsertFramework
//
//  Created by Netanel Rabinowitz on 6/20/15.
//  Copyright (c) 2015 Insert. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>



@class IIOMTLViewTransition;
@interface IIOInsertTransitionAnimationHelper : NSObject
+ (void) addInTransiotionAnimationToView:(UIView *)view withTransiotion:(IIOMTLViewTransition *)viewTransition;
+ (void) animateScreenshotEffectWithCompletionBlock: (void(^)(void))completionBlock;
@end
