//
//  NumberStore.m
//  iOs_count
//
//  Created by Manuel Artero Anguita on 22/03/13.
//  Copyright (c) 2013 Manuel Artero Anguita. All rights reserved.
//

#import "NumberStore.h"

@implementation NumberStore

- (id) init
{
    if ( self = [super init] ) {
        [self setNumber:0];
    }
    return self;
}

-(NSNumber*) number
{
    return number;
}

-(void) setNumber : (NSNumber*)input
{
    [number autorelease];
    number = [input retain];
}

@end
