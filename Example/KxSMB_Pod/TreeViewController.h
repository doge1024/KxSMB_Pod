//
//  TreeViewController.h
//  KxSMB_Pod
//
//  Created by lzh on 2017/5/20.
//  Copyright © 2017年 harddog. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KxSMBAuth;

@interface TreeViewController : UITableViewController <UIAlertViewDelegate>
- (id)initAsHeadViewController;
- (void) reloadPath;
@property (readwrite, nonatomic, strong) NSString *path;
@property (readwrite, nonatomic, strong) KxSMBAuth *defaultAuth;
@end
