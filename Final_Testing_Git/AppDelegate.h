//
//  AppDelegate.h
//  Final_Testing_Git
//
//  Created by Prashant Tiwari on 13/10/17.
//  Copyright © 2017 Prashant Tiwari. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

