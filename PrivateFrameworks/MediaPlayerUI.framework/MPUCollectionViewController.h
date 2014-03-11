/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class UICollectionView, UICollectionViewLayout;

@interface MPUCollectionViewController : MPUDataSourceViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    Class _cellConfigurationClass;
    UICollectionView *_collectionView;
    UICollectionViewLayout *_collectionViewLayout;
}

@property(readonly) Class cellClass;
@property(readonly) Class cellConfigurationClass;
@property(readonly) UICollectionView * collectionView;
@property(readonly) UICollectionViewLayout * collectionViewLayout;
@property(readonly) Class collectionViewLayoutClass;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (id)_createCollectionView;
- (id)_createCollectionViewLayout;
- (Class)cellClass;
- (Class)cellConfigurationClass;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView;
- (id)collectionViewLayout;
- (Class)collectionViewLayoutClass;
- (void)dealloc;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (void)reloadData;
- (void)viewDidLoad;

@end