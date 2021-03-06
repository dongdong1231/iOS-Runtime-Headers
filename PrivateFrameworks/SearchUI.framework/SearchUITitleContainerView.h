/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITitleContainerView : NUIContainerStackView <NUIContainerStackViewDelegate> {
    SearchUIImageView * _secondaryImageView;
    UILabel * _secondaryLabel;
    SearchUIVibrantLabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SearchUIImageView *secondaryImageView;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) SearchUIVibrantLabel *titleLabel;

+ (id)titleFont;

- (void).cxx_destruct;
- (id)initWithStyle:(unsigned int)arg1;
- (id)secondaryImageView;
- (id)secondaryLabel;
- (void)setSecondaryImageView:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)updateWithResult:(id)arg1;

@end
