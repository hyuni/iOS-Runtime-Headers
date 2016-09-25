/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTEnrollConnection : NSObject <ASTConnection> {
    <ASTConnectionStatusDelegate> * _delegate;
    id /* block */  _didReceiveResponse;
    int  _networkDisconnectedRetryCount;
    NSURLRequest * _request;
    BOOL  _retryOnNetworkDisconnected;
    unsigned int  _rootOfTrust;
    NSString * _serialNumber;
    int  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASTConnectionStatusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didReceiveResponse;
@property (readonly) unsigned int hash;
@property (nonatomic) int networkDisconnectedRetryCount;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic) BOOL retryOnNetworkDisconnected;
@property (nonatomic, readonly) unsigned int rootOfTrust;
@property (nonatomic, retain) NSString *serialNumber;
@property (nonatomic) int state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id /* block */)didReceiveResponse;
- (id)generateRequest;
- (id)initWithSerialNumber:(id)arg1;
- (int)networkDisconnectedRetryCount;
- (id)request;
- (BOOL)retryOnNetworkDisconnected;
- (unsigned int)rootOfTrust;
- (id)serialNumber;
- (void)setDelegate:(id)arg1;
- (void)setDidReceiveResponse:(id /* block */)arg1;
- (void)setNetworkDisconnectedRetryCount:(int)arg1;
- (void)setRequest:(id)arg1;
- (void)setRetryOnNetworkDisconnected:(BOOL)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;

@end