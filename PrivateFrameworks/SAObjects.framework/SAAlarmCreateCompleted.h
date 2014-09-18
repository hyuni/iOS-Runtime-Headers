/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSURL;

@interface SAAlarmCreateCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSURL * alarmId;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * refId;
@property(readonly) Class superclass;

+ (id)createCompleted;
+ (id)createCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)alarmId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAlarmId:(id)arg1;

@end