//
//  FileViewController.h
//  KxSMB_Pod
//
//  Created by lzh on 2017/5/20.
//  Copyright © 2017年 harddog. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KxSMBItemFile;

@interface FileViewController : UIViewController
@property (readwrite, nonatomic, strong) KxSMBItemFile* smbFile;
@end
