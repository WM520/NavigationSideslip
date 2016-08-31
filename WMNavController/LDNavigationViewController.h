//
//  ZXNavigationViewController.h
//  NavigationViewController
//
//  Created by zhaoxu on 15/12/14.
//  Copyright © 2015年 ZX. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LDNavigationViewController : UINavigationController

// Enable the drag to back interaction, Defalt is YES.
@property (nonatomic,assign) BOOL canDragBack;
- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated;
@end
