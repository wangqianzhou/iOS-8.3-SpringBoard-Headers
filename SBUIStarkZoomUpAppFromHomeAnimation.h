/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconAnimatorDelegate.h"
#import "SBUIStarkScreenAnimationController.h"

@class NSString, SBAlert, UIView, SBIconAnimator;

__attribute__((visibility("hidden")))
@interface SBUIStarkZoomUpAppFromHomeAnimation : SBUIStarkScreenAnimationController <SBIconAnimatorDelegate> {
	UIView* _viewToAnimate;
	SBIconAnimator* _iconAnimator;
	SBAlert* _alertImpersonator;
	BOOL _animationFinished;
	BOOL _fromAssistant;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)iconAnimatorWasInvalidated:(id)invalidated;
-(void)_noteZoomDidFinish;
-(void)_applicationDependencyStateChanged;
-(void)_cleanupHosting;
-(void)_animateZoomWithCompletion:(id)completion;
-(void)_prepareZoom;
-(double)_animationDelay;
-(void)_noteDependencyDidInvalidate;
-(id)_viewToAnimate;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(id)_animationProgressDependency;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(void)dealloc;
-(id)initWithActivatingApp:(id)activatingApp alertImpersonator:(id)impersonator starkScreenController:(id)controller;
@end
