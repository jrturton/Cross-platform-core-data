//
//  JRTDetailViewController.m
//  People
//
//  Created by Vertical Turtle on 16/11/2013.
//  Copyright (c) 2013 Mubaloo. All rights reserved.
//

#import "JRTDetailViewController.h"
#import "Person.h"

@interface JRTDetailViewController ()
@property (weak, nonatomic) IBOutlet UITextField *firstName;
@property (weak, nonatomic) IBOutlet UITextField *surname;
@property (weak, nonatomic) IBOutlet UIDatePicker *birthdate;
- (void)configureView;
@end

@implementation JRTDetailViewController

#pragma mark - Managing the detail item

- (void)setDetailItem:(Person*)newDetailItem
{
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        
        // Update the view.
        [self configureView];
    }
}

- (void)configureView
{
    // Update the user interface for the detail item.

    if (self.detailItem) {
        self.firstName.text = self.detailItem.firstName;
        self.surname.text = self.detailItem.surname;
        self.birthdate.date = self.detailItem.birthDate;
    }
}
- (IBAction)dateChanged:(id)sender {
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
