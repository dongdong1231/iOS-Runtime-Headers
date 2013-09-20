/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@class ATXPCConnection, NSMutableArray, NSObject<ATConnectionDelegate>;

@interface ATConnection : NSObject {
    BOOL _atcRunning;
    int _atcRunningToken;
    ATXPCConnection *_connection;
    NSObject<ATConnectionDelegate> *_delegate;
    BOOL _registerForStatus;
    NSMutableArray *_registeredDataclasses;
}

@property(retain) NSObject<ATConnectionDelegate> * delegate;

- (id)_connection;
- (void)_handleMessage:(id)arg1;
- (void)_resetConnection;
- (void)_sendMessage:(id)arg1 info:(id)arg2 reply:(id)arg3;
- (void)_sendStatusRegistration;
- (void)cancelSync;
- (void)clearSyncData;
- (void)dataMigrationFinished;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)isSyncing:(BOOL*)arg1 automatically:(BOOL*)arg2 wirelessly:(BOOL*)arg3;
- (void)keepATCAlive:(BOOL)arg1;
- (void)lowBatteryNotification;
- (void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2;
- (void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2;
- (void)registerForAssetProgressForDataclass:(id)arg1;
- (void)registerForStatus;
- (void)requestSyncForLibrary:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)unregisterForStatus;

@end