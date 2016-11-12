//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILocationMgrExt.h"
#import "IScanStreetViewMgrExt.h"
#import "NavigateLogicControllerDelegate.h"
#import "QMapViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class AnnotationLogicController, MMTimer, MMUILabel, MMUIView, NSString, NSURL, NavigateLogicController, POIInfo, QMapView, UIButton, UnderLineLabel;

@interface MMViewLocationViewController : MMUIViewController <QMapViewDelegate, WCActionSheetDelegate, ILocationMgrExt, UIAlertViewDelegate, NavigateLogicControllerDelegate, IScanStreetViewMgrExt>
{
    _Bool _canAddToFav;
    _Bool _canSendToFriend;
    _Bool _directShowDirection;
    _Bool _isLoadFinish;
    _Bool _isMapRegionChanging;
    _Bool _showTrackButton;
    unsigned long long _headingTag;
    double _trueHeading;
    NSURL *_streetViewUrl;
    POIInfo *_poiInfo;
    NSString *_chatname;
    NSString *_messageLocalID;
    UIButton *_myLocationButton;
    UIButton *_streetButton;
    QMapView *_mapView;
    MMTimer *_updateUserLocationTimer;
    UnderLineLabel *_infoLabel;
    NavigateLogicController *_navigateLogicController;
    AnnotationLogicController *_annotationLogicController;
    id <ViewLocationDelegate> _delegate;
    _Bool _canShareToOpenSDK;
    NSString *fromUsername;
    NSString *_messageSvrID;
    MMUIView *_addressDetailContainerView;
    MMUILabel *_addressMainLabel;
    MMUILabel *_addressSubLabel;
    UIButton *_addressDetailBtn;
    UIButton *_addressNavigationBtn;
}

- (void).cxx_destruct;
- (void)OnSendStreetViewLocation:(id)arg1 Err:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) UIButton *addressDetailBtn; // @synthesize addressDetailBtn=_addressDetailBtn;
@property(retain, nonatomic) MMUIView *addressDetailContainerView; // @synthesize addressDetailContainerView=_addressDetailContainerView;
@property(retain, nonatomic) MMUILabel *addressMainLabel; // @synthesize addressMainLabel=_addressMainLabel;
@property(retain, nonatomic) UIButton *addressNavigationBtn; // @synthesize addressNavigationBtn=_addressNavigationBtn;
@property(retain, nonatomic) MMUILabel *addressSubLabel; // @synthesize addressSubLabel=_addressSubLabel;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) _Bool canAddToFav; // @synthesize canAddToFav=_canAddToFav;
- (_Bool)canSendToDevices;
@property(nonatomic) _Bool canSendToFriend; // @synthesize canSendToFriend=_canSendToFriend;
@property(nonatomic) _Bool canShareToOpenSDK; // @synthesize canShareToOpenSDK=_canShareToOpenSDK;
@property(readonly, nonatomic) NSString *chatname; // @synthesize chatname=_chatname;
- (void)dealloc;
@property(nonatomic) __weak id <ViewLocationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool directShowDirection; // @synthesize directShowDirection=_directShowDirection;
- (void)favAddLocItemWithRemark:(id)arg1;
@property(retain, nonatomic) NSString *fromUsername; // @synthesize fromUsername;
- (id)getDisplayNameByUsername:(id)arg1;
- (id)getLocationText:(struct CLLocationCoordinate2D)arg1;
- (id)getStreetViewUrl;
- (id)getUserLocation;
- (void)initAddressDetailView;
- (void)initView;
- (id)initWithChatname:(id)arg1 POIInfo:(id)arg2 ShowTrackButton:(_Bool)arg3;
- (_Bool)isOnUserLocation:(struct CLLocationCoordinate2D)arg1;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
@property(retain, nonatomic) NSString *messageLocalID; // @synthesize messageLocalID=_messageLocalID;
@property(retain, nonatomic) NSString *messageSvrID; // @synthesize messageSvrID=_messageSvrID;
- (void)navigateTo:(id)arg1 Name:(id)arg2 Sender:(id)arg3;
- (void)onAction:(id)arg1;
- (void)onClickInfo:(id)arg1;
- (void)onHeadingChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onMyLocationButtonClick;
- (void)onNavigateToPOI:(id)arg1;
- (void)onPresentViewControlelr:(id)arg1 Animated:(_Bool)arg2;
- (void)onPushViewController:(id)arg1 Animated:(_Bool)arg2;
- (void)onReturn;
- (void)onStartLoading;
- (void)onStopLoading;
- (void)onTimerUpdateLocation;
- (void)openStreetView;
@property(readonly, nonatomic) POIInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
- (void)reloadStreetBtn;
- (void)setAnnotation:(id)arg1 Coordinate:(struct CLLocationCoordinate2D)arg2 Animated:(_Bool)arg3 Duration:(float)arg4;
- (void)setPOICalloutShow:(_Bool)arg1;
- (void)setPoiInfo:(id)arg1;
- (void)showDirection;
- (void)startGetStreetViewUrl;
- (void)startTimerCheckUserLocation;
- (void)startUpdateTrueHeading;
- (void)startUpdateUserLocation;
- (void)startViewingLocation;
- (void)stopTimerCheckUserLocation;
- (void)stopUpdateTrueHeading;
- (void)stopUpdateUserLocation;
- (void)stopViewingLocation;
- (_Bool)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

