/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {
}

@property(readonly) NSDictionary *pixelBufferAttributes;
@property(readonly) NSInteger height;
@property(readonly) NSInteger width;

+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;

- (NSInteger)height;
- (id)initWithPixelBufferAttributes:(id)arg1 exceptionReason:(id*)arg2;
- (BOOL)isDictionaryFullyFormed;
- (id)pixelBufferAttributes;
- (NSInteger)width;
- (BOOL)willYieldCompressedSamples;

@end