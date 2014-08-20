//
//  PDAppDelegate.h
//  ProductDemo
//
//  Created by Kapil Dhingra on 8/20/14.
//  Copyright (c) 2014 Kapil Dhingra. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PDAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
