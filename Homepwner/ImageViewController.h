//
//  ImageViewController.h
//  Homepwner
//
//  Created by Welles Robinson on 1/15/14.
//  Copyright (c) 2014 Welles Robinson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageViewController : UIViewController
{
    __weak IBOutlet UIScrollView *scrollView;
    
    __weak IBOutlet UIImageView *imageView;
}

@property (nonatomic, strong) UIImage *image;

@end
