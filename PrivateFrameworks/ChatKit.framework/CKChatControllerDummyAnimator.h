/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKChatControllerDummyAnimator : NSObject <CAAnimationDelegate, CKImpactEffectAnimationProvider> {
    <CKSendAnimationManager> * _animationDelegate;
    CAEmitterLayer * _dustEmitter;
}

@property (nonatomic) <CKSendAnimationManager> *animationDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CAEmitterLayer *dustEmitter;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginFocusAnimationWithContext:(id)arg1;
- (void)_beginGentleAnimationWithContext:(id)arg1;
- (void)_beginImpactAnimationWithContext:(id)arg1;
- (void)_beginLoudAnimationsWithContext:(id)arg1;
- (void)_beginThrowAnimationWithContext:(id)arg1;
- (id)animationDelegate;
- (void)beginAnimationWithSendAnimationContext:(id)arg1;
- (id)dustEmitter;
- (id)init;
- (void)setAnimationDelegate:(id)arg1;
- (void)setDustEmitter:(id)arg1;
- (void)stopAnimationWithSendAnimationContext:(id)arg1;

@end
