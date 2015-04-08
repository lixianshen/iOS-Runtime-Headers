/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray;

@interface CKFetchUserIdentitiesOperationInfo : CKOperationInfo <NSSecureCoding> {
    NSArray *_identityInfos;
}

@property(retain) NSArray * identityInfos;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identityInfos;
- (id)initWithCoder:(id)arg1;
- (void)setIdentityInfos:(id)arg1;

@end