//
//  Person.h
//  People
//
//  Created by Vertical Turtle on 16/11/2013.
//  Copyright (c) 2013 Mubaloo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Person : NSManagedObject

@property (nonatomic, retain) NSString * firstName;
@property (nonatomic, retain) NSDate * birthDate;
@property (nonatomic, retain) NSString * surname;

@end
