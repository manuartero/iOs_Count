//
//  ViewController.m
//  iOs_count
//
//  Created by Manuel Artero Anguita on 22/03/13.
//  Copyright (c) 2013 Manuel Artero Anguita. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

/*
- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
*/

- (void)dealloc
{
    [output_text release];
    [numberStore release];
    [super dealloc];
}

- (IBAction)add_button:(id)sender
{
    int n = [numberStore number];
    [numberStore setNumber:(n+1)];
}

@end
