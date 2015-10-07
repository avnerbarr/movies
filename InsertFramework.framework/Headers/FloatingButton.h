//
//  FloatingButton.h
//  InsertFramework
//
//  Created by Oded Regev on 5/10/15.
//  Copyright (c) 2015 Insert. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface FloatingButton : NSObject


+ (instancetype) sharedButton;

- (void)showButton;

- (void)hideButton;

- (BOOL)isHidden;

- (BOOL)isViewSharedButton:(UIView *)view;

@end
