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
    NSNumber* number;
}

-(id) init;                             // init
-(NSNumber*) number;                    // get number
-(void) setNumber : (NSNumber*)input;   // set number

@end

