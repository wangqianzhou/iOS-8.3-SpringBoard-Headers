/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBInsecureDrawingAlertItem : XXUnknownSuperclass {
	NSString* _processName;
}
@property(copy, nonatomic) NSString* processName;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(BOOL)ignoreIfAlreadyDisplaying;
-(BOOL)dismissOnLock;
-(BOOL)shouldShowInLockScreen;
-(void)dealloc;
@end

