//
//  BlogPost.m
//  BlogReader
//


#import "BlogPost.h"

@implementation BlogPost

- (id) initWithTitle:(NSString*)title {
    self = [super init];
    
    if ( self ) {
        self.title = title;
        self.author = nil;
        self.thumbnail = nil;
    }
    return self;
}

+ (id) blogPostWithTitle:(NSString *)title {
    return [[self alloc] initWithTitle:title];
}

-(NSURL *) thumbnailURL{
    return [NSURL URLWithString:self.thumbnail];
}

@end
