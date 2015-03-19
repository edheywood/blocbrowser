//
//  BLCWebBrowserViewController.h
//  BlocBrowser
//
//  Created by Edward Heywood on 17/03/2015.
//  Copyright (c) 2015 Edward Heywood. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BLCWebBrowserViewController : UIViewController

/**
 Replaces the web view with a fresh one, erasing all history. Also updates the URL field and toolbar buttons appropriately.
 */
- (void) resetWebView;


@end
