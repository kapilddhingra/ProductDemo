//
//  PDDetailViewController.h
//  ProductDemo
//
//  Created by Kapil Dhingra on 8/20/14.
//  Copyright (c) 2014 Kapil Dhingra. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PDDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
