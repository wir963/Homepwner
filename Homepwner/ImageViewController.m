//
//  ImageViewController.m
//  Homepwner
//
//  Created by Welles Robinson on 1/15/14.
//  Copyright (c) 2014 Welles Robinson. All rights reserved.
//

#import "ImageViewController.h"

@interface ImageViewController ()

@end

@implementation ImageViewController

@synthesize image;

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    CGSize sz = [[self image] size];
    [scrollView setContentSize:sz];
    [imageView setFrame:CGRectMake(0, 0, sz.width, sz.height)];
    
    [imageView setImage:[self image]];
}

@end
