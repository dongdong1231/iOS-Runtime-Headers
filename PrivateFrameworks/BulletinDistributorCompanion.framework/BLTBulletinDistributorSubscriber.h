/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTBulletinDistributorSubscriber : NSObject <BLTPingService> {
    <BLTPingSubscribing> * _client;
    NSXPCConnection * _connection;
    <BLTBulletinDistributorSubscriberDelegate> * _delegate;
    NSString * _machServiceName;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _subscriptions;
}

@property (nonatomic, retain) <BLTPingSubscribing> *client;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property <BLTBulletinDistributorSubscriberDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (copy) NSString *machServiceName;
@property (nonatomic, readonly) NSSet *sectionIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connectIfNecessary;
- (id)client;
- (id)connection;
- (id)delegate;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithClient:(id)arg1;
- (id)machServiceName;
- (void)pingWithBulletin:(id)arg1 ack:(id /* block */)arg2;
- (id)sectionIDs;
- (void)sendBulletinSummary:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMachServiceName:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2 withAck:(BOOL)arg3;
- (void)subscribeWithMachServiceName:(id)arg1;
- (void)unsubscribeFromSectionID:(id)arg1;

@end
