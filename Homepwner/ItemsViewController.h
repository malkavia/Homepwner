//
//  ItemsViewController.h
//  Homepwner
//
//  Created by Malkavia on 10/28/14.
//  Copyright (c) 2014 Malkavia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BNRItem.h"
#import "BNRItemStore.h"
@interface ItemsViewController : UITableViewController
@property (strong, nonatomic) IBOutlet UIView *headerView;
- (IBAction)addNewItem:(id)sender;
- (IBAction)toggleEditingMode:(id)sender;

@end
