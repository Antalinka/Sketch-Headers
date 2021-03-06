//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSBaseInspectorSection.h"

@class MSArtboardPresetInspectorItem, MSArtboardResizeToFitInspectorItem, MSLineEndpointInspectorItem1, MSLineEndpointInspectorItem2, MSLineTransformInspectorItem, MSPaddingInspectorItem, MSPositionInspectorItem, MSResizeInspectorItem, MSSizeInspectorItem, MSTransformInspectorItem;

@interface MSGeometryInspectorSection : MSBaseInspectorSection
{
    BOOL _shouldShowPositions;
    MSPositionInspectorItem *_positionItem;
    MSSizeInspectorItem *_sizeItem;
    MSArtboardPresetInspectorItem *_artboardPresetsItem;
    MSArtboardResizeToFitInspectorItem *_resizeToFitItem;
    MSTransformInspectorItem *_transformItem;
    MSLineTransformInspectorItem *_lineTransformItem;
    MSLineEndpointInspectorItem1 *_lineEndItem1;
    MSLineEndpointInspectorItem2 *_lineEndItem2;
    MSResizeInspectorItem *_resizeItem;
    MSPaddingInspectorItem *_paddingItem1;
    MSPaddingInspectorItem *_paddingItem2;
}

@property(retain, nonatomic) MSPaddingInspectorItem *paddingItem2; // @synthesize paddingItem2=_paddingItem2;
@property(retain, nonatomic) MSPaddingInspectorItem *paddingItem1; // @synthesize paddingItem1=_paddingItem1;
@property(retain, nonatomic) MSResizeInspectorItem *resizeItem; // @synthesize resizeItem=_resizeItem;
@property(retain, nonatomic) MSLineEndpointInspectorItem2 *lineEndItem2; // @synthesize lineEndItem2=_lineEndItem2;
@property(retain, nonatomic) MSLineEndpointInspectorItem1 *lineEndItem1; // @synthesize lineEndItem1=_lineEndItem1;
@property(retain, nonatomic) MSLineTransformInspectorItem *lineTransformItem; // @synthesize lineTransformItem=_lineTransformItem;
@property(retain, nonatomic) MSTransformInspectorItem *transformItem; // @synthesize transformItem=_transformItem;
@property(retain, nonatomic) MSArtboardResizeToFitInspectorItem *resizeToFitItem; // @synthesize resizeToFitItem=_resizeToFitItem;
@property(retain, nonatomic) MSArtboardPresetInspectorItem *artboardPresetsItem; // @synthesize artboardPresetsItem=_artboardPresetsItem;
@property(retain, nonatomic) MSSizeInspectorItem *sizeItem; // @synthesize sizeItem=_sizeItem;
@property(retain, nonatomic) MSPositionInspectorItem *positionItem; // @synthesize positionItem=_positionItem;
@property(nonatomic) BOOL shouldShowPositions; // @synthesize shouldShowPositions=_shouldShowPositions;
- (void).cxx_destruct;
- (void)valuesPossiblyChanged:(id)arg1;
- (BOOL)wantsSeparatorAfterViews;
- (void)valuesPossiblyChanged;
- (void)refreshBindingsOnShape:(id)arg1;
- (BOOL)hasSliceLayer;
- (BOOL)hasArtboardLayer;
- (BOOL)hasOnlyArtboardLayers;
- (BOOL)hasOnlyLineShapeLayers;
- (void)updateItems;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

