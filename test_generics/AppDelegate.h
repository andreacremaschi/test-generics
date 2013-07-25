//
//  AppDelegate.h
//  test_generics
//
//  Created by Andrea Cremaschi on 25/07/13.
//  Copyright (c) 2013 midapp. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "MyObject.h"
#import "MySecondObject.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;
@property (strong) NSArray <MyObject> *myArray;
@property (strong) NSArray <MySecondObject> *mySecondArray;

@end
