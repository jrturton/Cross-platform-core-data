//
//  Person.m
//  People
//
//  Created by Vertical Turtle on 16/11/2013.
//  Copyright (c) 2013 Mubaloo. All rights reserved.
//

#import "Person.h"


@implementation Person

@dynamic firstName;
@dynamic birthDate;
@dynamic surname;

-(void)awakeFromInsert
{
    [super awakeFromInsert];
    self.birthDate = [NSDate dateWithTimeIntervalSince1970:0.0];
}

@end
