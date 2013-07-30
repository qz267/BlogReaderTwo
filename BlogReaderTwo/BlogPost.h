//
//  BlogPost.h
//  BlogReader
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
