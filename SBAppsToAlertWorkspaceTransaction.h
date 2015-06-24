/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWorkspaceTransaction.h"
#import "SBUIAnimationControllerObserver.h"

@class NSString, SBAlert, SBAlertManager, NSArray, SBUIAnimationController;

__attribute__((visibility("hidden")))
@interface SBAppsToAlertWorkspaceTransaction : SBWorkspaceTransaction <SBUIAnimationControllerObserver> {
	NSArray* _topApplications;
	SBAlert* _activatingAlert;
	SBAlertManager* _alertManager;
	SBUIAnimationController* _animation;
	id _alertActivationBlock;
	BOOL _animatedAppDeactivation;
	BOOL _suspendWorkspace;
	BOOL _deferAlertActivationForAnimationCompletion;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id alertActivationBlock;
-(void)animationControllerDidFinishAnimation:(id)animationController;
-(void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
-(void)_switcherToAlertAnimationFinished;
-(void)_activateAlert;
-(void)_didComplete;
-(void)_begin;
-(void)dealloc;
-(id)initWithAlertManager:(id)alertManager alert:(id)alert overTopApplications:(id)applications;
@end
