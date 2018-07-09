/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/XCTTargetBootstrap.framework/XCTTargetBootstrap
 */

@interface XCTTargetSession : NSObject <NSXPCListenerDelegate, XCTTarget> {
    NSXPCListener * _clientListener;
    <XCTConnectionAccepting> * _connectionHandler;
    NSXPCConnection * _daemonConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSXPCListener *clientListener;
@property (retain) <XCTConnectionAccepting> *connectionHandler;
@property (retain) NSXPCConnection *daemonConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_XCT_requestEndpointWithAutomationSupportLibraryPath:(id)arg1 protocolVersion:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)_on_queue_connect;
- (id)_on_queue_getListenerEndpoint;
- (bool)_on_queue_loadAutomationSupportLibraryFromPath:(id)arg1 error:(id*)arg2;
- (void)_on_queue_startListeningForClientConnections;
- (id)clientListener;
- (void)connect;
- (id)connectionHandler;
- (id)daemonConnection;
- (id)init;
- (id)initWithDaemonConnection:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)queue;
- (void)setClientListener:(id)arg1;
- (void)setConnectionHandler:(id)arg1;
- (void)setDaemonConnection:(id)arg1;
- (void)setQueue:(id)arg1;

@end