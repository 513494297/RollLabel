//
//  CALayer+RollLabel.h
//  aaaaa
//
//  Created by huafangT on 2018/1/16.
//  Copyright © 2018年 huafangT. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface CALayer (RollLabel)

/**
 *  把某个 sublayer 移动到当前所有 sublayers 的最前面
 *  @param sublayer 要被移动的layer
 *  @warning 要被移动的 sublayer 必须已经添加到当前 layer 上
 */
- (void)ui_bringSublayerToFront:(CALayer *)sublayer;

@end
