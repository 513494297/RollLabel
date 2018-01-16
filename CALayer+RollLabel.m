//
//  CALayer+RollLabel.m
//  aaaaa
//
//  Created by huafangT on 2018/1/16.
//  Copyright © 2018年 huafangT. All rights reserved.
//

#import "CALayer+RollLabel.h"


@implementation CALayer (RollLabel)

- (void)ui_bringSublayerToFront:(CALayer *)sublayer {
    if (sublayer.superlayer == self) {
        [sublayer removeFromSuperlayer];
        [self insertSublayer:sublayer atIndex:(unsigned)self.sublayers.count];
    }
}

@end
