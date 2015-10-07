//
//  IIODimension.h
//  InsertFramework
//
//  Created by Oded Regev on 8/11/15.
//  Copyright (c) 2015 Insert. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "IIOWidgetPropertyTypes.h"

// Represents a Dimension type and a size
@interface IIODimension : NSObject
-(instancetype)initWithDimension:(IIODimensionType)dimension size:(CGFloat)size;
@property (nonatomic,assign) IIODimensionType dimension;
@property (nonatomic,assign) CGFloat size;

@end
