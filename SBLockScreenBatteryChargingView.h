/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class _UILegibilitySettings, _UIBackdropView, _UILegibilityLabel, UIView, NSArray, SBLockScreenBatteryFillView, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface SBLockScreenBatteryChargingView : XXUnknownSuperclass {
	UIView* _batteryContainerView;
	_UIBackdropView* _batteryBlurView;
	SBLockScreenBatteryFillView* _batteryFillView;
	_UILegibilityLabel* _chargePercentLabel;
	NSArray* _batteryConstraints;
	NSLayoutConstraint* _batteryTopOffset;
	_UILegibilitySettings* _legibilitySettings;
}
@property(retain, nonatomic) _UILegibilitySettings* legibilitySettings;
@property(assign, nonatomic) BOOL batteryVisible;
-(float)_batteryNoseOffset;
-(float)_batteryBaseline;
-(float)_chargingTextBaselineOffset;
-(id)_chargePercentFont;
-(void)_prepareConstraints;
-(void)layoutSubviews;
-(void)_setChargeString:(id)string;
-(void)setChargePercentage:(int)percentage detailed:(BOOL)detailed;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
