/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBAppSwitcherRemoteAlertSet;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherRemoteAlertManager : XXUnknownSuperclass {
	SBAppSwitcherRemoteAlertSet* _remoteAlerts;
}
+(id)sharedInstance;
-(id)currentRemoteAlerts;
-(void)removePlaceholderForIdentifier:(id)identifier;
-(void)addPlaceholderForIdentifier:(id)identifier;
-(void)removeRemoteAlert:(id)alert;
-(void)addRemoteAlert:(id)alert;
-(void)dealloc;
@end
