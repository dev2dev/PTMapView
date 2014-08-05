//
//  ExampleAppDelegate.m
//  Example
//
//  Created by Aaron Brethorst on 5/11/11.
//  Copyright 2011 Structlab LLC. All rights reserved.
//

#import "ExampleAppDelegate.h"

@implementation ExampleAppDelegate

@synthesize window, mapView;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
	// Insert code here to initialize your application 
	
	srand ( time(NULL) );
	
	[self.mapView draw];
}

#pragma mark -
#pragma mark PTMapViewDelegate

- (NSNumber *)valueForCountry:(NSString *)code
{
	return [NSNumber numberWithInt:rand() % 100];
}

@end
