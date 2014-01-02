//
//  BNRItem.h
//  RandomPossessions
//
//  Created by Welles Robinson on 12/23/13.
//  Copyright (c) 2013 Welles Robinson. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject

// class methods
+ (id)randomItem;
// initializers
- (id)initWithItemName:(NSString *)name
        valueInDollars:(int)value
          serialNumber:(NSString *)sNumber;
// instance methods
@property (nonatomic, strong) BNRItem *containedItem;
@property (nonatomic, weak) BNRItem *container;

@property (nonatomic, strong) NSString *itemName;
@property (nonatomic, strong) NSString *serialNumber;
@property (nonatomic) int valueInDollars;
@property (nonatomic, readonly, strong) NSDate *dateCreated;

@end
