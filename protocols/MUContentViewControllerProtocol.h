/* Generated by RuntimeBrowser.
 */

@protocol MUContentViewControllerProtocol <NSObject>

@required

- (struct CGSize { double x1; double x2; })contentSize;
- (UIView *)contentSnapshot;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (struct CGSize { double x1; double x2; })idealContentSizeForScreenSize:(struct CGSize { double x1; double x2; })arg1 windowDecorationSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setup;
- (void)teardown;
- (void)uninstallAllAnnotationControllerOverlays;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRectInCoordinateSpace:(id <UICoordinateSpace>)arg1;

@optional

- (bool)centersIgnoringContentInsets;
- (bool)navigationModeHorizontal;
- (unsigned long long)pageCount;
- (void)setCentersIgnoringContentInsets:(bool)arg1;
- (void)setNavigationModeHorizontal:(bool)arg1;
- (void)setShowsThumbnailView:(bool)arg1;
- (void)setSourceContentReplacedAnnotationMaps:(NSArray *)arg1;
- (bool)showsThumbnailView;
- (NSArray *)sourceContentReplacedAnnotationMaps;

@end
