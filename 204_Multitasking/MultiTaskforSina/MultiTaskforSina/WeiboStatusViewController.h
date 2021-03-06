//
//  WeiboStatusViewController.h
//  MultiTaskforSina
//
//  Created by ding orlando on 7/12/13.
//  Copyright (c) 2013 ding orlando. All rights reserved.
//

#import <UIKit/UIKit.h>
#include "AppDelegate.h"
#import "SinaWeiboRequest.h"

@interface WeiboStatusViewController : UITableViewController<UINavigationControllerDelegate, SinaWeiboRequestDelegate> {
}

@property (nonatomic, strong) UIRefreshControl *refreshControl;
- (void)refreshWithCompletionHandler:(CRefreshCompletionHandler)completionHandler;

@end
