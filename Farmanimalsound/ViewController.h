//
//  ViewController.h
//  Farmanimalsound
//
//  Created by Nasir Uddin on 13/03/2017.
//  Copyright © 2017 Nasir Uddin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>

@interface ViewController : UIViewController {
    
    SystemSoundID soundID1;
    SystemSoundID soundID2;
    SystemSoundID soundID3;
    SystemSoundID soundID4;
    SystemSoundID soundID5;
    SystemSoundID soundID6;
    
}

- (IBAction)cat:(id)sender;

- (IBAction)dog:(id)sender;

- (IBAction)frog:(id)sender;

- (IBAction)horse:(id)sender;

- (IBAction)pig:(id)sender;

- (IBAction)sheep:(id)sender;

@end

