/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BiometricKit;

__attribute__((visibility("hidden")))
@interface SBBiometricEventLogger : XXUnknownSuperclass {
	BiometricKit* _biometricKit;
	BOOL _fingerOnWithScreenOn;
	unsigned long long _fingerOnTime;
	unsigned long long _keybagUnlockTime;
}
@property(assign, nonatomic) unsigned long long keybagUnlockTime;
@property(assign, nonatomic) BOOL fingerOnWithScreenOn;
@property(assign, nonatomic) unsigned long long fingerOnTime;
+(id)sharedInstance;
-(void)timestampEvent:(unsigned)event;
-(BOOL)_shouldSyslogTimestamps;
-(void)_unlockAnimationWillStart:(id)_unlockAnimation;
-(void)_keybagBioUnlock:(id)unlock;
-(void)_tryAgain:(id)again;
-(void)_fingerOn:(id)on;
-(void)_screenTurnedOn:(id)on;
-(void)_clearEverything;
-(id)init;
@end
