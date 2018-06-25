//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MSDataMenuProviderDelegate.h"

@class MSAvailableOverride, MSDataMenuProvider, NSArray, NSLayoutConstraint, NSSet, NSString, NSView;

@interface MSOverrideViewController : NSViewController <MSDataMenuProviderDelegate>
{
    MSAvailableOverride *_primaryOverride;
    NSArray *_instances;
    NSSet *_allOverrides;
    MSDataMenuProvider *_dataController;
    NSView *_contentView;
    NSLayoutConstraint *_indentationConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *indentationConstraint; // @synthesize indentationConstraint=_indentationConstraint;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MSDataMenuProvider *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) NSSet *allOverrides; // @synthesize allOverrides=_allOverrides;
@property(retain, nonatomic) NSArray *instances; // @synthesize instances=_instances;
@property(readonly, nonatomic) MSAvailableOverride *primaryOverride; // @synthesize primaryOverride=_primaryOverride;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasSingleOverride;
- (void)applyOverrideToSelectedLayers:(id)arg1;
- (void)overrideValueAction:(id)arg1;
- (void)dataMenuProviderApplyMasterDataToInstances:(id)arg1;
- (BOOL)dataMenuProviderCanApplyMasterDataToInstances:(id)arg1;
- (id)dataMenuProviderSelectedLayerDataSupplierIdentifier:(id)arg1;
- (void)dataMenuProvider:(id)arg1 didChooseData:(id)arg2;
- (unsigned long long)dataMenuProviderDataTypeForMenuBuilding:(id)arg1;
- (BOOL)dataMenuProviderIsInspectorPopupMenu:(id)arg1;
- (BOOL)dataMenuProvider:(id)arg1 canChooseDataOfType:(unsigned long long)arg2;
- (unsigned long long)supportedDataProviders;
- (id)labelView;
- (id)valueFromControlView:(id)arg1;
- (id)controlViewForEditingOverride;
- (void)build;
- (void)setIndentationLevel:(unsigned long long)arg1;
- (id)views;
- (id)initWithPrimaryOverride:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

