//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
// UUID: F80665DA-9CCD-323C-9DC1-66F28428435A
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 2933.5.5.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (_Bool)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol SBLegibility <NSObject>
- (void)updateForChangedSettings:(_UILegibilitySettings *)arg1;
- (void)setStrength:(double)arg1;
@end

@protocol SBPluginBundleController

@optional
+ (void)awakeFromBundle;
@end

@protocol SBUIBannerTarget <SBUIBannerTargetBase>
@end

@protocol SBUIBannerTargetBase <NSObject>
@property(readonly, nonatomic) long long bannerTargetIdiom;
@property(readonly, nonatomic) void *bannerTargetIdentifier;
- (void)removeCachedBannerForContext:(SBUIBannerContext *)arg1;
- (void)cacheBannerForContext:(SBUIBannerContext *)arg1 withCompletion:(void (^)(void))arg2;
- (void)dismissCurrentBannerContextForSource:(id <SBUIBannerSource>)arg1;
- (SBUIBannerContext *)currentBannerContextForSource:(id <SBUIBannerSource>)arg1;
- (void)signalSource:(id <SBUIBannerSource>)arg1;
- (_Bool)isShowingModalBanner;
- (void)modallyPresentBannerWithContext:(SBUIBannerContext *)arg1;
- (void)unregisterSource:(id <SBUIBannerSource>)arg1;
- (void)registerSource:(id <SBUIBannerSource>)arg1;
@end

@protocol SBUIControlCenterControl <SBUIControlCenterControlObserver>
@end

@protocol SBUIControlCenterControlObserver <NSObject>

@optional
- (void)controlConfigurationDidChangeForState:(long long)arg1;
- (void)controlAppearanceDidChangeForState:(long long)arg1;
@end

@protocol SBUIQuietModePlayability <NSObject>
- (_Bool)overridesQuietMode;
- (_Bool)isCritical;
- (_Bool)inertWhenLocked;
@end

@protocol UIAlertViewDelegate <NSObject>

@optional
- (_Bool)alertViewShouldEnableFirstOtherButton:(UIAlertView *)arg1;
- (void)alertView:(UIAlertView *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(UIAlertView *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentAlertView:(UIAlertView *)arg1;
- (void)willPresentAlertView:(UIAlertView *)arg1;
- (void)alertViewCancel:(UIAlertView *)arg1;
- (void)alertView:(UIAlertView *)arg1 clickedButtonAtIndex:(long long)arg2;
@end

@protocol _UISettingsKeyObserver <NSObject>
- (void)settings:(_UISettings *)arg1 changedValueForKey:(NSString *)arg2;
@end

@interface BBBulletin (SBUIUtilities)
+ (void)killSounds;
- (id)_defaultActionWithFilter:(CDUnknownBlockType)arg1;
- (id)_responseForAction:(id)arg1 withOrigin:(int)arg2 context:(id)arg3;
- (_Bool)sb_supportsRaiseAction;
- (id)sb_minimalSupplementaryActions;
- (_Bool)sb_shouldSuppressMessageForPrivacy;
- (_Bool)bulletinAlertShouldOverrideQuietMode;
- (CDUnknownBlockType)actionBlockForButton:(id)arg1;
- (CDUnknownBlockType)actionBlockForAction:(id)arg1;
- (CDUnknownBlockType)actionBlockForAction:(id)arg1 withOrigin:(int)arg2;
- (_Bool)_isPushOrLocalNotification;
- (id)_launchURLForAction:(id)arg1 context:(id)arg2;
- (CDUnknownBlockType)actionBlockForAction:(id)arg1 withOrigin:(int)arg2 context:(id)arg3;
- (id)sb_nonPluginDefaultAction;
- (void)killSound;
- (_Bool)playSound;
@end

@interface BBColor (SpringBoard)
@property(readonly, copy, nonatomic) UIColor *uiColor;
@end

@interface SBAlertItem : NSObject <UIAlertViewDelegate>
{
    UIAlertView *_alertSheet;
    _Bool _orderOverSBAlert;
    _Bool _preventLockOver;
    _Bool _didEverActivate;
    _Bool _ignoreIfAlreadyDisplaying;
    _Bool _didPlayPresentationSound;
    _Bool _allowInSetup;
    _Bool _pendInSetupIfNotAllowed;
    _Bool _pendWhileKeyBagLocked;
    NSArray *_allowedBundleIDs;
    _Bool _allowInCar;
    _Bool _allowMessageInCar;
}

+ (void)activateAlertItem:(id)arg1;
+ (id)_alertItemsController;
@property(nonatomic) _Bool allowMessageInCar; // @synthesize allowMessageInCar=_allowMessageInCar;
@property(nonatomic) _Bool allowInCar; // @synthesize allowInCar=_allowInCar;
@property(retain, nonatomic) NSArray *allowedBundleIDs; // @synthesize allowedBundleIDs=_allowedBundleIDs;
@property(nonatomic) _Bool pendWhileKeyBagLocked; // @synthesize pendWhileKeyBagLocked=_pendWhileKeyBagLocked;
@property(nonatomic) _Bool pendInSetupIfNotAllowed; // @synthesize pendInSetupIfNotAllowed=_pendInSetupIfNotAllowed;
@property(nonatomic) _Bool allowInSetup; // @synthesize allowInSetup=_allowInSetup;
@property(nonatomic) _Bool ignoreIfAlreadyDisplaying; // @synthesize ignoreIfAlreadyDisplaying=_ignoreIfAlreadyDisplaying;
- (_Bool)_dismissesOverlaysOnLockScreen;
- (_Bool)dismissesAutomatically;
- (id)prepareNewAlertSheetWithLockedState:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)displayActionButtonOnLockScreen;
- (_Bool)hasActiveKeyboardOnScreen;
- (int)alertPriority;
- (_Bool)preventInterruption;
- (_Bool)reappearsAfterUnlock;
- (_Bool)reappearsAfterLock;
- (_Bool)behavesSuperModally;
- (_Bool)forcesModalAlertAppearance;
- (id)alertItemNotificationSender;
- (id)alertItemNotificationDate;
- (int)alertItemNotificationType;
- (void)noteVolumeOrLockPressed;
- (void)didDeactivateForReason:(int)arg1;
- (void)willDeactivateForReason:(int)arg1;
- (void)didFailToActivate;
- (void)screenWillUndim;
- (void)dismiss:(int)arg1;
- (void)dismiss;
- (void)buttonDismissed;
- (void)willRelockForButtonPress:(_Bool)arg1;
- (void)didActivate;
- (void)willActivate;
- (_Bool)_didEverActivate;
- (void)setPreventLockOver:(_Bool)arg1;
- (_Bool)preventLockOver;
- (void)setOrderOverSBAlert:(_Bool)arg1;
- (void)performUnlockAction;
- (double)autoDismissInterval;
- (id)shortLockLabel;
- (id)lockLabel;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)cleanPreviousConfiguration;
- (void)playPresentationSound;
- (void)_playPresentationSound;
- (id)sound;
- (_Bool)didPlayPresentationSound;
- (_Bool)isCriticalAlert;
- (_Bool)dismissOnModalDisplayActivation;
- (_Bool)dismissOnLock;
- (_Bool)togglesMediaControls;
- (int)unlockSource;
- (_Bool)unlocksScreen;
- (_Bool)undimsScreen;
- (_Bool)shouldShowInEmergencyCall;
- (_Bool)shouldShowInLockScreen;
- (_Bool)allowAutoUnlock;
- (_Bool)allowLockScreenDismissal;
- (_Bool)allowMenuButtonDismissal;
- (void)dealloc;
- (id)init;
- (id)alertController;
- (id)alertSheet;
- (Class)alertSheetClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SBAwayViewPluginController : NSObject
{
    UIView *_view;
    _Bool _viewCanBeDisplayed;
    _Bool _fullscreen;
    _Bool _alwaysFullscreen;
    long long _orientation;
    CDUnknownBlockType _disableTransitionBlock;
    unsigned long long _effectivePresentationStyle;
    NSString *_enablingApplicationBundleIdentifier;
}

+ (void)disableBundleNamed:(id)arg1;
+ (void)disableBundleNamed:(id)arg1 deactivationContext:(id)arg2;
+ (void)enableBundleNamed:(id)arg1;
+ (void)enableBundleNamed:(id)arg1 activationContext:(id)arg2;
@property(copy, nonatomic) NSString *enablingApplicationBundleIdentifier; // @synthesize enablingApplicationBundleIdentifier=_enablingApplicationBundleIdentifier;
@property(nonatomic, getter=_effectivePresentationStyle, setter=_setEffectivePresentationStyle:) unsigned long long effectivePresentationStyle; // @synthesize effectivePresentationStyle=_effectivePresentationStyle;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool viewCanBeDisplayed; // @synthesize viewCanBeDisplayed=_viewCanBeDisplayed;
- (void)setNeedsLegibilityAppearanceUpdate;
- (_Bool)isContentViewWhiteUnderSlideToUnlockText;
- (_Bool)legibilitySettingsOverridesVibrancy;
- (id)legibilitySettings;
- (unsigned long long)overlayStyle;
- (void)lockScreenMediaControlsShown:(_Bool)arg1;
- (_Bool)wantsMesaAutoUnlock;
- (_Bool)wantsSwipeGestureRecognizer;
- (_Bool)wantsAutomaticFullscreenTimer;
- (_Bool)handleHeadsetButtonPressed:(_Bool)arg1;
- (_Bool)handleVolumeDownButtonPressed;
- (_Bool)handleVolumeUpButtonPressed;
- (_Bool)handleLockButtonPressed;
- (_Bool)handleGesture:(int)arg1 fingerCount:(unsigned long long)arg2;
- (_Bool)handleMenuButtonHeld;
- (_Bool)wantsMenuButtonHeldEvent;
- (_Bool)handleMenuButtonDoubleTap;
- (_Bool)handleMenuButtonTap;
- (id)slideToUnlockText;
- (_Bool)showsDuringCall;
- (_Bool)wantsUserWallpaper;
- (_Bool)wantsHardwareEventsWhenScreenDimmed;
- (_Bool)wantsToOpenURLsWhilePasscodeLocked;
- (_Bool)allowsSiri;
- (_Bool)allowsPhotoSlideshow;
- (_Bool)allowsLockScreenMediaControls;
- (_Bool)allowsLockScreenCamera;
- (_Bool)canScreenDim;
- (id)customHeaderView;
- (_Bool)showHeaderView;
- (_Bool)showStatusBar;
- (id)customSubtitleColor;
- (id)customSubtitleText;
- (_Bool)hasCustomSubtitle;
- (_Bool)showDate;
- (_Bool)showBatteryChargingText;
- (_Bool)showDateView;
- (_Bool)disablesAwayItemsCompletely;
- (_Bool)showAwayItems;
- (unsigned long long)unlockAnimationStyleForDestinationApp:(id)arg1;
- (id)bundleIDForUnlock;
- (_Bool)animateResumingToApplicationWithIdentifier:(id)arg1;
- (long long)pluginPriority;
- (_Bool)retainsPriorityWhileInactive;
- (void)deviceLockViewDidHide;
- (void)deviceLockViewWillShow;
- (void)alwaysFullscreenValueHasChanged;
- (_Bool)canBeAlwaysFullscreen;
@property(nonatomic, getter=isAlwaysFullscreen) _Bool alwaysFullscreen;
- (double)transitionDuration;
- (double)viewFadeInDuration;
- (_Bool)allowsLockScreenHint;
- (_Bool)allowsTimer;
- (_Bool)allowsControlCenter;
- (_Bool)allowsNotificationCenter;
- (_Bool)shouldAutoHideNotifications;
- (_Bool)shouldShowLockStatusBarTime;
- (_Bool)shouldDisableOnUnlock;
- (_Bool)shouldDisableOnRelock;
- (_Bool)viewWantsOverlayLayout;
- (unsigned long long)notificationBehavior;
- (unsigned long long)presentationStyle;
- (_Bool)viewWantsFullscreenLayout;
- (void)setFullscreen:(_Bool)arg1 duration:(double)arg2;
- (void)setFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isFullscreen;
- (CDUnknownBlockType)enableTransitionBlock;
- (CDUnknownBlockType)_disableTransitionBlock;
- (void)_setDisableTransitionBlock:(CDUnknownBlockType)arg1;
- (void)disableWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)disable;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setDeactivationContext:(id)arg1;
- (void)setActivationContext:(id)arg1;
- (void)purgeView;
- (void)loadView;
- (id)backgroundView;
@property(retain, nonatomic) UIView *view;
- (void)dealloc;
- (id)init;

@end

@interface SBBulletinEvent : NSObject
{
    NSString *_bulletinID;
    CDUnknownBlockType _handler;
}

+ (id)eventForBulletin:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)execute;
- (id)bulletinID;
- (void)dealloc;
- (id)initWithBulletin:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

@interface SBLockScreenTimerDialView : UIView <SBLegibility>
{
    _UILegibilityView *_dialView;
    double _strength;
}

@property(nonatomic) double strength; // @synthesize strength=_strength;
- (id)_imageNameForCurrentContentSize:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_newDialViewForSettings:(id)arg1;
- (void)updateForChangedSettings:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SBUIBannerAction : NSObject
{
    CDUnknownBlockType _actionBlock;
    NSString *_remoteViewControllerClassName;
    NSString *_remoteServiceBundleIdentifier;
}

+ (id)actionWithBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *remoteServiceBundleIdentifier; // @synthesize remoteServiceBundleIdentifier=_remoteServiceBundleIdentifier;
@property(copy, nonatomic) NSString *remoteViewControllerClassName; // @synthesize remoteViewControllerClassName=_remoteViewControllerClassName;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)dealloc;
- (id)initWithActionBlock:(CDUnknownBlockType)arg1 remoteViewControllerClassName:(id)arg2 remoteServiceBundleIdentifier:(id)arg3;

@end

@interface SBUIBannerContext : NSObject
{
    SBUIBannerItem *_item;
    id <SBUIBannerSource> _source;
    id <SBUIBannerTarget> _target;
    _Bool _isValid;
    _Bool _requestsModalPresentation;
    NSString *_presentingActionIdentifier;
}

@property(copy, nonatomic) NSString *presentingActionIdentifier; // @synthesize presentingActionIdentifier=_presentingActionIdentifier;
@property(nonatomic) _Bool requestsModalPresentation; // @synthesize requestsModalPresentation=_requestsModalPresentation;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_isValid;
@property(readonly, retain, nonatomic) id <SBUIBannerTarget> target; // @synthesize target=_target;
@property(readonly, retain, nonatomic) id <SBUIBannerSource> source; // @synthesize source=_source;
@property(readonly, retain, nonatomic) SBUIBannerItem *item; // @synthesize item=_item;
- (id)description;
- (void)invalidate;
@property(readonly, nonatomic) SBUIBannerAction *interactiveAction;
- (void)dealloc;
- (id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3 presentingActionIdentifier:(id)arg4 requestModalPresentation:(_Bool)arg5;
- (id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3;

@end

@interface SBUIBannerItem : NSObject <SBUIQuietModePlayability>
{
}

- (_Bool)overridesQuietMode;
- (_Bool)isCritical;
- (_Bool)inertWhenLocked;
- (id)lockScreenActionContextWithContext:(id)arg1;
- (id)actionWithIdentifier:(id)arg1;
- (id)defaultActionWithContext:(id)arg1;
- (_Bool)hasSubActions;
- (id)subActions;
- (id)subActionLabels;
- (id)pullDownNotification;
- (_Bool)canShowWhileLocked;
- (_Bool)canShowInAssistant;
- (id)sortDate;
- (id)sound;
- (CDUnknownBlockType)action;
- (_Bool)isSticky;
- (unsigned long long)priority;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SBUIBannerTargetManager : NSObject
{
    NSHashTable *_proxies;
    NSMapTable *_implementationToProxyMap;
    NSHashTable *_observers;
}

+ (id)sharedInstance;
- (void)_notifyObservers:(CDUnknownBlockType)arg1;
- (id)_proxyForTargetImplementation:(id)arg1;
- (void)_unregisterTargetImplementation:(id)arg1;
- (void)_registerTargetImplementation:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *targets;
- (void)dealloc;
- (id)init;

@end

@interface SBUIBannerTargetProxy : NSObject <SBUIBannerTarget>
{
    void *_identifier;
    long long _idiom;
    id <SBUIBannerTargetImplementation> _implementation;
}

@property(readonly, nonatomic) long long bannerTargetIdiom; // @synthesize bannerTargetIdiom=_idiom;
@property(readonly, nonatomic) void *bannerTargetIdentifier; // @synthesize bannerTargetIdentifier=_identifier;
@property(readonly, copy) NSString *description;
- (void)removeCachedBannerForContext:(id)arg1;
- (void)cacheBannerForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dismissCurrentBannerContextForSource:(id)arg1;
- (id)currentBannerContextForSource:(id)arg1;
- (void)signalSource:(id)arg1;
- (_Bool)isShowingModalBanner;
- (void)modallyPresentBannerWithContext:(id)arg1;
- (void)unregisterSource:(id)arg1;
- (void)registerSource:(id)arg1;
- (void)invalidate;
- (id)initWithTargetImplementation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SBUIControlCenterButton : SBFButton <_UISettingsKeyObserver, SBUIControlCenterControl>
{
    struct UIEdgeInsets _bgCapInsets;
    UIVisualEffect *_normalStateEffect;
    UIVisualEffect *_highlightedStateEffect;
    UIVisualEffect *_disabledStateEffect;
    UIImageView *_backgroundImageView;
    UIImageView *_glyphImageView;
    UIVisualEffectView *_backgroundEffectView;
    _Bool _isCircleButton;
    _Bool _isRectButton;
    id <SBUIControlCenterButtonDelegate> _delegate;
    UIImage *_normalBGImage;
    UIImage *_selectedBGImage;
    UIImage *_sourceGlyphImage;
    UIImage *_normalGlyphImage;
    UIImage *_sourceSelectedGlyphImage;
    UIImage *_selectedGlyphImage;
    double _naturalHeight;
}

+ (struct UIEdgeInsets)visibleContentInsets;
+ (id)_buttonWithBGImage:(id)arg1 selectedBGImage:(id)arg2 glyphImage:(id)arg3 naturalHeight:(double)arg4;
+ (id)roundRectButtonWithGlyphImage:(id)arg1;
+ (id)circularButtonWithGlyphImage:(id)arg1;
+ (id)roundRectButton;
+ (id)circularButton;
+ (id)_roundRectBackgroundImageForState:(long long)arg1;
+ (id)_circleBackgroundImageForState:(long long)arg1;
+ (void)controlAppearanceDidChangeForState:(long long)arg1;
@property(nonatomic) double naturalHeight; // @synthesize naturalHeight=_naturalHeight;
@property(retain, nonatomic) UIImage *selectedGlyphImage; // @synthesize selectedGlyphImage=_selectedGlyphImage;
@property(retain, nonatomic) UIImage *sourceSelectedGlyphImage; // @synthesize sourceSelectedGlyphImage=_sourceSelectedGlyphImage;
@property(retain, nonatomic) UIImage *normalGlyphImage; // @synthesize normalGlyphImage=_normalGlyphImage;
@property(retain, nonatomic) UIImage *sourceGlyphImage; // @synthesize sourceGlyphImage=_sourceGlyphImage;
@property(retain, nonatomic) UIImage *selectedBGImage; // @synthesize selectedBGImage=_selectedBGImage;
@property(retain, nonatomic) UIImage *normalBGImage; // @synthesize normalBGImage=_normalBGImage;
@property(nonatomic) _Bool isRectButton; // @synthesize isRectButton=_isRectButton;
@property(nonatomic) _Bool isCircleButton; // @synthesize isCircleButton=_isCircleButton;
@property(nonatomic) id <SBUIControlCenterButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_updateEffects;
- (void)setEnabled:(_Bool)arg1;
- (void)_pressAction;
- (struct CGSize)visibleContentSize;
- (void)setBackgroundImage:(id)arg1;
- (void)_setBackgroundImage:(id)arg1 selectedBackgroundImage:(id)arg2 naturalHeight:(double)arg3;
- (void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2;
- (void)_rebuildGlyphImages;
- (void)_rebuildSelectedGlyph;
- (void)_rebuildNormalGlyph;
- (void)_updateForStateChange;
- (void)_updateBackgroundForStateChange;
- (void)_updateGlyphForStateChange;
- (id)_glyphImageForState:(long long)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (long long)_currentState;
- (_Bool)_drawingAsSelected;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)_rectForGlyph:(id)arg1 centeredInRect:(struct CGRect)arg2;
- (id)_backgroundImageWithGlyphImage:(id)arg1 state:(long long)arg2;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backgroundImage:(id)arg2 selectedBackgroundImage:(id)arg3 glyphImage:(id)arg4 naturalHeight:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SBUIControlCenterLabel : UILabel <SBUIControlCenterControl>
{
}

- (void)controlConfigurationDidChangeForState:(long long)arg1;
- (void)controlAppearanceDidChangeForState:(long long)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)_updateAttributedText;
- (void)setNumberOfLines:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (long long)_currentState;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SBUIControlCenterSlider : _UIDynamicSlider <_UISettingsKeyObserver, SBUIControlCenterControl>
{
    double _valueImagePadding;
    _Bool _customTrackImage;
    UIVisualEffectView *_highlightEffectView;
    _Bool _highlightMinimumTrackImage;
    _Bool _shouldHighlightValueImagesWhileAdjusting;
    _Bool _adjusting;
    UIImage *_minValueMaskImage;
    UIImage *_maxValueMaskImage;
    UIImage *_trackMaskImage;
    struct UIEdgeInsets _trackCapInsets;
}

+ (id)_knobImage;
+ (id)_maxTrackImage;
+ (id)_minTrackImageForState:(long long)arg1;
+ (id)_createTrackImageForState:(long long)arg1;
+ (id)_trackImage;
+ (void)controlAppearanceDidChangeForState:(long long)arg1;
+ (void)initialize;
@property struct UIEdgeInsets trackCapInsets; // @synthesize trackCapInsets=_trackCapInsets;
@property(retain) UIImage *trackMaskImage; // @synthesize trackMaskImage=_trackMaskImage;
@property(retain) UIImage *maxValueMaskImage; // @synthesize maxValueMaskImage=_maxValueMaskImage;
@property(retain) UIImage *minValueMaskImage; // @synthesize minValueMaskImage=_minValueMaskImage;
@property(nonatomic, getter=isAdjusting) _Bool adjusting; // @synthesize adjusting=_adjusting;
@property(nonatomic) _Bool shouldHighlightValueImagesWhileAdjusting; // @synthesize shouldHighlightValueImagesWhileAdjusting=_shouldHighlightValueImagesWhileAdjusting;
@property(nonatomic) _Bool highlightMinimumTrackImage; // @synthesize highlightMinimumTrackImage=_highlightMinimumTrackImage;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)controlConfigurationDidChangeForState:(long long)arg1;
- (void)controlAppearanceDidChangeForState:(long long)arg1;
- (void)_updateEffects;
- (void)_configureControlStates;
- (void)layoutSubviews;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)_valueImagePadding;
- (double)_valueImageCenterTrackOffset;
- (double)_naturalTrackWidth;
- (void)setMaximumValueImage:(id)arg1;
- (void)setMinimumValueImage:(id)arg1;
- (void)_setTrackImage:(id)arg1;
- (void)setTrackImage:(id)arg1;
- (void)_updateMaximumTrackImage;
- (void)_updateMinimumTrackImage;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_updateValueImageView:(id)arg1 fadeToImage:(id)arg2;
- (void)_updateMaximumValueImage;
- (void)_updateMinimumValueImage;
- (id)_valueImageForImage:(id)arg1 state:(long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SBUIControlCenterVisualEffect : UIVisualEffect
{
    long long _style;
}

+ (id)effectWithStyle:(long long)arg1;
- (id)effectConfig;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface SBUIFullscreenAlertController : UIViewController <NSCopying>
{
    _Bool _shouldAnimateIn;
    NSNumber *_animationStartTime;
    NSString *_activationContext;
    NSInvocation *_pendingDeactivationInvocation;
}

@property(retain, nonatomic) NSString *activationContext; // @synthesize activationContext=_activationContext;
@property(retain, nonatomic) NSNumber *animationStartTime; // @synthesize animationStartTime=_animationStartTime;
@property(nonatomic) _Bool shouldAnimateIn; // @synthesize shouldAnimateIn=_shouldAnimateIn;
- (id)pendingDeactivationInvocation;
- (void)setPendingDeactivationInvocation:(id)arg1;
- (void)didFinishLaunchingFrontmost;
- (void)handleAutoLock;
- (_Bool)handleHeadsetButtonPressed:(_Bool)arg1;
- (_Bool)handleMenuButtonTap;
- (_Bool)handleVolumeDownButtonPressed;
- (_Bool)handleVolumeUpButtonPressed;
- (_Bool)handleLockButtonPressed;
- (_Bool)allowStackingOfAlert:(id)arg1;
- (_Bool)hasTranslucentBackground;
- (_Bool)viewIsReadyToBeRemoved;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)finishedAnimatingOut;
- (void)animateViewOut;
- (void)finishedAnimatingIn;
- (void)animateViewIn;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)definesPresentationContext;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLoad;
- (void)viewWillAnimateOut;
- (void)viewWillAnimateIn;
- (_Bool)allowSuspension;
- (_Bool)isSlidingViewController;
- (void)removeBackgroundStyleWithDuration:(double)arg1;
- (void)setBackgroundStyle:(long long)arg1 withDuration:(double)arg2;
- (void)setWallpaperTunnelActive:(_Bool)arg1;
- (void)requestDeactivationAnimated:(_Bool)arg1 animateOldDisplayInWithStyle:(int)arg2;
- (void)requestActivationAnimated:(_Bool)arg1 animateCurrentDisplayOut:(_Bool)arg2 withDelay:(_Bool)arg3;
- (id)init;

@end

@interface SBUILockScreenDisableAssertion : NSObject
{
}

+ (id)lockScreenDisableAssertionWithIdentifier:(id)arg1;
+ (void)setLockScreenDisableAssertionClass:(Class)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1;

@end

@interface SBUIPluginActivationContext : NSObject
{
    UIScreen *_screen;
    int _activationEvent;
}

@property(retain, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(nonatomic) int activationEvent; // @synthesize activationEvent=_activationEvent;
- (void)dealloc;

@end

@interface SBUIPluginAppearanceContext : NSObject
{
    unsigned long long _uiEnvironment;
    _Bool _hideOtherWindowsDuringAppearance;
}

@property(nonatomic) _Bool hideOtherWindowsDuringAppearance; // @synthesize hideOtherWindowsDuringAppearance=_hideOtherWindowsDuringAppearance;
@property(nonatomic) unsigned long long uiEnvironment; // @synthesize uiEnvironment=_uiEnvironment;

@end

@interface SBUIPluginController : NSObject <SBPluginBundleController>
{
    id <SBUIPluginControllerHost> _host;
    _Bool _isVisible;
}

@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_isVisible;
@property(nonatomic) id <SBUIPluginControllerHost> host; // @synthesize host=_host;
- (_Bool)handledMenuButtonTap;
- (_Bool)handledMenuButtonUpEvent;
- (_Bool)handledMenuButtonDownEvent;
- (void)handleViewFullyRevealed;
- (void)viewPartiallyRevealedWithPercentRevealed:(double)arg1;
- (id)viewControllerForActivationContext:(id)arg1;
- (_Bool)handledButtonTapFromSource:(int)arg1;
- (_Bool)handledButtonUpEventFromSource:(int)arg1;
- (_Bool)handledButtonDownEventFromSource:(int)arg1;
- (_Bool)handledWiredMicButtonTap;
- (void)handlePreheatCommand;
- (void)handleBluetoothDismissal;
- (_Bool)handledPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)handleActivationEvent:(int)arg1 eventSource:(int)arg2 context:(void *)arg3;
- (void)cancelPendingActivationEvent:(int)arg1;
- (void)prepareForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3;
- (_Bool)wantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double *)arg3;
- (_Bool)supportedAndEnabled;
- (void)registeredWithHost;

@end

@interface SBUISlidingFullscreenAlertController : SBUIFullscreenAlertController
{
    UIView *_topBar;
    UIView *_bottomBar;
    _Bool _animatingIn;
    _Bool _animatingOut;
}

@property(readonly, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(readonly, nonatomic) UIView *topBar; // @synthesize topBar=_topBar;
- (void)updateSpringBoardInPreparationForTransparentDismiss;
- (void)finishedAnimatingIn;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (_Bool)viewIsReadyToBeRemoved;
- (void)animateViewOut;
- (double)_animationDelayForOthersActivation;
- (double)_slideOutAnimationDuration;
- (double)_slideOutAnimationDelay;
- (_Bool)_animatingToHomescreenWallpaper;
- (void)_viewAnimatedOut;
- (void)viewWillAnimateOut;
- (void)animateViewIn;
- (void)_performAnimateDisplayIn;
- (void)viewWillAnimateIn;
- (_Bool)shouldShowBottomBar;
- (_Bool)isShowingWallpaper;
- (_Bool)hasTranslucentBackground;
- (id)backgroundView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)newBottomBar;
- (id)newTopBar;
- (_Bool)isSlidingViewController;

@end

@interface SBUISound : NSObject
{
    long long _soundType;
    unsigned int _systemSoundID;
    unsigned int _resolvedSystemSoundID;
    unsigned long long _soundBehavior;
    NSString *_ringtoneName;
    AVItem *_avItem;
    NSDictionary *_vibrationPattern;
    _Bool _repeats;
    double _maxDuration;
    NSDictionary *_controllerAttributes;
    int _alertType;
    NSString *_accountIdentifier;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    NSString *_resolvedToneIdentifier;
    CDUnknownBlockType _completionBlock;
    NSString *_songPath;
}

@property(copy, nonatomic) NSString *songPath; // @synthesize songPath=_songPath;
@property(copy, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;
@property(copy, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) int alertType; // @synthesize alertType=_alertType;
@property(retain, nonatomic) NSDictionary *controllerAttributes; // @synthesize controllerAttributes=_controllerAttributes;
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic, getter=isRepeating) _Bool repeats; // @synthesize repeats=_repeats;
@property(retain, nonatomic) NSDictionary *vibrationPattern; // @synthesize vibrationPattern=_vibrationPattern;
@property(retain, nonatomic) AVItem *avItem; // @synthesize avItem=_avItem;
@property(retain, nonatomic) NSString *ringtoneName; // @synthesize ringtoneName=_ringtoneName;
@property(nonatomic) unsigned long long soundBehavior; // @synthesize soundBehavior=_soundBehavior;
@property(nonatomic, setter=_setResolvedSoundID:) unsigned int _resolvedSystemSoundID; // @synthesize _resolvedSystemSoundID;
@property(nonatomic) unsigned int systemSoundID; // @synthesize systemSoundID=_systemSoundID;
@property(nonatomic) long long soundType; // @synthesize soundType=_soundType;
- (id)description;
- (void)_setResolvedToneIdentifier:(id)arg1;
- (id)_resolvedToneIdentifier;
- (void)_setCompletionBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_completionBlock;
- (void)stop;
- (_Bool)playInEvironments:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isPlaying;
- (void)dealloc;
- (id)initWithSong:(id)arg1 vibrationPattern:(id)arg2 repeats:(_Bool)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithToneAlert:(int)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4;
- (id)initWithAVItem:(id)arg1 vibrationPattern:(id)arg2 repeats:(_Bool)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(_Bool)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithSystemSoundPath:(id)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;
- (id)initWithSystemSoundID:(unsigned int)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;

@end

@interface UIView (SBUIAdditions)
- (void)sbui_drawEagerly;
@end

