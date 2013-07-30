//
//  BlogPost.h
//  BlogReader
//
//  Created by Amit Bijlani on 2/13/13.
//  Copyright (c) 2013 Amit Bijlani. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property (nonatomic,strong) NSString *title;
@property (nonatomic, strong) NSString *author;
@property (nonatomic, strong) NSString *thumbnail;

- (id) initWithTitle:(NSString*)title;
+ (id) blogPostWithTitle:(NSString *)title;

- (NSURL *) thumbnailURL;

@end
