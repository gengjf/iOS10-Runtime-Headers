/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMZoomButton : UIControl {
    UIImageView * __backgroundImageView;
    UIImageView * __circleImageView;
    UIView * __contentContainerView;
    UILabel * __zoomFactorLabel;
    <CAMZoomButtonDelegate> * _delegate;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _highlightingTransform;
    long long  _orientation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
    double  _zoomFactor;
}

@property (nonatomic, readonly) UIImageView *_backgroundImageView;
@property (nonatomic, readonly) UIImageView *_circleImageView;
@property (nonatomic, readonly) UIView *_contentContainerView;
@property (nonatomic, readonly) UILabel *_zoomFactorLabel;
@property (nonatomic) <CAMZoomButtonDelegate> *delegate;
@property (setter=_setHighlightingTransform:, nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } highlightingTransform;
@property (nonatomic) long long orientation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;
@property (nonatomic) double zoomFactor;

+ (id)textForZoomFactor:(double)arg1;

- (void).cxx_destruct;
- (id)_backgroundImageView;
- (id)_circleImageView;
- (void)_commonCAMZoomButtonInitialization;
- (id)_contentContainerView;
- (void)_performHighlightAnimation;
- (void)_setHighlightingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)_updateZoomFactorLabel;
- (id)_zoomFactorLabel;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)delegate;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })highlightingTransform;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setZoomFactor:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;
- (void)tintColorDidChange;
- (double)zoomFactor;

@end