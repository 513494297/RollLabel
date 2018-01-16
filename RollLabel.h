//
//  RollLabel.h
//  aaaaa
//
//  Created by huafangT on 2018/1/16.
//  Copyright © 2018年 huafangT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RollLabel : UILabel
/// 控制滚动的速度，1 表示一帧滚动 1pt，10 表示一帧滚动 10pt，默认为 .5，与系统一致。
@property(nonatomic, assign) IBInspectable CGFloat speed;

/// 当文字第一次显示在界面上，以及重复滚动到开头时都要停顿一下，控制停顿的时长
@property(nonatomic, assign) IBInspectable NSTimeInterval pauseDurationWhenMoveToEdge;

/// 用于控制首尾连接的文字之间的间距
@property(nonatomic, assign) IBInspectable CGFloat spacingBetweenHeadToTail;

/**
 *  自动判断 label 的 frame 是否超出当前的 UIWindow 可视范围，超出则自动停止动画
 */
@property(nonatomic, assign) IBInspectable BOOL automaticallyValidateVisibleFrame;

/// 在文字滚动到左右边缘时，是否要显示一个阴影渐变遮罩，默认为 YES。
@property(nonatomic, assign) IBInspectable BOOL shouldFadeAtEdge;

/// 渐变遮罩的宽度
@property(nonatomic, assign) IBInspectable CGFloat fadeWidth;

/// 渐变遮罩外边缘的颜色，请使用带 Alpha 通道的颜色
@property(nonatomic, strong) IBInspectable UIColor *fadeStartColor;

/// 渐变遮罩内边缘的颜色，一般是 fadeStartColor 的 alpha 通道为 0 的色值
@property(nonatomic, strong) IBInspectable UIColor *fadeEndColor;

/// 文字是否要在渐隐区域之后显示，默认为 NO，如果想避免停靠在初始位置时文字被遮罩盖住，可以把它改为 YES。
@property(nonatomic, assign) IBInspectable BOOL textStartAfterFade;

@end
