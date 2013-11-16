//
//  JRTAppDelegate.h
//  People
//
//  Created by Vertical Turtle on 16/11/2013.
//  Copyright (c) 2013 Mubaloo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JRTAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
