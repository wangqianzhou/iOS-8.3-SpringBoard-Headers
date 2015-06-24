/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBRelaunchAppWorkspaceTransaction.h"

@class SBUIAnimationController, SSVClaimApplicationsRequest, SSKeybagRequest;

__attribute__((visibility("hidden")))
@interface SBKeybagNonsenseWorkspaceTransaction : SBRelaunchAppWorkspaceTransaction {
	SSKeybagRequest* _keybagRequest;
	SSVClaimApplicationsRequest* _claimApplicationsRequest;
	SBUIAnimationController* _zoomDownAnimationController;
	BOOL _keepAliveTillZoomDownFinishes;
}
-(void)animationControllerDidFinishAnimation:(id)animationController;
-(void)_handleAppRelaunch:(id)relaunch;
-(void)_didInterruptWithReason:(id)reason;
-(BOOL)_canBeInterrupted;
-(BOOL)_shouldComplete;
-(void)_completeKeybagRefetchForApp:(id)app relaunch:(BOOL)relaunch;
-(void)_endKeybagRefetchAndZoomDownNicely;
-(void)_endAnimation;
-(void)_didComplete;
-(void)_begin;
-(id)_setupAnimationForApp:(id)app;
-(BOOL)shouldWatchdog:(id*)watchdog;
-(void)dealloc;
-(id)initWithAlertManager:(id)alertManager application:(id)application;
@end
