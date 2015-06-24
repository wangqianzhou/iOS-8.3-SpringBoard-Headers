/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLockScreenNotificationListDelegate.h"
#import "SBLockScreenPluginControllerDelegate.h"
#import "SpringBoard-Structs.h"
#import "SBLockScreenBatteryChargingViewControllerDelegate.h"
#import "SBWallpaperObserver.h"
#import "SBLockScreenTimerViewControllerDelegate.h"
#import "SBLockScreenInfoOverlayDelegate.h"
#import "SBUIPasscodeLockViewDelegate_Internal.h"
#import "SBLockScreenSlideUpToAppControllerDelegate.h"
#import "SBLockScreenViewDelegate.h"
#import "SBLockScreenViewControllerBase.h"

@class SBLockScreenActionContext, SBLockScreenNowPlayingPluginController, SBLockScreenNotificationListController, SBLockScreenTimerViewController, SBLockScreenInfoOverlayViewController, SBLockScreenTemperatureWarningViewController, NSMutableArray, SBLockOverlayContext, SBLockScreenDateViewController, SBLockScreenSlideUpToAppController, SBLockScreenBatteryChargingViewController, SBLockScreenDeviceBlockViewController, SBDisableAppStatusBarUserInteractionChangesAssertion, MPUSystemMediaControlsViewController, SBLockScreenEmergencyCallViewController, SBLockScreenBuddyViewController, SBLockScreenPluginController, SBLockScreenHintManager, NSString, SBLockScreenFullscreenBulletinViewController, SBLockScreenModalAlertViewController, SBLockScreenPasscodeOverlayViewController, SBLockScreenResetRestoreViewController, SBLockScreenStatusTextViewController;

__attribute__((visibility("hidden")))
@interface SBLockScreenViewController : SBLockScreenViewControllerBase <SBLockScreenViewDelegate, SBLockScreenTimerViewControllerDelegate, SBLockScreenNotificationListDelegate, SBUIPasscodeLockViewDelegate_Internal, SBLockScreenBatteryChargingViewControllerDelegate, SBLockScreenInfoOverlayDelegate, SBWallpaperObserver, SBLockScreenPluginControllerDelegate, SBLockScreenSlideUpToAppControllerDelegate> {
	BOOL _isInScreenOffMode;
	SBLockScreenDeviceBlockViewController* _blockedController;
	SBLockScreenDateViewController* _dateViewController;
	SBLockScreenStatusTextViewController* _statusTextViewController;
	SBLockScreenTimerViewController* _timerViewController;
	SBLockScreenNotificationListController* _notificationController;
	SBLockScreenSlideUpToAppController* _cameraController;
	SBLockScreenSlideUpToAppController* _bottomLeftAppController;
	MPUSystemMediaControlsViewController* _mediaControlsViewController;
	BOOL _ignoreFirstMediaToggle;
	SBLockScreenModalAlertViewController* _modalAlertController;
	SBLockScreenBatteryChargingViewController* _chargingViewController;
	BOOL _attemptingPasscodeUnlock;
	BOOL _chargingViewControllerVisible;
	BOOL _wasAutoUnlocked;
	BOOL _forcePasscodeWhileInCall;
	BOOL _isHidingPasscodeWhileInCall;
	BOOL _nextUnlockShouldReturnToCall;
	SBLockScreenPluginController* _pluginController;
	SBLockScreenNowPlayingPluginController* _nowPlayingController;
	SBLockScreenBuddyViewController* _buddyController;
	SBLockOverlayContext* _buddyOverlayContext;
	NSMutableArray* _prioritizedOverlays;
	SBLockOverlayContext* _fullScreenOverlayContext;
	SBLockOverlayContext* _blockedOverlayContext;
	SBLockScreenFullscreenBulletinViewController* _fullscreenBulletinController;
	SBLockOverlayContext* _fullScreenBulletinOverlayContext;
	SBLockScreenInfoOverlayViewController* _infoOverlayController;
	SBLockOverlayContext* _infoOverlayContext;
	SBLockScreenTemperatureWarningViewController* _thermalWarningController;
	SBLockOverlayContext* _thermalWarningContext;
	SBLockScreenResetRestoreViewController* _resetRestoreViewController;
	SBLockOverlayContext* _resetRestoreOverlayContext;
	SBLockScreenPasscodeOverlayViewController* _passcodeOverlayViewController;
	SBLockOverlayContext* _passcodeOverlayContext;
	SBLockScreenEmergencyCallViewController* _emergencyCallController;
	BOOL _retryingEmergencyDialerCreationWhileBlocked;
	BOOL _suppressWallpaperAlphaChangeOnScroll;
	SBLockScreenActionContext* _bioLockScreenActionContext;
	BOOL _disabledMesaForPhoneCall;
	SBLockScreenActionContext* _slideUpControllerActionContext;
	SBLockScreenHintManager* _hintManager;
	SBDisableAppStatusBarUserInteractionChangesAssertion* _statusBarUserInteractionAssertion;
	BOOL _hasAuthenticatedForNotificationAction;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL hasAuthenticatedForNotificationAction;
@property(retain, nonatomic, setter=_setBioLockScreenActionContext:) SBLockScreenActionContext* _bioLockScreenActionContext;
@property(readonly, assign, nonatomic) SBLockScreenPluginController* pluginController;
-(id)_wallpaperLegibilitySettings;
-(id)_pluginLegibilitySettings;
-(id)_overlayLegibilitySettings;
-(id)_notificationListLegibilitySettings;
-(id)_effectiveLegibilitySettings;
-(void)_updateLegibility;
-(void)updateLegibility;
-(id)legibilitySettings;
-(id)viewControllerToUseAsParent;
-(void)passcodeViewDidBecomeActive:(BOOL)passcodeView forController:(id)controller;
-(void)setUnlockActionContext:(id)context;
-(BOOL)isAnotherSlideUpControllerBlockingController:(id)controller;
-(BOOL)controllerShouldInvertVerticalPadding:(id)controller;
-(BOOL)controllerShouldUseAdditionalTopPadding:(id)controller;
-(void)adjustWallpaperForVerticalScrollPercentage:(float)verticalScrollPercentage;
-(id)grabberViewInLockScreenView:(id)lockScreenView forController:(id)controller;
-(void)addGrabberView:(id)view toLockScreenView:(id)lockScreenView forController:(id)controller;
-(int)presentingControllerIdentifierForController:(id)controller;
-(void)prepareForSlideUpAppLaunchAnimated:(BOOL)slideUpAppLaunchAnimated;
-(id)lockScreenBottomLeftAppController;
-(id)lockScreenCameraController;
-(void)wallpaperDidChangeForVariant:(int)wallpaper;
-(void)wallpaperLegibilitySettingsDidChange:(id)wallpaperLegibilitySettings forVariant:(int)variant;
-(void)_buddyDidFinish:(id)_buddy;
-(void)_removeBuddyBackground;
-(void)_addOrRemoveBuddyBackgroundIfNecessary;
-(void)biometricEventMonitorDidAuthenticate:(id)biometricEventMonitor;
-(void)_updateGrabbersForIdentityManagerAuthentication;
-(void)_updateMediaControlsForScreenMode;
-(void)_mediaControlsDidHideOrShow:(id)_mediaControls;
-(void)setShowingMediaControls:(BOOL)controls;
-(BOOL)isShowingMediaControls;
-(void)_setMediaControlsVisible:(BOOL)visible;
-(void)_toggleMediaControls;
-(id)_notificationController;
-(void)pluginController:(id)controller activePluginDidChange:(id)activePlugin;
-(void)_setNowPlayingControllerEnabled:(BOOL)enabled;
-(void)_removeActivePluginView;
-(void)_resetActivePlugin;
-(BOOL)allowAnimatedDismissalForLockScreenPlugin;
-(void)updateCustomSubtitleTextForAwayViewPlugin:(id)awayViewPlugin;
-(void)adjustLockScreenContentByOffset:(float)offset forPluginController:(id)pluginController withAnimationDuration:(double)animationDuration;
-(CGRect)defaultContentRegionForPluginController:(id)pluginController withOrientation:(int)orientation;
-(void)disableLockScreenBundleWithName:(id)name deactivationContext:(id)context;
-(void)enableLockScreenBundleWithName:(id)name activationContext:(id)context;
-(id)activeLockScreenPluginController;
-(BOOL)isLockScreenPluginViewVisible;
-(void)deactivateCardItem:(id)item;
-(void)updateCardItem:(id)item;
-(void)activateCardItem:(id)item animated:(BOOL)animated;
-(id)allPendingAlertItems;
-(BOOL)hasSuperModalAlertItems;
-(id)dequeueAllPendingSuperModalAlertItems;
-(id)currentAlertItem;
-(void)cleanupAlertItemsForDeactivation;
-(void)deactivateAlertItem:(id)item animated:(BOOL)animated;
-(BOOL)activateAlertItem:(id)item animated:(BOOL)animated;
-(BOOL)wantsToHandleAlert:(id)handleAlert;
-(BOOL)canHandleAlerts;
-(BOOL)shouldPendAlertItemsWhileActive;
-(void)chargingViewControllerFadedOutContent:(id)content;
-(void)_cleanupBatteryChargingViewWithAnimationDuration:(double)animationDuration;
-(void)_fadeViewsForChargingViewVisible:(BOOL)chargingViewVisible;
-(void)_powerStatusChanged:(id)changed;
-(void)_updateBatteryChargingViewAnimated:(BOOL)animated;
-(void)authenticateForNotificationActionWithCompletion:(id)completion;
-(void)_dismissFullscreenBulletinAlertAnimated:(BOOL)animated;
-(void)dismissFullscreenBulletinAlertWithItem:(id)item;
-(void)modifyFullscreenBulletinAlertWithItem:(id)item;
-(void)presentFullscreenBulletinAlertWithItem:(id)item;
-(void)_removeFullscreenBulletinViewAnimated:(BOOL)animated;
-(void)_addFullscreenBulletinViewWithItem:(id)item;
-(id)lockScreenScrollView;
-(void)notificationListBecomingVisible:(BOOL)visible;
-(void)attemptToUnlockUIFromNotification;
-(void)_dismissNotificationCenterToRevealPasscode;
-(void)bannerEnablementChanged;
-(void)timerControllerDidStopTimer:(id)timerController;
-(void)timerControllerDidStartTimer:(id)timerController;
-(void)_updateDateTimerStatusBarAndLockSlider;
-(BOOL)_shouldShowChargingText;
-(BOOL)_shouldShowDate;
-(float)_effectiveVisibleStatusBarAlpha;
-(id)_effectiveCustomSlideToUnlockText;
-(float)_effectiveOpacityForVisibleDateView;
-(BOOL)isMakingEmergencyCall;
-(void)emergencyDialerExitedWithError:(id)error;
-(void)exitEmergencyDialerAnimated:(BOOL)animated;
-(void)_destroyEmergencyDialerAnimated:(BOOL)animated;
-(void)launchEmergencyDialer;
-(void)_adjustIdleTimerForEmergencyDialerActive:(BOOL)emergencyDialerActive;
-(void)passcodeLockViewKeypadKeyUp:(id)up;
-(void)passcodeLockViewKeypadKeyDown:(id)down;
-(void)passcodeLockViewEmergencyCallButtonPressed:(id)pressed;
-(void)passcodeLockViewCancelButtonPressed:(id)pressed;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)mesa;
-(void)passcodeLockViewPasscodeEntered:(id)entered;
-(void)passcodeLockViewPasscodeDidChange:(id)passcodeLockViewPasscode;
-(void)_endTimedPasscodeHysteresis;
-(void)_beginTimedPasscodeHysteresis;
-(void)_togglePasscodeEmergencyCallButtonIfNecessary;
-(BOOL)__shouldHidePasscodeForActiveCall;
-(void)_evaluateLockUIForActiveCalls;
-(BOOL)isHidingPasscodeViewDuringCall;
-(void)_passcodeStateChanged;
-(BOOL)_wantsToAnimateFromPasscodeLockOnFailedPasscodeAttemptAndBlocked;
-(BOOL)isPasscodeLockVisible;
-(void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated withUnlockSource:(int)unlockSource andOptions:(id)options;
-(void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated completion:(id)completion;
-(void)_callCountChanged:(id)changed;
-(void)_callInfoChanged:(id)changed;
-(void)_handlePasscodePolicyChanged;
-(void)_handlePasscodeLockStateChanged;
-(void)_handleBacklightLevelChanged:(id)changed;
-(void)_handleBacklightFadeEnded;
-(void)_handleDisplayTurnedOn:(id)on;
-(void)_handleDisplayWillUndim;
-(void)_handleDisplayTurnedOff;
-(void)noteModalBannerIsVisible:(BOOL)visible;
-(void)noteResetRestoreStateUpdated;
-(void)noteDeviceBlockedStatusUpdated;
-(void)_removePasscodeOverlayWithCompletion:(id)completion;
-(void)_addPasscodeOverlayWithCompletion:(id)completion;
-(void)_unsupportedChargingAccessoryStateChanged:(id)changed;
-(void)infoOverlayWantsDismissal;
-(void)_removeInfoOverlayViewAnimated:(BOOL)animated;
-(void)_addInfoOverlayViewWithTitle:(id)title;
-(void)overlay:(id)overlay wantsStyleChange:(unsigned)change;
-(void)removeOverlay:(id)overlay transitionIfNecessary:(BOOL)necessary animated:(BOOL)animated completion:(id)completion;
-(void)removeOverlay;
-(void)addOverlay:(id)overlay transitionIfNecessary:(BOOL)necessary animated:(BOOL)animated completion:(id)completion;
-(void)__transitionOverlayAnimated:(BOOL)animated from:(id)from to:(id)to completion:(id)completion;
-(void)_removeAllOverlays;
-(BOOL)_shouldDismissSwitcherOnActivation;
-(BOOL)hasTranslucentBackground;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(unsigned)supportedInterfaceOrientations;
-(int)interfaceOrientationForActivation;
-(BOOL)_forcesPortraitOrientation;
-(BOOL)suppressesControlCenter;
-(BOOL)suppressesNotificationCenter;
-(BOOL)suppressesBanners;
-(BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleLockButtonPressed;
-(BOOL)handleMenuButtonHeld;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)showsSpringBoardStatusBar;
-(BOOL)allowsStackingOfAlert:(id)alert;
-(int)statusBarStyleOverridesToCancel;
-(int)statusBarStyle;
-(void)alertDisplayWillBecomeVisible;
-(id)alertDisplayViewWithSize:(CGSize)size;
-(void)_notificationCenterDidPresent:(id)_notificationCenter;
-(void)_notificationCenterWillPresent:(id)_notificationCenter;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)_setStatusBarUserInteractionEnabledForTopGrabber:(BOOL)topGrabber;
-(void)displayDidDisappear;
-(void)willBeginDeactivationForTransitionToApps:(id)apps animated:(BOOL)animated;
-(void)deactivate;
-(void)activate;
-(BOOL)allowSystemGestureAtLocation:(CGPoint)location;
-(void)shakeSlideToUnlockTextWithCustomText:(id)customText;
-(void)prepareForMesaUnlockWithCompletion:(id)completion;
-(BOOL)lockScreenBulletinControllerIsActive;
-(BOOL)lockScreenIsShowingBulletins;
-(BOOL)wantsToShowStatusBarTime;
-(BOOL)shouldShowStatusBarOnDeactivation;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)_isFadeInAnimationInProgress;
-(void)_startFadeInAnimationForBatteryView:(BOOL)batteryView;
-(void)startLockScreenFadeInAnimationForSource:(int)source;
-(void)noteExitingLostMode;
-(void)prepareToEnterLostMode;
-(BOOL)isShowingOverheatUI;
-(void)noteNextUnlockShouldReturnToCallIfPossible:(BOOL)noteNextUnlock;
-(void)handlePhoneAppExitedIfNecessary;
-(void)noteStartingPhoneCallWhileUILocked;
-(void)activateCameraAnimated:(BOOL)animated;
-(BOOL)wantsSupportedInterfaceOrientationsIgnoredDuringDeactivation;
-(void)finishUIUnlockFromSource:(int)source;
-(void)prepareForUIUnlock;
-(void)prepareForExternalUIUnlock;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)source;
-(BOOL)wantsPasscodeLockForUIUnlockFromSource:(int)source withOptions:(id)options;
-(id)_effectiveLockScreenActionContext;
-(id)currentLockScreenActionContext;
-(void)setForcesPasscodeViewDuringCall:(BOOL)call;
-(void)setInScreenOffMode:(BOOL)screenOffMode forAutoUnlock:(BOOL)autoUnlock;
-(void)setInScreenOffMode:(BOOL)screenOffMode;
-(void)_updateGrabbersForScreenOffMode;
-(BOOL)isInScreenOffMode;
-(BOOL)isLockScreenVisible;
-(BOOL)isAllowingWallpaperBlurUpdates;
-(BOOL)lockScreenViewIsCurrentlyBeingDisplayed;
-(BOOL)shouldShowSlideToUnlockTextImmediately;
-(void)addCoordinatedPresentingController:(id)controller;
-(void)removeCoordinatedPresentingController:(id)controller;
-(id)effectiveCustomSlideToUnlockText;
-(BOOL)lockScreenViewPhonePluginIsActive;
-(void)lockScreenView:(id)view didEndScrollingOnPage:(int)page;
-(void)lockScreenViewWillEndDraggingWithPercentScrolled:(float)lockScreenView percentScrolledVelocity:(float)velocity targetScrollPercentage:(float)percentage;
-(void)lockScreenViewDidScrollWithNewScrollPercentage:(float)lockScreenView tracking:(BOOL)tracking;
-(void)_adjustLockScreenWallpaperAlphaForPercentScrolled:(float)percentScrolled scrollViewTracking:(BOOL)tracking;
-(void)lockScreenViewDidBeginScrolling:(id)lockScreenView;
-(void)lockScreenView:(id)view didScrollToPage:(int)page;
-(void)_postPasscodeLockNotification:(int)notification;
-(void)_setHintManagerEnabledIfPossible:(BOOL)possible;
-(void)_setHintManagerEnabledIfPossible:(BOOL)possible removingLockScreenView:(BOOL)view;
-(BOOL)isBounceEnabledForPresentingController:(id)presentingController locationInWindow:(CGPoint)window;
-(BOOL)isPresentationEnabledForPresentingController:(id)presentingController locationInWindow:(CGPoint)window;
-(BOOL)isSystemGesturePermittedForPresentingController:(id)presentingController;
-(unsigned)hintEdgeForController:(id)controller;
-(float)hintDisplacementForController:(id)controller;
-(void)_handleSuggestedAppChanged:(id)changed;
-(BOOL)_disableIdleTimer:(BOOL)timer;
-(BOOL)wasAutoUnlocked;
-(void)_removeMediaControls;
-(void)_addMediaControls;
-(void)_removeBatteryChargingView;
-(void)_addBatteryChargingViewAndShowBattery:(BOOL)battery;
-(void)_removeNotificationView;
-(void)_addNotificationView;
-(void)_removeModalAlertView;
-(void)_addModalAlertView;
-(void)_removeTimerView;
-(void)_addTimerView;
-(void)_addTimerViewIfNecessary;
-(void)_removeStatusTextView;
-(void)_addStatusTextView;
-(void)_removeDateView;
-(void)_addDateView;
-(void)_addRemoveOrChangePasscodeViewIfNecessary;
-(void)_removeRestoreView:(BOOL)view;
-(void)_addOrRemoveResetRestoreViewIfNecessary:(BOOL)necessary;
-(id)_currentTextForResetOrRestoreState;
-(void)_removeThermalTrapView:(BOOL)view;
-(void)_addOrRemoveThermalTrapViewIfNecessary:(BOOL)necessary;
-(void)_removeModalBannerOverlay:(BOOL)overlay;
-(void)_addOrRemoveModalBannerOverlay:(BOOL)overlay;
-(void)_removeBlockedView:(BOOL)view;
-(void)_addOrRemoveBlockedViewIfNecessary:(BOOL)necessary;
-(void)_addBottomLeftGrabberIfNecessaryForAutoUnlock:(BOOL)autoUnlock;
-(void)_addCameraGrabberIfNecessary;
-(id)lockScreenHintManager;
-(id)_lockScreenViewCreatingIfNecessary;
-(id)lockScreenView;
-(void)_releaseLockScreenView;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
