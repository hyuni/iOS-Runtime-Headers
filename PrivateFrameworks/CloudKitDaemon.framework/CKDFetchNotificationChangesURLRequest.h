/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSArray, NSData, NSMutableArray;

@interface CKDFetchNotificationChangesURLRequest : CKDURLRequest {
    NSMutableArray *_resultChangedNotifications;
    NSData *_resultServerChangeTokenData;
    unsigned long long _resultsLimit;
    NSData *_serverChangeTokenData;
    bool_moreComing;
}

@property bool moreComing;
@property(readonly) NSArray * resultChangedNotifications;
@property(retain) NSData * resultServerChangeTokenData;
@property unsigned long long resultsLimit;
@property(retain) NSData * serverChangeTokenData;

- (void).cxx_destruct;
- (id)initWithServerChangeTokenData:(id)arg1;
- (bool)moreComing;
- (int)operationType;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (id)resultChangedNotifications;
- (id)resultServerChangeTokenData;
- (unsigned long long)resultsLimit;
- (id)serverChangeTokenData;
- (void)setMoreComing:(bool)arg1;
- (void)setResultServerChangeTokenData:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setServerChangeTokenData:(id)arg1;

@end