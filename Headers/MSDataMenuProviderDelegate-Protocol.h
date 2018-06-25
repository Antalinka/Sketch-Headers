//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSDataMenuProvider, MSDataSupplier, NSString;

@protocol MSDataMenuProviderDelegate <NSObject>
- (void)dataMenuProviderApplyMasterDataToInstances:(MSDataMenuProvider *)arg1;
- (void)dataMenuProvider:(MSDataMenuProvider *)arg1 didChooseData:(MSDataSupplier *)arg2;
- (BOOL)dataMenuProviderIsInspectorPopupMenu:(MSDataMenuProvider *)arg1;
- (unsigned long long)dataMenuProviderDataTypeForMenuBuilding:(MSDataMenuProvider *)arg1;
- (NSString *)dataMenuProviderSelectedLayerDataSupplierIdentifier:(MSDataMenuProvider *)arg1;
- (BOOL)dataMenuProviderCanApplyMasterDataToInstances:(MSDataMenuProvider *)arg1;
- (BOOL)dataMenuProvider:(MSDataMenuProvider *)arg1 canChooseDataOfType:(unsigned long long)arg2;
@end

