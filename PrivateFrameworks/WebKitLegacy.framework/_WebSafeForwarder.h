/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface _WebSafeForwarder : NSObject {
    _WebSafeAsyncForwarder * asyncForwarder;
    long long  asyncForwarderPred;
    id  defaultTarget;
    id  target;
}

- (id)asyncForwarder;
- (void)clearTarget;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 defaultTarget:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
