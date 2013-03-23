//
//  ViewController.h
//  iOs_count
//
//  Created by Manuel Artero Anguita on 22/03/13.
//  Copyright (c) 2013 Manuel Artero Anguita. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NumberStore.h"

@interface ViewController : UIViewController
{
    IBOutlet UITextField* output_text;
    NumberStore* numberStore;
}
// properties of the <Interface Builder> objects
@property(nonatomic, retain) IBOutlet UITextField* output_text;

// instance methods
- (IBAction)add_button:(id)sender;
- (IBAction)mul_button:(id)sender;

@end
