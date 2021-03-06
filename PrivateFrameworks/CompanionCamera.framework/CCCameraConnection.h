/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
 */

@interface CCCameraConnection : NSObject <CCCameraConnectionProtocol, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {
    BOOL  _burstInProgress;
    unsigned int  _currentPreviewState;
    <CCCameraConnectionDelegate> * _delegate;
    unsigned int  _desiredPreviewState;
    int  _deviceConnectedNotificationToken;
    int  _deviceDisconnectedNotificationToken;
    CCCameraConnectionInternal * _internal;
    unsigned int  _interruptionCount;
    float  _lastSentZoomAmount;
    id  _orientationChangeObserver;
    float  _pendingZoomAmount;
    NSString * _previewEndpoint;
    FigCameraViewfinder * _remoteViewfinder;
    FigCameraViewfinderSession * _remoteViewfinderSession;
    NSXPCConnection * _xpc;
    NSObject<OS_dispatch_source> * _zoomTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CCCameraConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_burstSupport;
- (void)_checkin;
- (int)_currentOrientation;
- (int)_flashMode;
- (int)_flashSupport;
- (void)_handleInterruption;
- (void)_handleInvalidation;
- (int)_hdrMode;
- (int)_hdrSupport;
- (int)_irisMode;
- (int)_irisSupport;
- (int)_mode;
- (void)_performPreviewStateTransitionsIfNeeded;
- (BOOL)_shouldReportEvent;
- (BOOL)_toggleCameraDeviceSupport;
- (float)_zoomAmount;
- (BOOL)_zoomSupport;
- (void)_zoomTimerFired;
- (void)burstCaptureDidStop;
- (void)burstCaptureNumberOfPhotosDidChange:(unsigned int)arg1;
- (void)burstCaptureWillStart;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2;
- (void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(long)arg2 thumbnailData:(id)arg3 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(long)arg2;
- (void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1;
- (void)captureDeviceDidChange;
- (void)close;
- (void)closePreview;
- (void)countdownCanceled;
- (void)dealloc;
- (id)delegate;
- (void)flashModeDidChange;
- (void)hdrModeDidChange;
- (id)init;
- (void)irisModeDidChange;
- (BOOL)isOpen;
- (BOOL)isPreviewConnected;
- (void)modeSelected:(unsigned int)arg1;
- (void)open;
- (void)openPreview;
- (void)photoTaken:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)switchedMirroringMode:(BOOL)arg1;
- (void)switchedOrientation:(int)arg1;
- (void)takePhotoWithCountdown:(unsigned int)arg1;
- (oneway void)xpc_beginBurstCaptureWithReply:(id /* block */)arg1;
- (oneway void)xpc_beginVideo;
- (oneway void)xpc_cancelCountdown;
- (oneway void)xpc_endBurstCaptureWithReply:(id /* block */)arg1;
- (oneway void)xpc_endVideo;
- (oneway void)xpc_fetchCurrentState:(id /* block */)arg1;
- (oneway void)xpc_setCameraMode:(int)arg1 interruptCapture:(BOOL)arg2 completion:(id /* block */)arg3;
- (oneway void)xpc_setFlashMode:(int)arg1;
- (oneway void)xpc_setFocusPoint:(id)arg1;
- (oneway void)xpc_setHDRMode:(int)arg1;
- (oneway void)xpc_setIrisMode:(int)arg1;
- (oneway void)xpc_setPreviewEndpoint:(id)arg1;
- (oneway void)xpc_setZoom:(float)arg1 completion:(id /* block */)arg2;
- (oneway void)xpc_toggleCameraDevice;
- (void)zoomDidChange:(float)arg1;

@end
