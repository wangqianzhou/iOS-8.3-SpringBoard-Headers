/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIStarkZoomUpAppFromHomeAnimation.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface SBUIStarkZoomUpNowPlayingFromHomeAnimation : SBUIStarkZoomUpAppFromHomeAnimation {
	NSNumber* _activated;
}
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(id)_viewToAnimate;
-(void)_setupStartDependencies;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(void)dealloc;
-(id)initWithActivatingApp:(id)activatingApp alertImpersonator:(id)impersonator starkScreenController:(id)controller;
@end
