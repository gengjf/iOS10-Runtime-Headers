/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSURL, NSString, UIImage;

@interface GKGameSharingInfo : NSObject  {
    BOOL _complete;
    NSString *_gameName;
    NSString *_developerName;
    NSURL *_viewItemURL;
    NSURL *_shortViewItemURL;
    UIImage *_iconImage;
    NSString *_emailSubject;
    NSString *_emailBody;
}

@property(retain) NSString * gameName;
@property(retain) NSString * developerName;
@property(retain) NSURL * viewItemURL;
@property(retain) NSURL * shortViewItemURL;
@property(retain) UIImage * iconImage;
@property(retain) NSString * emailSubject;
@property(retain) NSString * emailBody;
@property BOOL complete;


- (void)setIconImage:(id)arg1;
- (id)emailSubject;
- (id)developerName;
- (id)gameName;
- (id)emailBody;
- (void)setShortViewItemURL:(id)arg1;
- (id)shortViewItemURL;
- (void)setViewItemURL:(id)arg1;
- (void)setDeveloperName:(id)arg1;
- (void)setGameName:(id)arg1;
- (void)setEmailBody:(id)arg1;
- (void)setEmailSubject:(id)arg1;
- (id)subjectForEmailActivity;
- (id)itemsForActivityType:(id)arg1;
- (id)thumbnailForActivityType:(id)arg1;
- (id)operationThatBlocksUntilLoaded;
- (id)initWithGame:(id)arg1;
- (id)viewItemURL;
- (void)dealloc;
- (BOOL)complete;
- (void)setComplete:(BOOL)arg1;
- (id)iconImage;

@end