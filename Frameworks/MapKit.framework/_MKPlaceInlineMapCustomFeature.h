/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPlaceInlineMapCustomFeature : NSObject <MKCustomFeatureAnnotation> {
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    VKCustomFeature * _feature;
}

@property (nonatomic) struct { double x1; double x2; } coordinate;
@property (nonatomic) double course;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL showsBalloonCallout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct { double x1; double x2; })coordinate;
- (id)feature;
- (id)initWithCustomFeature:(id)arg1 coordinate:(struct { double x1; double x2; })arg2;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (BOOL)showsBalloonCallout;

@end
