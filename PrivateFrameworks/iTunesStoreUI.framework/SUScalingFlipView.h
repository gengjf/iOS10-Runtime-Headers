/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUScalingFlipViewDelegate>, UIView;

@interface SUScalingFlipView : UIView  {
    UIView *_backView;
    <SUScalingFlipViewDelegate> *_delegate;
    int _direction;
    double _duration;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _fromFrame;
    UIView *_frontView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _toFrame;
}

@property <SUScalingFlipViewDelegate> * delegate;
@property int direction;
@property double duration;


- (void)performFlip;
- (id)initWithFrontView:(id)arg1 backView:(id)arg2;
- (id)_transformAnimationWithStart:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1 middle:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg2 end:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg3;
- (id)_positionAnimation;
- (id)_inputColorAnimation;
- (id)_backLayerAnimation;
- (id)_fixedAnimationForAnimation:(id)arg1;
- (id)_frontLayerAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (int)direction;
- (void)setDirection:(int)arg1;
- (double)duration;

@end