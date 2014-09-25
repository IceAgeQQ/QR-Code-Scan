//
//  ViewController.h
//  HelloWorld
//
//  Created by Chao Xu on 9/22/14.
//  Copyright (c) 2014 Chao Xu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<AVCaptureMetadataOutputObjectsDelegate>

@property (weak,nonatomic) IBOutlet UIView *viewPreview;
@property (weak,nonatomic) IBOutlet UILabel *lblStatus;
@property (weak,nonatomic) IBOutlet UILabel *lblPrompt;
@property (weak,nonatomic) IBOutlet UIBarButtonItem *bbitemStart;

-(IBAction)startStopReading:(id)sender;
@end

