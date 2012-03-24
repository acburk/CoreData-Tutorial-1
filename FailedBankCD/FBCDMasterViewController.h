//
//  FBCDMasterViewController.h
//  FailedBankCD
//
//  Created by Adam Burkepile on 3/23/12.
//  Copyright (c) 2012 Adam Burkepile. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface FBCDMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
