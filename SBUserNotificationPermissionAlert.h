/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIUserNotificationSettings, SBUserNotificationPermissionController;

__attribute__((visibility("hidden")))
@interface SBUserNotificationPermissionAlert : XXUnknownSuperclass {
	SBUserNotificationPermissionController* _controller;
	UIUserNotificationSettings* _settings;
	BOOL _shouldCallback;
}
-(void)didDeactivateForReason:(int)reason;
-(BOOL)shouldShowInLockScreen;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)dealloc;
-(id)initWithPermissionsController:(id)permissionsController userNotificationSettings:(id)settings makeAppDelegateCallback:(BOOL)callback;
@end
