/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLProcessNetworkAgent : PLAgent {
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    NSDictionary *_lastEntry;
    NSDate *_lastEntryTime;
    struct __NStatManager { } *_statManagerRef;
    UsageFeed *_usageFeed;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) NSDictionary *lastEntry;
@property (retain) NSDate *lastEntryTime;
@property struct __NStatManager { }*statManagerRef;
@property (retain) UsageFeed *usageFeed;

+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitionUsage;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitionUsage;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionConnection;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void).cxx_destruct;
- (void)AccountForDiffEntries:(id)arg1 withStartDate:(id)arg2 andStopDate:(id)arg3 andTotal:(id)arg4;
- (void)addSource:(id)arg1 toPID:(id)arg2;
- (id)batteryLevelChanged;
- (void)didAddNewSource:(struct __NStatSource { }*)arg1;
- (void)didRemoveSource:(id)arg1;
- (void)didSetCountsBlock:(id)arg1 withCounts:(id)arg2;
- (void)didSetDescriptionBlock:(id)arg1 withDescription:(id)arg2;
- (id)init;
- (void)initOperatorDependancies;
- (id)lastEntry;
- (id)lastEntryTime;
- (void)log;
- (void)logEventBackwardUsage;
- (void)logEventBackwardUsageWithOutcome:(id)arg1;
- (void)logEventPointConnectionEvent:(id)arg1 forSource:(id)arg2;
- (BOOL)outcomeHasDataUsage:(id)arg1;
- (void)setBatteryLevelChanged:(id)arg1;
- (void)setLastEntry:(id)arg1;
- (void)setLastEntryTime:(id)arg1;
- (void)setStatManagerRef:(struct __NStatManager { }*)arg1;
- (void)setUsageFeed:(id)arg1;
- (struct __NStatManager { }*)statManagerRef;
- (void)transferSource:(id)arg1 fromPID:(id)arg2 toPID:(id)arg3;
- (void)updateSumDictionary:(id)arg1 withProcessInfo:(id)arg2 withDiffEntries:(id)arg3 withDate:(id)arg4 withEntryKey:(id)arg5;
- (id)usageFeed;

@end