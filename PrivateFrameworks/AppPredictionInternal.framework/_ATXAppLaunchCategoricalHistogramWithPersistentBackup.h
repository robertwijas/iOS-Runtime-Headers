/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchCategoricalHistogramWithPersistentBackup : _ATXAppLaunchCategoricalHistogram {
    _ATXDataStore * _datastore;
    int  _histogramType;
    BOOL  _saveInBackground;
    NSObject<OS_dispatch_queue> * _saveQueue;
    NSObject<OS_dispatch_source> * _saveTimer;
}

@property (nonatomic, readonly) _ATXDataStore *datastore;
@property (nonatomic, readonly) int histogramType;
@property (nonatomic) BOOL saveInBackground;

- (void).cxx_destruct;
- (void)_cancelSaveTimer;
- (void)_scheduleSave;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 category:(id)arg3;
- (id)datastore;
- (void)dealloc;
- (void)flush;
- (int)histogramType;
- (id)initWithDataStore:(id)arg1 histogramType:(int)arg2;
- (id)initWithDataStore:(id)arg1 histogramType:(int)arg2 loadFromDataStore:(BOOL)arg3 saveInBackground:(BOOL)arg4 maxCategoryCount:(unsigned int)arg5 pruningMethod:(int)arg6;
- (id)initWithDataStore:(id)arg1 histogramType:(int)arg2 saveInBackground:(BOOL)arg3;
- (id)initWithDataStore:(id)arg1 histogramType:(int)arg2 saveInBackground:(BOOL)arg3 maxCategoryCount:(unsigned int)arg4 pruningMethod:(int)arg5;
- (void)receivedDataStoreRestoreCompletedNotification:(id)arg1;
- (void)receivedDataStoreRestoreStartedNotification:(id)arg1;
- (void)registerForRestoreCompletedNotificationsFrom:(id)arg1;
- (void)registerForRestoreStartedNotificationFrom:(id)arg1;
- (int)removeAllHistoryForAllBundleIds:(id)arg1;
- (BOOL)removeAllHistoryForBundleId:(id)arg1;
- (void)removeLaunchWithBundleId:(id)arg1 category:(id)arg2;
- (void)resetData;
- (BOOL)saveInBackground;
- (void)setSaveInBackground:(BOOL)arg1;
- (void)unregisterFromRestoreCompletedNotificationsFrom:(id)arg1;
- (void)unregisterFromRestoreStartedNotificationsFrom:(id)arg1;

@end
