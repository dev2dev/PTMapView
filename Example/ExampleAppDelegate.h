//
//  ExampleAppDelegate.h
//  Example
//
//  Created by Aaron Brethorst on 5/11/11.
//  Copyright 2011 Structlab LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PTMapView.h"

@interface ExampleAppDelegate : NSObject <NSApplicationDelegate,PTMapViewDataSource> {
    NSWindow *window;
	
	PTMapView *mapView;
}
@property (nonatomic,retain) IBOutlet PTMapView *mapView;
@property (assign) IBOutlet NSWindow *window;

@end
