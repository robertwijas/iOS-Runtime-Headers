/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBOrientationServiceServer : FBSystemServiceFacility {
    NSMutableSet *_interestedClients;
}

- (void)_handleRegisterOrientationInterest:(id)arg1 fromClient:(id)arg2;
- (void)_handleRequestActiveOrientation:(id)arg1 fromClient:(id)arg2;
- (void)_updateInterest:(unsigned int)arg1 forClient:(id)arg2;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 clientAuthenticator:(id)arg3;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)noteInterfaceOrientationChanged:(int)arg1 animationSettings:(id)arg2 direction:(int)arg3;
- (id)prerequisiteMilestones;

@end