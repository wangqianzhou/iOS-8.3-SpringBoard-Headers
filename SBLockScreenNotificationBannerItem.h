/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIQuietModePlayability.h"
#import "SBDefaultBannerViewSource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBAwayListItem;
@protocol SBLockScreenNotificationBannerItemDelegate, SBLockScreenActionHandler;

__attribute__((visibility("hidden")))
@interface SBLockScreenNotificationBannerItem : XXUnknownSuperclass <SBDefaultBannerViewSource, SBUIQuietModePlayability> {
	SBAwayListItem* _listItem;
	id<SBLockScreenActionHandler> _lockedActionHandler;
	id<SBLockScreenNotificationBannerItemDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) id<SBLockScreenNotificationBannerItemDelegate> delegate;
@property(retain, nonatomic) id<SBLockScreenActionHandler> unlockActionHandler;
@property(readonly, assign, nonatomic) SBAwayListItem* listItem;
-(id)lockScreenActionContext;
-(BOOL)overridesQuietMode;
-(BOOL)isCritical;
-(BOOL)inertWhenLocked;
-(BOOL)shouldPlayLightsAndSirens;
-(id)accessoryIconMask;
-(BOOL)showMessagePreview;
-(id)attachmentImage;
-(id)attachmentText;
-(id)iconImage;
-(id)sourceDate;
-(id)suppressedMessage;
-(id)message;
-(id)subtitle;
-(id)title;
-(id)sortDate;
-(BOOL)canShowWhileLocked;
-(id)action;
-(void)dealloc;
-(id)initWithListItem:(id)listItem;
@end
