/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBBluetoothController : XXUnknownSuperclass {
	NSMutableArray* _devices;
	BOOL _tetheringConnected;
}
+(id)sharedInstance;
-(void)bluetoothDeviceEndedVoiceControl:(id)control;
-(void)bluetoothDeviceInitiatedVoiceControl:(id)control;
-(BOOL)tetheringConnected;
-(id)deviceForAudioRoute:(id)audioRoute;
-(void)updateBattery;
-(void)batteryChanged:(id)changed;
-(void)connectionChanged:(id)changed;
-(void)updateTetheringConnected;
-(void)removeDeviceNotification:(id)notification;
-(void)addDeviceNotification:(id)notification;
-(void)iapDeviceChanged:(id)changed;
-(void)stopWatchingForDevices;
-(void)startWatchingForDevices;
-(void)noteDevicesChanged;
-(int)batteryLevel;
-(BOOL)canReportBatteryLevel;
-(id)firstBTDeviceToReportBatteryLevel;
-(void)dealloc;
@end

