/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class SKComposeReviewViewController;

@interface SKRemoteComposeReviewViewController : _UIRemoteViewController <SKUIClientComposeReviewViewController> {
    SKComposeReviewViewController *_composeReviewViewController;
}

@property SKComposeReviewViewController * composeReviewViewController;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (id)composeReviewViewController;
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)setComposeReviewViewController:(id)arg1;
- (void)promptForStarRating;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;

@end