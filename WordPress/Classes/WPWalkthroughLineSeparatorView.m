//
//  WPWalkthroughLineSeparatorView.m
//  WordPress
//
//  Created by Sendhil Panchadsaram on 4/30/13.
//  Copyright (c) 2013 WordPress. All rights reserved.
//

#import "WPWalkthroughLineSeparatorView.h"

@interface WPWalkthroughLineSeparatorView() {
    UIView *_firstLineView;
    UIView *_secondLineView;
}

@end
@implementation WPWalkthroughLineSeparatorView

- (id)init
{
    self = [super init];
    if (self) {
        [self createViews];
    }
    return self;
}

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        [self createViews];
    }
    return self;
}

- (void)layoutSubviews
{
    CGFloat width = CGRectGetWidth(self.bounds);
    _firstLineView.frame = CGRectMake(0, 0, width, 1);
    _secondLineView.frame = CGRectMake(0, 1, width, 1);
}

#pragma mark - Private Methods

- (void)createViews
{
    UIColor *topLineColor = [UIColor colorWithRed:15.0/255.0 green:128.0/255.0 blue:176.0/255.0 alpha:1.0];
    UIColor *bottomLineColor = [UIColor colorWithRed:33.0/255.0 green:151.0/255.0 blue:198.0/255.0 alpha:1.0];

    _firstLineView = [[UIView alloc] init];
    _firstLineView.backgroundColor = topLineColor;
    
    _secondLineView = [[UIView alloc] init];
    _secondLineView.backgroundColor = bottomLineColor;
    
    [self addSubview:_firstLineView];
    [self addSubview:_secondLineView];
}

@end
