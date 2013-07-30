//
//  BlogPost.h
//  BlogReader
//


#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property (nonatomic,strong) NSString *title;
@property (nonatomic, strong) NSString *author;
@property (nonatomic, strong) NSString *thumbnail;
@property (nonatomic, strong) NSString *date;

- (id) initWithTitle:(NSString*)title;
+ (id) blogPostWithTitle:(NSString *)title;

- (NSURL *) thumbnailURL;
- (NSString*) formattedDate;

@end
