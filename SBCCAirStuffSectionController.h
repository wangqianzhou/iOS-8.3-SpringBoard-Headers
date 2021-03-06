/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIActionSheetDelegate.h"
#import "SFAirDropDiscoveryActionSheetDelegate.h"
#import "SFAirDropDiscoveryControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "MPAVRoutingControllerDelegate.h"
#import "SBControlCenterSectionViewController.h"
#import "SpringBoard-Structs.h"

@class NSString, BSTimer, SFAirDropDiscoveryController, MPAudioVideoRoutingPopoverController, MPAVRoutingViewController, MPAVRoutingSheet, SBCCButtonLikeSectionView, MPAVRoutingController;

__attribute__((visibility("hidden")))
@interface SBCCAirStuffSectionController : SBControlCenterSectionViewController <MPAVRoutingControllerDelegate, UIPopoverControllerDelegate, SFAirDropDiscoveryControllerDelegate, SFAirDropDiscoveryActionSheetDelegate, UIActionSheetDelegate> {
	SBCCButtonLikeSectionView* _airPlaySection;
	SBCCButtonLikeSectionView* _airDropSection;
	MPAVRoutingController* _airPlayController;
	MPAVRoutingSheet* _airPlayModalSheet;
	MPAVRoutingViewController* _airPlayViewController;
	MPAudioVideoRoutingPopoverController* _airPlayPopoverController;
	SFAirDropDiscoveryController* _airDropDiscoveryController;
	BOOL _isVisible;
	BOOL _airPlayWasPreviouslyEnabled;
	BSTimer* _resetTimer;
	BSTimer* _airPlayTimer;
	BOOL _airPlayEnabled;
	BOOL _airDropEnabled;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL airDropEnabled;
@property(assign, nonatomic) BOOL airPlayEnabled;
+(id)defaultFontTight;
+(id)defaultFont;
+(Class)viewClass;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(void)discoveryController:(id)controller actionSheetDidDismiss:(id)actionSheet;
-(void)discoveryController:(id)controller actionSheetWillDismiss:(id)actionSheet;
-(void)discoveryControllerVisibilityDidChange:(id)discoveryControllerVisibility;
-(void)discoveryControllerSettingsDidChange:(id)discoveryControllerSettings;
-(void)routingControllerAvailableRoutesDidChange:(id)routingControllerAvailableRoutes;
-(void)_dismissAirplayControllerAnimated:(BOOL)animated;
-(void)_debugAirplaneStateDidChangeNotification:(id)_debugAirplaneState;
-(void)_debugWifiStateDidChangeNotification:(id)_debugWifiState;
-(void)_updateAirDropControlAsEnabled:(BOOL)enabled;
-(void)_updateForAirDropStateChange;
-(void)_updateAirPlayControlAsEnabled:(BOOL)enabled;
-(void)_updateForAirPlayStateChange;
-(void)_airPlayDoneButtonTapped:(id)tapped;
-(void)_airDropTapped:(id)tapped;
-(void)_airPlayTapped:(id)tapped;
-(void)_showAirPlayView:(id)view;
-(void)_noteSectionEnabledStateDidChange;
-(void)_updateSubsectionVisibilityAnimated:(BOOL)animated;
-(void)_updateLayoutForSizeCategoryChange;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillPresent;
-(void)viewDidLoad;
-(id)view;
-(BOOL)enabledForOrientation:(int)orientation;
-(CGSize)contentSizeForOrientation:(int)orientation;
-(id)sectionIdentifier;
-(void)dealloc;
-(id)init;
@end

