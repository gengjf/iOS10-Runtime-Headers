/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSString;

@interface ICSDate : ICSProperty  {
}

@property(retain) NSString * tzid;


- (BOOL)hasFloatingTimeZone;
- (id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3;
- (id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3 hour:(int)arg4 minute:(int)arg5 second:(int)arg6;
- (void)setTzid:(id)arg1;
- (id)tzid;
- (BOOL)hasTimeComponent;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)initWithValue:(id)arg1;
- (id)description;
- (id)components;
- (id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3 hour:(int)arg4 minute:(int)arg5 second:(int)arg6 timeZone:(id)arg7;

@end