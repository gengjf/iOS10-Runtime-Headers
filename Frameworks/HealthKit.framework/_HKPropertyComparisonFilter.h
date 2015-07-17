/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKPropertyComparisonFilter : _HKFilter {
    NSString *_lhPropertyName;
    unsigned int _operatorType;
    NSString *_rhPropertyName;
}

@property (nonatomic, readonly) NSString *lhPropertyName;
@property (nonatomic, readonly) unsigned int operatorType;
@property (nonatomic, readonly) NSString *rhPropertyName;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)filterWithLeftHandPropertyName:(id)arg1 rightHandPropertyName:(id)arg2 operator:(unsigned int)arg3;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeftHandPropertyName:(id)arg1 rightHandPropertyName:(id)arg2 operator:(unsigned int)arg3;
- (id)lhPropertyName;
- (unsigned int)operatorType;
- (id)rhPropertyName;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithHealthDaemon:(id)arg1;

@end