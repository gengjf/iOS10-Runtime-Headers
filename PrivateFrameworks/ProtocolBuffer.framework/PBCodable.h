/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class NSData;

@interface PBCodable : NSObject <NSSecureCoding> {
}

@property(readonly) NSData * data;

+ (BOOL)supportsSecureCoding;

- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)init;
- (id)data;
- (id)dictionaryRepresentation;
- (id)initWithData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end