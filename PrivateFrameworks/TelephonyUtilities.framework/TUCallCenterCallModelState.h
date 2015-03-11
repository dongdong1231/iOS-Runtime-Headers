/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class TUFaceTimeAudioCallModel, TUProxyCallModel, TUTelephonyCallModel;

@interface TUCallCenterCallModelState : TUCallModelState {
}

@property(retain,readonly) TUFaceTimeAudioCallModel * faceTimeAudioCallModel;
@property(retain,readonly) TUProxyCallModel * proxyCallModel;
@property(retain,readonly) TUTelephonyCallModel * telephonyCallModel;

- (BOOL)_allCallsSupportCallModelType:(int)arg1;
- (BOOL)_anyCallsSupportCallModelType:(int)arg1;
- (BOOL)_displayedCallSupportsCallModelType:(int)arg1;
- (BOOL)_onlySupportsCallModelType:(int)arg1;
- (BOOL)_supportsCallModelType:(int)arg1;
- (BOOL)_updateAddCallAllowed;
- (BOOL)_updateAmbiguityState;
- (BOOL)_updateEndAndAnswerAllowed;
- (BOOL)_updateHardPauseAvailable;
- (BOOL)_updateHoldAllowed;
- (BOOL)_updateHoldAndAnswerAllowed;
- (BOOL)_updateMergeable;
- (BOOL)_updateSendToVoicemailAllowed;
- (BOOL)_updateSwappable;
- (BOOL)_updateTakingCallsPrivateAllowed;
- (void)dealloc;
- (id)description;
- (id)faceTimeAudioCallModel;
- (void)faceTimeAudioCallModelDidChange:(id)arg1;
- (void)handlePossibleStateChange;
- (id)init;
- (BOOL)isAmbiguous;
- (id)proxyCallModel;
- (id)telephonyCallModel;
- (void)telephonyCallModelDidChange:(id)arg1;
- (BOOL)updateInternalState;

@end