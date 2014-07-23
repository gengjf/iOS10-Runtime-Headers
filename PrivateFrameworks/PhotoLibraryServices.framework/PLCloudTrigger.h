/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDictionary, NSMutableDictionary;

@interface PLCloudTrigger : NSObject  {
    NSMutableDictionary *_subscriptions;
    unsigned long long _type;
}

@property(readonly) unsigned long long type;
@property(retain,readonly) NSDictionary * subscriptions;


- (id)subscriptions;
- (void)triggerWithContextObject:(id)arg1;
- (void)unsubscribeWithInstance:(id)arg1;
- (void)subscribeWithInstance:(id)arg1 selector:(SEL)arg2;
- (id)initWithType:(unsigned long long)arg1;
- (void)activate;
- (unsigned long long)type;

@end