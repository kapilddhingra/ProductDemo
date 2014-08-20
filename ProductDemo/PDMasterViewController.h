//
//  PDMasterViewController.h
//  ProductDemo
//
//  Created by Kapil Dhingra on 8/20/14.
//  Copyright (c) 2014 Kapil Dhingra. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface PDMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
