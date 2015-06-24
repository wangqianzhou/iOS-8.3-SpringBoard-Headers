/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBulletinBusyClient.h"
#import "SBBannerGestureHandlerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "SBBannerContextViewControllerDelegate.h"
#import "SBBulletinWindowClient.h"
#import "SBAlertObserver.h"
#import "SBAssistantObserver.h"
#import "SBUIBannerTargetImplementation.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBLockScreenActionContext, SBAlert, UIImage, NSHashTable, NSMutableArray, SBBannerContainerViewController, SBBannerGestureHandler, NSMapTable;

__attribute__((visibility("hidden")))
@interface SBBannerController : XXUnknownSuperclass <SBUIBannerTargetImplementation, SBAssistantObserver, SBAlertObserver, SBBannerContextViewControllerDelegate, SBBannerGestureHandlerDelegate, SBBulletinWindowClient, SBBulletinBusyClient, UIGestureRecognizerDelegate> {
	NSHashTable* _sources;
	NSMutableArray* _pendingBannerContextsNeedingRepop;
	SBAlert* _topAlert;
	UIImage* _bannerViewBackgroundImage;
	SBBannerContainerViewController* _bannerViewController;
	BOOL _soundIsPlaying;
	BOOL _dismissalOverdue;
	BOOL _replaceDelayIsActive;
	BOOL _showingStickyDurationBanner;
	BOOL _suppressingBanners;
	BOOL _enableDelayActive;
	BOOL _assistantIsFullyVisible;
	BOOL _locked;
	int _activeGestureType;
	SBBannerGestureHandler* _activeGestureHandler;
	int _overdueDismissReason;
	id _overdueCompletionBlock;
	BOOL _dismissingBannerForAssistantReveal;
	BOOL _dismissingBannerForAssistantDismiss;
	id _assistantRevealCompletionBlock;
	id _assistantDismissCompletionBlock;
	NSMapTable* _bannerContextToViewControllerCache;
	SBLockScreenActionContext* _lockScreenActionContext;
}
@property(readonly, assign, nonatomic) int bannerTargetIdiom;
@property(readonly, assign, nonatomic) void* bannerTargetIdentifier;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) SBLockScreenActionContext* lockScreenActionContext;
@property(retain, nonatomic) SBAlert* topAlert;
+(id)sharedInstanceIfExists;
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
-(void)handler:(id)handler pulledBannerByDisplacement:(float)displacement;
-(void)_updateLockScreenForBannerVisible:(BOOL)bannerVisible;
-(void)bannerViewControllerDidPullDown:(id)bannerViewController;
-(void)bannerViewControllerDidShrinkForKeyboard:(id)bannerViewController;
-(void)bannerViewControllerDidReceiveRaiseGesture:(id)bannerViewController;
-(void)bannerViewController:(id)controller didRequestSticky:(BOOL)sticky;
-(void)bannerViewControllerDidRequestSticky:(id)bannerViewController;
-(void)bannerViewControllerDidRequestDismissal:(id)bannerViewController;
-(void)bannerViewControllerDidSelectAction:(id)bannerViewController;
-(void)bannerViewController:(id)controller willSelectActionWithContext:(id)context;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)_setBannerSticky:(BOOL)sticky;
-(void)_cancelBannerDismissTimers;
-(void)_setupBannerDismissTimers;
-(id)_bannerItem;
-(id)_bannerContext;
-(id)_bannerView;
-(void)_playSoundForContext:(id)context;
-(void)_addBannerGestureRecognizersToView:(id)view;
-(void)_performReplaceTransitionWithContext:(id)context reason:(int)reason completion:(id)completion;
-(void)_performHideTransitionWithContext:(id)context animated:(BOOL)animated reason:(int)reason completion:(id)completion;
-(void)_setBannerViewControllerForContext:(id)context;
-(void)_performRevealTransitionWithContext:(id)context animated:(BOOL)animated completion:(id)completion;
-(void)_performTransition:(int)transition withAnimation:(BOOL)animation context:(id)context reason:(int)reason completion:(id)completion;
-(id)_newBannerViewForContext:(id)context;
-(id)_newBannerContextViewController;
-(id)_bannerViewBackgroundImage;
-(void)_fireCompletionBlockForBannerAnimationForAssistantDismissIfNecessary;
-(void)_fireCompletionBlockForBannerAnimationForAssistantRevealIfNecessary;
-(void)_setOverdueCompletionBlock:(id)block;
-(void)_soundDidFinishPlayingForBannerContext:(id)_sound;
-(void)_dismissOverdueOrDequeueIfPossible;
-(void)_stopCurrentSound;
-(void)_replaceIntervalElapsed;
-(void)_dismissIntervalElapsed;
-(void)_tryToDismissWithAnimation:(BOOL)animation reason:(int)reason forceEvenIfBusy:(BOOL)busy completion:(id)completion;
-(void)_removeActiveGestureHandler;
-(id)_newGestureHandlerForType:(int)type;
-(void)_updateGestureHandlerWithState:(int)state type:(int)type;
-(void)_handleGestureState:(int)state location:(CGPoint)location displacement:(float)displacement velocity:(float)velocity;
-(void)_handleBannerPanGesture:(id)gesture;
-(void)_presentBannerForContext:(id)context reason:(int)reason;
-(BOOL)_shouldPendStickyBannerContext:(id)context withReason:(int)reason;
-(BOOL)_dequeueBannerIfPossibleIgnoringStickyBanner:(BOOL)banner existingDismissReason:(int)reason;
-(BOOL)_dequeueBannerIfPossible;
-(BOOL)_canDequeueIgnoringStickyBanner:(BOOL)banner;
-(id)_dequeueNextBannerContext;
-(BOOL)_isItemShowable:(id)showable fromSource:(id)source;
-(void)_dequeueAfterDelayIfPossible;
-(void)_updateBannerSuppressionStateAndDequeueIfPossible:(BOOL)possible withDelay:(BOOL)delay;
-(void)_updateBannerSuppressionState;
-(void)_removePendingContextsForSourceNeedingRepop:(id)sourceNeedingRepop;
-(id)_pendingBannerContextForSourceNeedingRepop:(id)sourceNeedingRepop;
-(void)_dismissBannerWithAnimation:(BOOL)animation reason:(int)reason forceEvenIfBusy:(BOOL)busy completion:(id)completion;
-(void)_screenUndimmmed:(id)undimmmed;
-(void)_lockStateChanged:(id)changed;
-(void)assistant:(id)assistant viewDidDisappear:(int)view;
-(void)assistant:(id)assistant viewWillDisappear:(int)view;
-(void)assistant:(id)assistant viewDidAppear:(int)view;
-(void)assistant:(id)assistant viewWillAppear:(int)view;
-(void)alertBannerSuppressionChanged:(id)changed;
-(void)bulletinWindowDidRotateFromOrientation:(int)bulletinWindow;
-(void)bulletinWindowIsAnimatingRotationToOrientation:(int)orientation duration:(double)duration;
-(void)bulletinWindowWillRotateToOrientation:(int)bulletinWindow duration:(double)duration;
-(void)bulletinWindowStoppedBeingBusy;
-(void)removeCachedBannerForContext:(id)context;
-(void)cacheBannerForContext:(id)context withCompletion:(id)completion;
-(void)dismissCurrentBannerContextForSource:(id)source;
-(id)currentBannerContextForSource:(id)source;
-(void)signalSource:(id)source;
-(void)modallyPresentBannerWithContext:(id)context;
-(void)unregisterSource:(id)source;
-(void)registerSource:(id)source;
-(void)invalidateLockScreenActionContext;
-(float)currentBannerHeight;
-(void)setBannerAlpha:(float)alpha;
-(void)handleSystemDismissGestureWithState:(int)state position:(CGPoint)position velocity:(float)velocity;
-(BOOL)isTrackingDismissGesture;
-(void)dismissBannerWithAnimation:(BOOL)animation reason:(int)reason forceEvenIfBusy:(BOOL)busy;
-(void)dismissBannerWithAnimation:(BOOL)animation reason:(int)reason;
-(BOOL)isShowingModalBannerWithKeyboard;
-(BOOL)isShowingModalBanner;
-(BOOL)isShowingBanner;
-(void)dealloc;
-(id)init;
@end
