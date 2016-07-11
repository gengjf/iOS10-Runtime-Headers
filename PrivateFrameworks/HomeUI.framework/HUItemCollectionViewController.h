/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUItemCollectionViewController : HUCollectionViewController <HFItemManagerDelegate, HUItemManagerContainer, HUPreloadableViewController> {
    NSHashTable * _childViewControllersAtViewWillAppearTime;
    NSHashTable * _childViewControllersAtViewWillDisappearTime;
    bool  _hasFinishedInitialLoad;
    HFItemManager * _itemManager;
    bool  _wantsPreferredContentSize;
}

@property (nonatomic, retain) NSHashTable *childViewControllersAtViewWillAppearTime;
@property (nonatomic, retain) NSHashTable *childViewControllersAtViewWillDisappearTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasFinishedInitialLoad;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItemManager *itemManager;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsPreferredContentSize;

+ (unsigned long long)updateMode;

- (void).cxx_destruct;
- (void)_updateTitle;
- (id)allCellClasses;
- (bool)automaticallyUpdatesViewControllerTitle;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)childViewControllersAtViewWillAppearTime;
- (id)childViewControllersAtViewWillDisappearTime;
- (id)childViewControllersToPreload;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (bool)hasFinishedInitialLoad;
- (id)hu_preloadContent;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)itemManager;
- (void)itemManager:(id)arg1 didChangeOverallLoadingState:(unsigned long long)arg2;
- (void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2;
- (void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didInsertSections:(id)arg2;
- (void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)itemManager:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didRemoveSections:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (bool)itemManager:(id)arg1 performBatchUpdateBlock:(id /* block */)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)recursivelyDisableItemUpdates:(bool)arg1 withReason:(id)arg2;
- (void)setChildViewControllersAtViewWillAppearTime:(id)arg1;
- (void)setChildViewControllersAtViewWillDisappearTime:(id)arg1;
- (void)setHasFinishedInitialLoad:(bool)arg1;
- (void)setItemManager:(id)arg1;
- (void)setWantsPreferredContentSize:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)subclass_preloadContent;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsPreferredContentSize;

@end