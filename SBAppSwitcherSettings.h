/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class _UIScreenEdgePanRecognizerSettings, SBFAnimationSettings;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherSettings : XXUnknownSuperclass {
	BOOL _transitionToAppThroughDefaultPng;
	int _peopleNumberOfRecents;
	int _simplicityOptions;
	SBFAnimationSettings* _transitionAnimationSettings;
	SBFAnimationSettings* _dosidoAnimationSettings;
	_UIScreenEdgePanRecognizerSettings* _gestureSettings;
}
@property(retain) _UIScreenEdgePanRecognizerSettings* gestureSettings;
@property(retain) SBFAnimationSettings* dosidoAnimationSettings;
@property(retain) SBFAnimationSettings* transitionAnimationSettings;
@property(assign) int simplicityOptions;
@property(assign) BOOL transitionToAppThroughDefaultPng;
@property(assign) int peopleNumberOfRecents;
+(id)settingsControllerModule;
-(BOOL)shouldSimplifyForOptions:(int)options;
-(void)setDefaultValues;
@end
