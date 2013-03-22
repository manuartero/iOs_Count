//
//  NumberStore.h
//  iOs_count
//
//  Created by Manuel Artero Anguita on 22/03/13.
//  Copyright (c) 2013 Manuel Artero Anguita. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NumberStore : NSObject
{
    int number;
}

-(id) init;                       // init
-(int) number;                    // get number
-(void) setNumber : (int)input;   // set number

@end

