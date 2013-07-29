//
//  BlogPost.m
//  BlogReader
//
//  Created by Amit Bijlani on 2/13/13.
//  Copyright (c) 2013 Amit Bijlani. All rights reserved.
//

#import "BlogPost.h"

@implementation BlogPost

- (id) initWithTitle:(NSString*)title {
    self = [super init];
    
    if ( self ) {
        _title = title;
    }
    return self;
}

+ (id) blogPostWithTitle:(NSString *)title {
    return [[self alloc] initWithTitle:title];
}

@end
