/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBPasscodeComplianceAlertItem : XXUnknownSuperclass {
	NSString* _title;
	NSString* _message;
	NSString* _continueButtonTitle;
	NSString* _cancelButtonTitle;
}
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(BOOL)shouldShowInLockScreen;
-(void)dealloc;
-(id)initWithTitle:(id)title message:(id)message continueButtonTitle:(id)title3 cancelButtonTitle:(id)title4;
@end

