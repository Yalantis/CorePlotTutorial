//
//  UIColor+YALColorFromHexString.h
//  YALCorePlotBlogPost
//
//  Created by Eugene Goloboyar on 17.01.15.
//  Copyright (c) 2015 Yalantis. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (YALColorFromHexString)

+ (UIColor *)yal_colorFromHexString:(NSString *)hexString;

@end
