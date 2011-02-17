//
//  KeyboardDoneBarViewController.h
//  KeyboardDoneBar
//
//  Created by Costa Walcott on 2/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KeyboardDoneBarViewController : UIViewController {
	UITextView *textView;
	UIToolbar *keyboardToolbar;
}

@property (nonatomic, retain) IBOutlet UITextView *textView;
@property (nonatomic, retain) IBOutlet UIView *keyboardToolbar;

- (IBAction)hideKeyboard:(id)sender;

@end

