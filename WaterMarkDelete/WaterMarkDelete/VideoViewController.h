//
//  VideoViewController.h
//  WaterMarkDelete
//
//  Created by WangYiming on 2018/4/10.
//  Copyright © 2018年 WangYiming. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVKit/AVKit.h>
@interface VideoViewController : UIViewController<UIImagePickerControllerDelegate,UINavigationControllerDelegate>
@property(strong,nonatomic) NSURL *videoUrl;
@end
