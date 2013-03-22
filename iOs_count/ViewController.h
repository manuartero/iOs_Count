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
    IBOutlet UITextField *output_text;
    NumberStore* numberStore;
}
- (IBAction)add_button:(id)sender;

@end
