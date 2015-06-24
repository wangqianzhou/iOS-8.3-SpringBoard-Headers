/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBCCSettingModule.h"


__attribute__((visibility("hidden")))
@interface SBCCBluetoothSetting : SBCCSettingModule {
}
+(id)displayName;
+(id)identifier;
-(id)confirmationAlertMessage;
-(id)confirmationAlertTitle;
-(void)confirmed:(BOOL)confirmed;
-(BOOL)needsConfirmation;
-(id)glyphImageForState:(int)state;
-(void)_updateState;
-(BOOL)_toggleState;
-(void)deactivate;
-(void)activate;
-(id)aggdKey;
-(void)dealloc;
@end
