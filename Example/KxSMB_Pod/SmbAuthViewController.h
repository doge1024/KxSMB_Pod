//
//  SmbAuthViewController.h
//  KxSMB_Pod
//
//  Created by lzh on 2017/5/20.
//  Copyright © 2017年 harddog. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SmbAuthViewController;

@protocol SmbAuthViewControllerDelegate
@optional
- (void) couldSmbAuthViewController: (SmbAuthViewController *) controller
                               done: (BOOL) done;
@end

@interface SmbAuthViewController : UIViewController
@property (readwrite, nonatomic, weak) id delegate;
@property (readwrite, nonatomic, strong) NSString *server;
@property (readwrite, nonatomic, strong) NSString *workgroup;
@property (readwrite, nonatomic, strong) NSString *username;
@property (readwrite, nonatomic, strong) NSString *password;
@end

