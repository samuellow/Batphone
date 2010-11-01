//
//  LocationViewController.h
//  simpleUI
//
//  Created by Stephen Tarzia on 10/28/10.
//  Copyright 2010 Northwestern University. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "plotView.h"

@interface LocationViewController : UIViewController {
	AppDelegate *app;
	NSString* room;
	NSString* building;
	vector<DBEntry> fingerprints;
	plotView *plot;
	NSTimer  *plotTimer; // periodic timer to update the plot
	int plotIndex; // index in fingerprints of currently-displayed plot
	UILabel *label;
}
@property (nonatomic, retain) AppDelegate* app;
@property (nonatomic, retain) NSString* room;
@property (nonatomic, retain) NSString* building;
@property (nonatomic) vector<DBEntry> fingerprints;
@property (nonatomic, retain) plotView *plot;
@property (nonatomic, retain) NSTimer  *plotTimer;
@property (nonatomic) int plotIndex;
@property (nonatomic, retain) UILabel* label;

// custom initializer
- (id)initWithApp:(AppDelegate *)app 
		 building:(NSString*)building
			 room:(NSString*)room;
// timer handler
-(void)updatePlot;

@end
