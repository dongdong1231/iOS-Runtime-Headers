/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKDownloadResourcesRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _courseIdentifier;
    BOOL  _openAfterDownloadCompletes;
    NSData * _previewImageData;
    NSArray * _resources;
    NSString * _resourcesDescription;
    NSString * _sourceBundleIdentifier;
}

@property (nonatomic, copy) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic) BOOL openAfterDownloadCompletes;
@property (nonatomic, retain) NSData *previewImageData;
@property (nonatomic, copy) NSArray *resources;
@property (nonatomic, copy) NSString *resourcesDescription;
@property (nonatomic, copy) NSString *sourceBundleIdentifier;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)courseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)openAfterDownloadCompletes;
- (id)previewImageData;
- (id)resources;
- (id)resourcesDescription;
- (void)setCourseIdentifier:(id)arg1;
- (void)setOpenAfterDownloadCompletes:(BOOL)arg1;
- (void)setPreviewImageData:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setResourcesDescription:(id)arg1;
- (void)setSourceBundleIdentifier:(id)arg1;
- (id)sourceBundleIdentifier;

@end