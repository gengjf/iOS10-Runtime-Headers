/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3BitMaskPredicate : ML3PropertyPredicate  {
    long long _mask;
    long long _value;
}

@property long long mask;
@property long long value;

+ (id)predicateWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3;

- (id)initWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (void)setMask:(long long)arg1;
- (long long)mask;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)setValue:(long long)arg1;
- (long long)value;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end