//
//  ViewController.h
//  FDIntroGuideView
//
//  Created by t3 on 16/12/29.
//  Copyright © 2016年 feyddy. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, IntroGuideType) {
    IntroGuideType_0 = 0,
    IntroGuideType_1,
    IntroGuideType_2,
    IntroGuideType_3,
};
@interface ViewController : UIViewController
@property (nonatomic, assign) IntroGuideType type;
@end

