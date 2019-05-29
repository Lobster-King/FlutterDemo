//
//  AppDelegate.h
//  FlutterDemo
//
//  Created by lobster on 2019/5/28.
//  Copyright © 2019 lobster. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Flutter/Flutter.h>

@interface AppDelegate : FlutterAppDelegate <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, strong) FlutterEngine *flutterEngine;

@end

