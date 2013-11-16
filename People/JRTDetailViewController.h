//
//  JRTDetailViewController.h
//  People
//
//  Created by Vertical Turtle on 16/11/2013.
//  Copyright (c) 2013 Mubaloo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JRTDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
