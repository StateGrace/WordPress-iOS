//
//  WPContentViewSubclass.h
//  WordPress
//
//  Created by Michael Johnston on 12/12/13.
//  Copyright (c) 2013 WordPress. All rights reserved.
//

#import "WPContentView.h"

@interface WPContentView (SubclassMethods)

@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UILabel *snippetLabel;
@property (nonatomic, strong) DTAttributedTextContentView *textContentView;
@property (nonatomic, strong) UILabel *bylineLabel;
@property (nonatomic, strong) UIView *metaView;
@property (nonatomic, strong) CALayer *metaBorder;
@property (nonatomic, strong) CALayer *titleBorder;
@property (nonatomic, strong) UIView *byView;
@property (nonatomic, strong) UIView *controlView;
@property (nonatomic, strong) UIButton *timeButton;

- (void)buildContent;
- (UIView *)viewForFullContent;
- (UIView *)viewForContentPreview;
- (void)refreshDate;
- (BOOL)privateContent;


extern const CGFloat RPVAuthorPadding;;
extern const CGFloat RPVHorizontalInnerPadding;
extern const CGFloat RPVMetaViewHeight;
extern const CGFloat RPVAuthorViewHeight;
extern const CGFloat RPVVerticalPadding;
extern const CGFloat RPVAvatarSize;
extern const CGFloat RPVBorderHeight;
extern const CGFloat RPVMaxImageHeightPercentage;
extern const CGFloat RPVMaxSummaryHeight;
extern const CGFloat RPVFollowButtonWidth;
extern const CGFloat RPVTitlePaddingBottom;
extern const CGFloat RPVControlButtonHeight;
extern const CGFloat RPVControlButtonWidth;
extern const CGFloat RPVControlButtonSpacing;
extern const CGFloat RPVControlButtonBorderSize;
extern const CGFloat WPTableViewFixedWidth;

@end
