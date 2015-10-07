//
//  IIOWidgetPropertyTypes.h
//  InsertFramework
//
//  Created by Avner Barr on 8/10/15.
//  Copyright (c) 2015 Insert. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IIONWTypes.h"
typedef NS_ENUM(NSInteger, IIOCTAActionType) {
    IIOCTAActionTypeUnknown,
    IIOCTAActionTypeWebLink,
    IIOCTAActionTypeClose,
    IIOCTAActionTypeDeeplink,
    IIOCTAActionTypeFormSubmit
};

typedef NS_ENUM(NSInteger, IIOCTAButtonStatus) {
    IIOCTAButtonStatusUnknown,
    IIOCTAButtonStatusEnabled,
    IIOCTAButtonStatusDisabled
};

typedef NS_OPTIONS(NSInteger, IIOLayoutGravityType) {
    IIOLayoutGravityTypeUnknown = 0,
    IIOLayoutGravityTypeTop = 1 << 0,
    IIOLayoutGravityTypeBottom = 1 << 1,
    IIOLayoutGravityTypeLeft = 1 << 2,
    IIOLayoutGravityTypeRight = 1 << 3,
    IIOLayoutGravityTypeCenter_vertical = 1 << 4,
    IIOLayoutGravityTypeCenter_horizontal = 1 << 5,
    IIOLayoutGravityTypeCenter = 1 << 6
};

typedef IIOLayoutGravityType IIOGravityType;

typedef NS_ENUM(NSInteger,IIOLinearLayoutOrientation) {
    IIOLinearLayoutOrientationUnknown,
    IIOLinearLayoutOrientationVertical,
    IIOLinearLayoutOrientationHorizontal
};

typedef NS_ENUM(NSInteger,IIOTextDirectionType) {
    IIOTextDirectionTypeUnknown = -1,
    IIOTextDirectionTypeLtr = NSTextAlignmentLeft,
    IIOTextDirectionTypeRtl = NSTextAlignmentRight
};

typedef NS_OPTIONS(NSInteger,IIOTextStyleType) {
    IIOTextStyleTypeUnknown = 0,
    IIOTextStyleTypeBold = 1 << 0,
    IIOTextStyleTypeUnderline = 1 << 1,
    IIOTextStyleTypeItalic = 1 << 2,
    IIOTextStyleTypeNormal = 1 << 3
};

typedef NS_ENUM(NSInteger,IIOYoutubeControlsStyle) {
    IIOYoutubeControlsStyleUnknown,
    IIOYoutubeControlsStyleDefault,
    IIOYoutubeControlsStyleNone
};

typedef NS_ENUM(NSInteger, IIOYoutubeAutoPlayType) {
    IIOYoutubeAutoPlayTypeUnknown = -1,
    IIOYoutubeAutoPlayTypeFalse = NO,
    IIOYoutubeAutoPlayTypeTrue = YES
};

typedef NS_ENUM(NSInteger, IIODimensionType) {
    IIODimensionTypeUnknown,
    IIODimensionTypeMatchParent,
    IIODimensionTypeWrapContent,
    IIODimensionTypeFreeForm
};

typedef NS_ENUM(NSInteger, IIOTooltipPositionType) {
    IIOTooltipPositionTypeUnknown,
    IIOTooltipPositionTypeAuto,
    IIOTooltipPositionTypeTop,
    IIOTooltipPositionTypeLeft,
    IIOTooltipPositionTypeBottom,
    IIOTooltipPositionTypeRight
};

typedef NS_ENUM(NSInteger, IIOMTLWidgetType) {
    IIOMTLWidgetTypeUnknown,
    IIOMTLWidgetTypeCloseButton,
    IIOMTLWidgetTypeImageView,
    IIOMTLWidgetTypeYoutubePlayer,
    IIOMTLWidgetTypeCTAButton,
    IIOMTLWidgetTypeRadioButtonGroup,
    IIOMTLWidgetTypeRadioButtonItem,
    IIOMTLWidgetTypeForm,
    IIOMTLWidgetTypeView,
    IIOMTLWidgetTypeLinearLayout,
    IIOMTLWidgetTypeTextView,
    IIOMTLWidgetTypeTooltip,
    IIOMTLWidgetTypeScrollView
};

#pragma mark -
#pragma mark Shared Preference Types
typedef NS_ENUM(NSInteger, IIOMTLSharedPreferenceConfigurationType) {
    IIOMTLSharedPreferenceConfigurationTypeUnknown,
    IIOMTLSharedPreferenceConfigurationTypeUser
};

typedef NS_ENUM(NSInteger, IIOMTLSharedPreferenceConfigurationValueType) {
    IIOMTLSharedPreferenceConfigurationValueTypeUnknown,
    IIOMTLSharedPreferenceConfigurationValueTypeString,
    IIOMTLSharedPreferenceConfigurationValueTypeNumber,
    IIOMTLSharedPreferenceConfigurationValueTypeBoolean,
    IIOMTLSharedPreferenceConfigurationValueTypeDate
};

typedef NS_ENUM(NSInteger, IIOMTLSharedPreferenceConfigurationOperator) {
    IIOMTLSharedPreferenceConfigurationOperatorUnknown,
    IIOMTLSharedPreferenceConfigurationOperatorEqual,
    IIOMTLSharedPreferenceConfigurationOperatorNotEqual
};


