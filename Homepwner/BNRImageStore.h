//
//  BNRImageStore.h
//  Homepwner
//
//  Created by Welles Robinson on 1/4/14.
//  Copyright (c) 2014 Welles Robinson. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRImageStore : NSObject
{
    NSMutableDictionary *dictionary;
}
+ (BNRImageStore *)sharedStore;

- (void)setImage:(UIImage *)i forKey:(NSString *)s;
- (UIImage *)imageForKey:(NSString *)s;
- (void)deleteImageForKey:(NSString *)s;
@end
