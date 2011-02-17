//
//  KeyboardDoneBarAppDelegate.h
//  KeyboardDoneBar
//
//  Created by Costa Walcott on 2/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KeyboardDoneBarViewController;

@interface KeyboardDoneBarAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    KeyboardDoneBarViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet KeyboardDoneBarViewController *viewController;

@end

