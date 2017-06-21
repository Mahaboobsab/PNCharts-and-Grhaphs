//
//  ViewController.h
//  ChartsAndGraphs
//
//  Created by Mahaboobsab Nadaf on 28/12/16.
//  Copyright © 2016 Mahaboobsab Nadaf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PNChartDelegate.h"
#import "PNChart.h"
@interface ViewController : UIViewController<PNChartDelegate>

@property (nonatomic) PNLineChart * lineChart;
@property (nonatomic) PNBarChart * barChart;
//@property (nonatomic) PNCircleChart * circleChart;
@property (nonatomic) PNPieChart *pieChart;
@property (nonatomic) PNScatterChart *scatterChart;
@property (nonatomic) PNRadarChart *radarChart;

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
- (IBAction)changeValue:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *changeValueButton;
- (IBAction)rightSwitchChanged:(id)sender;

@property (weak, nonatomic) IBOutlet UISwitch *centerSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *leftSwitch;
- (IBAction)leftSwitchChanged:(id)sender;
@property (weak, nonatomic) IBOutlet UISwitch *rightSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *animationsSwitch;
- (IBAction)animationsSwitchChanged:(id)sender;
- (IBAction)centerSwitchChanged:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *leftLabel;
@property (weak, nonatomic) IBOutlet UILabel *rightLabel;
@property (weak, nonatomic) IBOutlet UILabel *centerSwitchLabel;
@end

