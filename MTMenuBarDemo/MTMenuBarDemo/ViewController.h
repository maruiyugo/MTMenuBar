//
//  ViewController.h
//  TesdXcodeUserGuideDemo
//
//  Created by su xinde on 13-2-20.
//  Copyright (c) 2013年 su xinde. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "MTMenuBar.h"

@interface ViewController : UIViewController <MTMenuBarDelegate>
{
    MTMenuBar *menuBar;
}

@end
