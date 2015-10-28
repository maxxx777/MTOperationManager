//
//  MasterViewController.h
//  DemoApp
//
//  Created by MAXIM TSVETKOV on 28.10.15.
//  Copyright © 2015 MAXIM TSVETKOV. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

