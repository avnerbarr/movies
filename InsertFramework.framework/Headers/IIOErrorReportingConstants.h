//
//  IIOErrorReportingConstants.h
//  InsertFramework
//
//  Created by Netanel Rabinowitz on 9/20/15.
//  Copyright (c) 2015 Insert. All rights reserved.
//

#ifndef InsertFramework_IIOErrorReportingConstants_h
#define InsertFramework_IIOErrorReportingConstants_h


typedef NS_ENUM(NSInteger, IIOErrorReasonType){
    IIOErrorReasonTypeUnexpectedError,
    IIOErrorReasonTypeConfigurationError,
    IIOErrorReasonTypeImageError,
    IIOErrorReasonTypeVideoError
};

#endif
