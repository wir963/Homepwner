//
//  BNRItemStore.h
//  Homepwner
//
//  Created by Welles Robinson on 12/28/13.
//  Copyright (c) 2013 Welles Robinson. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BNRItem;
// improves compile time b/c won't import file b/c doesn't need to know details of the class

@interface BNRItemStore : NSObject
{
    NSMutableArray *allItems;
}
// Notice that this is a class method and prefixed with a + instead of a -
+ (BNRItemStore *)sharedStore;

- (NSArray *)allItems;
- (BNRItem *)createItem;
- (void)removeItem:(BNRItem *)p;
- (void)moveItemAtIndex:(int)from toIndex:(int)to;

@end
