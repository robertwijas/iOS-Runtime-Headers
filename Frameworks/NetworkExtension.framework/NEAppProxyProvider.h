/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAppProxyProvider : NETunnelProvider

- (void)cancelProxyWithError:(id)arg1;
- (BOOL)handleNewFlow:(id)arg1;
- (void)startProxyWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopProxyWithReason:(int)arg1 completionHandler:(id /* block */)arg2;

@end
