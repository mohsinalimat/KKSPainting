//
//  UIBezierPath+Painting.h
//  MagicPaint
//
//  Created by kukushi on 8/12/14.
//  Copyright (c) 2014 Xing He All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBezierPath (Painting)

/*
 * Build a segment path using points.
 */
- (void)addLinesWithPoints:(NSArray *)points;

@end
