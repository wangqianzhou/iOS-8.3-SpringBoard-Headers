/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBVibrantBannerView.h"
#import "SBUIBannerView.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBDefaultBannerTextView, UIView, SBUIBannerContext, UIImageView;
@protocol SBDefaultBannerViewSource;

__attribute__((visibility("hidden")))
@interface SBDefaultBannerView : XXUnknownSuperclass <SBUIBannerView, SBVibrantBannerView> {
	SBUIBannerContext* _context;
	id<SBDefaultBannerViewSource> _viewSource;
	UIImageView* _iconImageView;
	SBDefaultBannerTextView* _textView;
	UIImageView* _attachmentImageView;
	UIView* _secondaryContentView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)defaultColorForElement:(int)element;
+(id)_defaultRelevanceDateColor;
-(void)setColor:(id)color forElement:(int)element;
-(id)colorForElement:(int)element;
-(void)_setRelevanceDateColor:(id)color;
-(id)_relevanceDateColor;
-(float)_secondaryContentInsetY;
-(float)_textInsetX;
-(float)_iconInsetY;
-(CGRect)_secondaryContentFrameForBounds:(CGRect)bounds;
-(CGRect)_secondaryContentFrame;
-(CGRect)_textViewFrameForBounds:(CGRect)bounds;
-(CGRect)_textViewFrame;
-(CGRect)_iconImageViewFrame;
-(CGRect)_contentFrame;
-(CGRect)_contentFrameForBounds:(CGRect)bounds;
-(CGRect)_attachmentImageViewFrame;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)setPercentPulledDown:(float)down;
-(void)setSecondaryContentView:(id)view;
-(id)bannerContext;
-(BOOL)_showAttachmentPreview;
-(BOOL)_hasAttachment;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithContext:(id)context;
@end

