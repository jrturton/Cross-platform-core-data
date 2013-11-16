//
//  JRTMasterViewController.h
//  People
//
//  Created by Vertical Turtle on 16/11/2013.
//  Copyright (c) 2013 Mubaloo. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface JRTMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
