/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayViewWithGutters : UIView {
    float _allDayHeight;
    EKDayView *_dayView;
    float _gutterWidth;
    EKDayAllDayView *_leftAllDayView;
    UIView *_leftGutter;
    EKDayAllDayView *_rightAllDayView;
    UIView *_rightGutter;
}

@property (nonatomic) float allDayHeight;
@property (nonatomic, retain) EKDayView *dayView;
@property (nonatomic) float gutterWidth;
@property (nonatomic, readonly) UIView *leftGutter;
@property (nonatomic, readonly) UIView *rightGutter;

- (void).cxx_destruct;
- (id)_createAllDayView;
- (float)allDayHeight;
- (id)dayView;
- (float)gutterWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 dayView:(id)arg2;
- (id)leftGutter;
- (id)rightGutter;
- (void)setAllDayHeight:(float)arg1;
- (void)setDayView:(id)arg1;
- (void)setGutterWidth:(float)arg1;

@end