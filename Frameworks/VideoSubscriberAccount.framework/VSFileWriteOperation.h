/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSFileWriteOperation : VSAsyncOperation {
    NSData * _data;
    NSURL * _destination;
    NSError * _error;
}

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSURL *destination;
@property (nonatomic, retain) NSError *error;

- (void).cxx_destruct;
- (id)data;
- (id)destination;
- (id)error;
- (void)executionDidBegin;
- (void)setData:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setError:(id)arg1;

@end