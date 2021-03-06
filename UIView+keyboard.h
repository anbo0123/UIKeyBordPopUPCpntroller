//
//  UIView+keyboard.h
//  UIKeyBordPopUPCpntroller
//
//  Created by 龚纯 on 16/7/24.
//  Copyright © 2016年 龚纯. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (keyboard)

-(void)registerViewForKeyboardNotifications;

-(void)resignViewForKeyboardNotifications;

-(void)keyboardWithShow:(CGFloat)time key_height:(CGRect)keyRect;

-(void)keyboardWithHide:(CGFloat)time;

@end
