/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLAudioItemViewController : QLMediaItemViewController <UIGestureRecognizerDelegate> {
    QLOverlayPlayButton * _playButton;
    BOOL  _previewIsVisisble;
    QLWaveformScrubberView * _scrubber;
    UIView * _scrubberContainer;
    UIScrollView * _scrubberContainerScrollView;
    float  _scrubberVerticalOffset;
    BOOL  _scrubbing;
    NSLayoutConstraint * _topScrubber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) UIView *scrubberContainer;
@property float scrubberVerticalOffset;
@property BOOL scrubbing;
@property (readonly) Class superclass;
@property (retain) NSLayoutConstraint *topScrubber;

+ (id)AV_indicatorBackgroundColor;
+ (id)AV_indicatorForegroundColor;

- (void).cxx_destruct;
- (void)_tapRecognized:(id)arg1;
- (id)accessoryView;
- (void)addScrubberWithDeferral;
- (BOOL)canEnterFullScreen;
- (void)dealloc;
- (void)didChangePlayingStatus;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)previewDidAppear:(BOOL)arg1;
- (void)previewDidDisappear:(BOOL)arg1;
- (id)scrubberContainer;
- (float)scrubberVerticalOffset;
- (BOOL)scrubbing;
- (void)setPlayControlsHidden:(BOOL)arg1;
- (void)setScrubberContainer:(id)arg1;
- (void)setScrubberVerticalOffset:(float)arg1;
- (void)setScrubbing:(BOOL)arg1;
- (void)setTopScrubber:(id)arg1;
- (id)timeLabelScrollView;
- (id)topScrubber;
- (void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2;
- (void)transitionDidStart:(BOOL)arg1;

@end
