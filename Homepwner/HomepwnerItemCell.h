//
//  HomepwnerItemCell.h
//  Homepwner
//
//  Created by Welles Robinson on 1/15/14.
//  Copyright (c) 2014 Welles Robinson. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HomepwnerItemCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *valueLabel;
@property (weak, nonatomic) IBOutlet UILabel *serialNumberLabel;
@property (weak, nonatomic) IBOutlet UIImageView *thumbnailView;

@property (weak, nonatomic) id controller;
@property (weak, nonatomic) UITableView *tableView;

- (IBAction)showImage:(id)sender;
@end
