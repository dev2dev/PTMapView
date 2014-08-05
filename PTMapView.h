//
// Copyright 2009 Positive Team
//

#import <Cocoa/Cocoa.h>

@protocol PTMapViewDataSource<NSObject>
- (NSNumber *)valueForCountry:(NSString *)code;
@end

@interface PTMapView : NSView {
	NSMutableDictionary *worldMap;
	NSMutableDictionary *values;
	NSNumberFormatter *formatter;
	NSColor *backgroundColor;
	NSColor *color;
	NSColor *textColor;
	id<PTMapViewDataSource> dataSource;
}

@property (nonatomic, assign) id<PTMapViewDataSource> dataSource;
@property (nonatomic, retain) NSColor *backgroundColor;
@property (nonatomic, retain) NSColor *color;
@property (nonatomic, retain) NSColor *textColor;
@property (nonatomic, retain) NSNumberFormatter *formatter;

- (void)draw;
- (NSColor *)colorForValue:(float)value;
@end