/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface SBKnownWidgetsStore : XXUnknownSuperclass {
	NSMutableSet* _knownWidgets;
}
+(id)sharedStore;
-(id)_defaultWidgets;
-(id)_knownWidgetsFilePath;
-(void)saveWidgetsState;
-(void)clearKnownWidgets;
-(void)setWidgetAsKnown:(id)known;
-(BOOL)isWidgetKnown:(id)known;
-(void)dealloc;
-(id)init;
@end

