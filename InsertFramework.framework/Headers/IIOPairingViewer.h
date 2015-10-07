//
//  IIOPairingViewer.h
//  InsertFramework
//
//  Created by Netanel Rabinowitz on 8/27/15.
//  Copyright (c) 2015 Insert. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface IIOPairingViewer : NSObject
+(IIOPairingViewer*)sharedManager;
-(BOOL)showInsertForPreview: (NSDictionary*) insertViewDictionary;
@end
