/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton;

__attribute__((visibility("hidden")))
@interface SBNotificationVibrantButton : XXUnknownSuperclass {
	UIButton* _vibrantButton;
	UIButton* _overlayButton;
}
-(id)_buttonImageForColor:(id)color selected:(BOOL)selected;
-(id)_buttonFont;
-(void)_buttonStateChanged:(id)changed;
-(void)_buttonPushed:(id)pushed;
-(id)_newButtonWithBackgroundImage:(id)backgroundImage selectedImage:(id)image titleColor:(id)color selectedTitleColor:(id)color4;
-(void)layoutSubviews;
-(void)_configureButton:(id*)button withSettings:(id)settings;
-(void)_configureOverlayViewWithSettings:(id)settings;
-(void)_configureVibrantViewWithSettings:(id)settings;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setTitle:(id)title forState:(unsigned)state;
-(id)titleLabel;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)updateForContenteCategorySizeChange;
-(void)dealloc;
-(id)initWithColorSettings:(id)colorSettings;
@end

