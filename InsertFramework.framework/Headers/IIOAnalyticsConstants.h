//
//  IIOAnalyticsConstants.h
//  InsertFramework
//
//  Created by Netanel Rabinowitz on 7/7/15.
//  Copyright (c) 2015 Insert. All rights reserved.
//

#import <Foundation/Foundation.h>



#pragma mark - youtube

typedef NS_ENUM(NSInteger, IIOAnalyticsOrienatation){
    IIOAnalyticsOrienatationPortrait,
    IIOAnalyticsOrienatationLandscape
};

typedef NS_ENUM(NSInteger, IIOAnalyticsVideoStopReason){
    IIOAnalyticsVideoStopReasonPlayInBrowser,
    IIOAnalyticsVideoStopReasonConnectivity,
    IIOAnalyticsVideoStopReasonAppInBackground,
    IIOAnalyticsVideoStopReasonCloseButton
};

typedef NS_ENUM(NSInteger, IIOAnalyticsVideoEvent){
    IIOAnalyticsVideoEventVideoPlay,
    IIOAnalyticsVideoEventVideoPause,
    IIOAnalyticsVideoEventVideoComplete,
    IIOAnalyticsVideoEventVideoStop,
    IIOAnalyticsVideoEventOrientationChange,
    IIOAnalyticsVideoEventVideoBuffering,
    IIOAnalyticsVideoEventVideoFullScreen,
    IIOAnalyticsVideoEventVideoResumed
};

typedef NS_ENUM(NSInteger, IIOAnalyticsVideoState){
    IIOAnalyticsVideoStatePlay,
    IIOAnalyticsVideoStatePause,
    IIOAnalyticsVideoStateBuffer,
    IIOAnalyticsVideoStateUnknown
};


#pragma mark - CtaButton

typedef NS_ENUM(NSInteger, IIOAnalyticsClickableElementType){
    IIOAnalyticsClickableElementTypeButton,
    IIOAnalyticsClickableElementTypeImage
};

typedef NS_ENUM(NSInteger, IIOAnalyticsCtaActionType){
    IIOAnalyticsCtaActionTypeWeblink,
    IIOAnalyticsCtaActionTypeDeeplink,
    IIOAnalyticsCtaActionTypeClose,
    IIOAnalyticsCtaActionTypeSubmit
};

#pragma mark - Insert Generic

typedef NS_ENUM(NSInteger, IIOAnalyticsDismissedReason){
    IIOAnalyticsDismissedReasonTimeout,
    IIOAnalyticsDismissedReasonCloseButton,
    IIOAnalyticsDismissedReasonUserAction,
    IIOAnalyticsDismissedReasonAppInBackground
};

typedef NS_ENUM(NSInteger, IIOAnalyticsNotDisplayedReason){
    IIOAnalyticsNotDisplayedReasonCapping,
    IIOAnalyticsNotDisplayedReasonConnectivity,
    IIOAnalyticsNotDisplayedReasonError
};


// event key and types
FOUNDATION_EXTERN NSString * const kEventKey;
FOUNDATION_EXTERN NSString * const kEventType_CTAClicked;
FOUNDATION_EXTERN NSString * const kEventType_VideoPlay;
FOUNDATION_EXTERN NSString * const kEventType_VideoPause;
FOUNDATION_EXTERN NSString * const kEventType_VideoComplete;
FOUNDATION_EXTERN NSString * const kEventType_VideoStop;
FOUNDATION_EXTERN NSString * const kEventType_OrientationChange;
FOUNDATION_EXTERN NSString * const kEventType_VideoBuffering;
FOUNDATION_EXTERN NSString * const kEventType_VideoFullScreen;
FOUNDATION_EXTERN NSString * const kEventType_FormSubmitted;


FOUNDATION_EXTERN NSString * const kInsertDisplayed;
FOUNDATION_EXTERN NSString * const kInsertNotDisplayed;
FOUNDATION_EXTERN NSString * const kInsertDismissed;

FOUNDATION_EXTERN NSString * const kErrorReportOnSDK_Error;

FOUNDATION_EXTERN NSString * const kAccessTokenKey;
FOUNDATION_EXTERN NSString * const kInsertIdKey;
FOUNDATION_EXTERN NSString * const kTriggeredByKey;
FOUNDATION_EXTERN NSString * const kDismissedByKey;
FOUNDATION_EXTERN NSString * const kTimestamp;
FOUNDATION_EXTERN NSString * const kTimeSinceStart; // this is the time from the app launch until the insert received 
FOUNDATION_EXTERN NSString * const kReasonKey;

FOUNDATION_EXTERN NSString * const kElementTypeKey;
FOUNDATION_EXTERN NSString * const kDisplayDurationInMills;
FOUNDATION_EXTERN NSString * const kAdditionalInfo;

FOUNDATION_EXTERN NSString * const kInsertDismissedByTimeout;
FOUNDATION_EXTERN NSString * const kInsertDismissedByCloseButton;
FOUNDATION_EXTERN NSString * const kInsertDismissedByUserAction;
FOUNDATION_EXTERN NSString * const kInsertDismissedByAppInBackground;
FOUNDATION_EXTERN NSString * const kInsertReceivedFromServer;

FOUNDATION_EXTERN NSString * const kInsert_NOT_Displayed_Reason_Capping;
FOUNDATION_EXTERN NSString * const kInsert_NOT_Displayed_Reason_Connectivity;


#pragma mark - Application Generic
FOUNDATION_EXTERN NSString *const kAppSessionStartKey;
FOUNDATION_EXTERN NSString *const kAppSessionEndKey;
FOUNDATION_EXTERN NSString *const kAppInBackgroundKey;

#pragma mark - Error Reporting
FOUNDATION_EXTERN NSString *const kErrorReasonUnexpectedError;
FOUNDATION_EXTERN NSString *const kErrorReasonConfigurationError;
FOUNDATION_EXTERN NSString *const kErrorReasonImageError;
FOUNDATION_EXTERN NSString *const kErrorReasonVideoError;


#pragma mark - Video related
// Const Keys
FOUNDATION_EXTERN NSString *const kVideoIdKey;
FOUNDATION_EXTERN NSString *const kVideoLengthMillsKey;
FOUNDATION_EXTERN NSString *const kOrientationKey;
FOUNDATION_EXTERN NSString *const kSeekBarTimeKey;
FOUNDATION_EXTERN NSString *const kTimestampKey;
FOUNDATION_EXTERN NSString *const kActionTypeKey;
FOUNDATION_EXTERN NSString *const kPlayDurationMillisKey;
FOUNDATION_EXTERN NSString *const kbufferDurationMillisKey;
FOUNDATION_EXTERN NSString *const kAdditionalInfoKey;
FOUNDATION_EXTERN NSString *const kStateKey;

// Const values for actionTypeKey
FOUNDATION_EXTERN NSString *const kVideoPlayActionType;
FOUNDATION_EXTERN NSString *const kVideoPauseActionType;

// Const values for event key (Triggers)
FOUNDATION_EXTERN NSString *const kUserActionEvent;
FOUNDATION_EXTERN NSString *const kVideoBufferingEvent;
FOUNDATION_EXTERN NSString *const kVideoCompleteEvent;
FOUNDATION_EXTERN NSString *const kVideoStoppedEvent;
FOUNDATION_EXTERN NSString *const kOrientationChangeEvent;
FOUNDATION_EXTERN NSString *const kFormSubmitEvent;

// Const values for reason key
FOUNDATION_EXTERN NSString *const kPlayInBrowserReason;
FOUNDATION_EXTERN NSString *const kConnectivityReason;
FOUNDATION_EXTERN NSString *const kAppInBackgroundReason;
FOUNDATION_EXTERN NSString *const kCloseButtonReason;

// Const values for orientation key
FOUNDATION_EXTERN NSString *const kLandScapeOrientation;
FOUNDATION_EXTERN NSString *const kPortraitOrientation;

// Const values for state
FOUNDATION_EXTERN NSString *const kVideoPlayState;
FOUNDATION_EXTERN NSString *const kVideoPauseState;
FOUNDATION_EXTERN NSString *const kVideoBufferState;

// Const values for orientation
FOUNDATION_EXTERN NSString *const kLandscape;
FOUNDATION_EXTERN NSString *const kPortrait;

#pragma mark - Image related
// const keys
FOUNDATION_EXTERN NSString *const kImageUrlKey;
FOUNDATION_EXTERN NSString *const kActionKey;

// const values for actionKey
//https://sites.google.com/a/insert.io/wiki/development/insert-analytics-data/insert-specific-data

FOUNDATION_EXTERN NSString *const kUrlBrowserEvent;
FOUNDATION_EXTERN NSString *const kDeeplinkEvent;
FOUNDATION_EXTERN NSString *const kCloseEvent;
FOUNDATION_EXTERN NSString *const kSubmitEvent;

// CTA element type
FOUNDATION_EXPORT NSString *const kElementType_Button;
FOUNDATION_EXPORT NSString *const kElementType_Image;

FOUNDATION_EXPORT NSString *const kElementIdKey;


// form element (additional info)
// the array of key-value is nested under this key
// i.e
// additionalInfo : {
//                  ...
//                      k_additionalInfo_RadioButtonInputKey = [
//                          (k_additionalInfo_RadioButtonInput_buttonGroupIdKey,k_additionalInfo_RadioButtonInput_selectedButtonIdKey)
//                      ] //end radio button group key value list
//                  ...
//                  } // end additionalInfo
FOUNDATION_EXPORT NSString *const k_additionalInfo_RadioButtonInputKey;
FOUNDATION_EXPORT NSString *const k_additionalInfo_RadioButtonInput_buttonGroupIdKey;
FOUNDATION_EXPORT NSString *const k_additionalInfo_RadioButtonInput_selectedButtonIdKey;
