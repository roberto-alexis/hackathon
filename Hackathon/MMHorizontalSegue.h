//
//  MMHorizontalSegue.h
//  Hackathon
//
//  Created by Roberto on 11/7/13.
//  Copyright (c) 2013 Medallia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MMHorizontalSegue : UIStoryboardSegue
@property (nonatomic, assign) BOOL isLandscapeOrientation;
@property (nonatomic, assign) BOOL isDismiss;
@end