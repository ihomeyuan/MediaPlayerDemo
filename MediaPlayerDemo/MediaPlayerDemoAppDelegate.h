//
//  MediaPlayerDemoAppDelegate.h
//  MediaPlayerDemo
//
//  Created by David Cairns on 4/22/11.
//  Copyright 2011 David Cairns. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MediaPlayerDemoViewController;

@interface MediaPlayerDemoAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet MediaPlayerDemoViewController *viewController;

@end
