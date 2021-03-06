//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_MSLayer.h"

#import "BCOutlineViewNode-Protocol.h"
#import "MSLayer-Protocol.h"
#import "MSLayerContainment-Protocol.h"
#import "MSRectDelegate-Protocol.h"
#import "MSSnappable-Protocol.h"
#import "NSCopying-Protocol.h"

@class MSAbsoluteRect, MSImmutableLayerAncestry, MSLayoutAnchor, MSLayoutPosition, MSModelObject, MSPath, MSSharedStyle, MSStyledLayer, NSArray, NSDictionary, NSHashTable, NSMenu, NSString;
@protocol BCSortable><MSSharedObjectStyling, MSSnappable;

@interface MSLayer : _MSLayer <MSSnappable, BCOutlineViewNode, MSLayerContainment, MSLayer, NSCopying, MSRectDelegate>
{
    long long skipDrawingSelectionCounter;
    BOOL _isHighlighted;
    MSAbsoluteRect *_absoluteRect;
    NSHashTable *_changeObservers;
}

+ (void)makeLayerNamesUnique:(id)arg1 withOptions:(long long)arg2;
+ (id)defaultName;
+ (unsigned long long)traits;
+ (void)alignLayers:(id)arg1 toValue:(double)arg2 forKey:(id)arg3;
+ (struct CGRect)alignmentRectForLayers:(id)arg1;
+ (void)alignLayers:(id)arg1 withMode:(unsigned long long)arg2 toKey:(id)arg3 pixelFit:(BOOL)arg4;
+ (id)keyPathsForValuesAffectingBadgeMap;
+ (id)keyPathsForValuesAffectingPreviewImages;
+ (id)keyPathsForValuesAffectingNodeName;
+ (id)keyPathsForValuesAffectingHasHighlight;
+ (id)keyPathsForValuesAffectingUserVisibleRotation;
+ (double)rotationForUserVisibleRotation:(double)arg1;
+ (double)userVisibleRotationForRotation:(double)arg1;
@property(retain, nonatomic) NSHashTable *changeObservers; // @synthesize changeObservers=_changeObservers;
@property(retain, nonatomic) MSAbsoluteRect *absoluteRect; // @synthesize absoluteRect=_absoluteRect;
@property(nonatomic) BOOL isHighlighted; // @synthesize isHighlighted=_isHighlighted;
- (void).cxx_destruct;
- (void)notifyChangeObservers;
- (void)removeChangeObserver:(id)arg1;
- (void)addChangeObserver:(id)arg1;
- (void)resetFlow;
- (void)rect:(id)arg1 didChangeFromRect:(struct CGRect)arg2;
- (id)allSymbolInstancesInChildren;
- (BOOL)canInsertIntoGroup:(id)arg1;
- (BOOL)canLockProportions;
- (BOOL)canScale;
- (BOOL)canRotate;
@property(readonly, nonatomic) BOOL isLayerExportable;
- (id)layerWithID:(id)arg1;
- (void)setHeightRespectingProportions:(double)arg1;
- (void)setWidthRespectingProportions:(double)arg1;
@property(nonatomic) struct CGPoint center;
@property(nonatomic) struct CGPoint origin;
@property(nonatomic) struct CGRect rect;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setNilValueForKey:(id)arg1;
- (struct CGAffineTransform)transformForConvertingFromParent;
- (struct CGAffineTransform)transformForConvertingFromLayer:(id)arg1;
- (struct CGAffineTransform)transformForConvertingToLayer:(id)arg1;
- (BOOL)canBeTransformed;
- (void)multiplyBy:(double)arg1;
- (void)concatAncestorsAndSelfTransforms;
- (id)transform;
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
- (id)transformForRect:(struct CGRect)arg1;
@property(nonatomic) struct _CHTransformStruct transformStruct;
- (struct CGPoint)convertPointFromRuler:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToRuler:(struct CGPoint)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 toLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayer:(id)arg2;
- (id)childrenIncludingSelf:(BOOL)arg1;
- (id)children;
- (id)ancestorsAndSelfTransforms;
- (id)ancestorsAndSelf;
- (id)ancestors;
- (id)parentSymbol;
- (id)parentArtboard;
@property(readonly, nonatomic) MSImmutableLayerAncestry *ancestry;
- (id)parentRoot;
- (id)parentPage;
- (BOOL)isOpen;
- (void)removeFromParent;
- (void)moveInLayerTreeInBlock:(CDUnknownBlockType)arg1;
- (void)calculateProportions;
- (BOOL)isRectIntegral;
- (void)makeRectIntegral;
- (void)makeOriginIntegral;
@property(nonatomic) struct CGPoint absolutePosition;
@property(readonly, nonatomic) MSPath *pathForBooleanOperations;
@property(readonly, nonatomic) MSPath *pathInFrameWithTransforms;
@property(readonly, nonatomic) MSPath *pathInFrame;
- (struct CGRect)boundsRectForAlignment;
- (struct CGRect)alignmentRectInLayer:(id)arg1 options:(unsigned long long)arg2;
- (void)refreshOverlayInRect:(struct CGRect)arg1;
- (struct CGRect)transformRectToParentCoordinates:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL hasTransforms;
- (void)refreshOverlayWithAbsoluteMargins:(struct CGSize)arg1;
- (void)refreshOverlay;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
- (struct CGRect)absoluteInfluenceRect;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (struct CGSize)calculateMinimumSize;
- (id)layerSuitableForInsertingIntoGroup:(id)arg1;
- (void)layerDidResizeFromRect:(struct CGRect)arg1 corner:(long long)arg2;
- (void)layerDidEndResize;
- (void)layerWillStartResize;
- (void)resizeWithOldGroupSize:(struct CGSize)arg1;
- (long long)adjustmentHandleAtPoint:(struct CGPoint)arg1 zoomScale:(double)arg2 resizing:(BOOL)arg3;
- (BOOL)isTooSmallForPreciseHitTestingAtZoomValue:(double)arg1;
- (BOOL)hitTestRect:(struct CGRect)arg1 options:(unsigned long long)arg2;
- (BOOL)containsPoint:(struct CGPoint)arg1 options:(unsigned long long)arg2 zoomValue:(double)arg3;
- (BOOL)isLayerAtIndex:(unsigned long long)arg1 maskedAtPoint:(struct CGPoint)arg2 zoomValue:(double)arg3;
- (id)selectionHitTest:(struct CGPoint)arg1 options:(unsigned long long)arg2 zoomValue:(double)arg3 resultIndex:(unsigned long long *)arg4;
- (id)selectableLayersWithOptions:(unsigned long long)arg1;
- (BOOL)limitsSelectionToBounds;
- (BOOL)isOpenForSelectionWithOptions:(unsigned long long)arg1;
- (BOOL)isSelectableOnCanvasWithOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL isExpanded;
@property(readonly, nonatomic) BOOL isSelected;
- (void)select:(BOOL)arg1 byExtendingSelection:(BOOL)arg2 showSelection:(BOOL)arg3;
- (void)select:(BOOL)arg1 byExtendingSelection:(BOOL)arg2;
- (BOOL)containsSelectedItemIncludingSelf:(BOOL)arg1;
- (void)moveBySuggestedOffset:(struct CGVector)arg1;
@property(readonly, nonatomic) struct CGRect bounds;
- (void)setName:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
@property(nonatomic) double proportions;
@property(nonatomic) BOOL constrainProportions;
- (unsigned long long)selectionCornerMaskWithZoomValue:(double)arg1;
- (struct CGRect)frameForTransforms;
- (BOOL)hasEnabledBackgroundBlur;
- (id)rootForNameUniquing;
- (id)namesOfAllLayersInContainer:(id)arg1;
- (void)makeNameUniqueInRoot:(id)arg1 withOptions:(long long)arg2;
- (void)makeNameUniqueWithOptions:(long long)arg1;
- (BOOL)isLine;
- (unsigned long long)traits;
@property(readonly, nonatomic) MSStyledLayer *styledLayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)objectDidInit;
- (void)performInitEmptyObject;
- (BOOL)canBeHidden;
- (long long)cornerRectType;
- (BOOL)shouldRefreshOverlayForFlows;
- (BOOL)shouldDrawSelectionStroke;
- (BOOL)shouldDrawSelection;
- (BOOL)canSmartRotate;
- (void)select:(BOOL)arg1 byExpandingSelection:(BOOL)arg2 showSelection:(BOOL)arg3;
- (void)select:(BOOL)arg1 byExpandingSelection:(BOOL)arg2;
- (id)duplicate;
- (BOOL)shouldFlattenAfterRotate;
- (Class)handlerClass;
- (BOOL)handleDoubleClick;
- (id)inspectorViewControllers;
- (id)inspectorViewControllerNames;
- (BOOL)canBeHovered;
- (id)bezierPathForHover;
- (void)drawHoverWithZoom:(double)arg1 color:(id)arg2 cache:(id)arg3;
- (void)writeBitmapImageToFile:(id)arg1;
- (void)applyScreenPickerColor:(id)arg1 preferredStyleName:(id)arg2;
- (id)parentForInsertingLayers;
- (id)displayName;
- (void)changeColor:(id)arg1;
- (BOOL)supportsMultipleShadows;
- (BOOL)supportsInnerOuterBorders;
- (BOOL)canSplitPaths;
- (struct CGRect)minimumAdjustedRectForValue:(double)arg1 axis:(unsigned long long)arg2 anchor:(long long)arg3;
- (struct CGRect)boundsOfParentLayer;
- (void)layerDidResizeFromInspector:(unsigned long long)arg1;
- (id)contextualMenuPreviewImage;
- (id)cachedOrEmptyImageWithName:(id)arg1;
- (id)unselectedPreviewImage;
- (id)selectedPreviewImage;
- (BOOL)canConvertToOutlines;
- (id)layersByConvertingToOutlines;
@property(readonly, nonatomic) MSModelObject<BCSortable><MSSharedObjectStyling> *sharedMaster;
@property(readonly, nonatomic) unsigned long long shareableObjectType;
- (BOOL)canSnap:(unsigned long long)arg1 toLayer:(id)arg2;
- (struct CGRect)distanceRectangleToItem:(id)arg1 axis:(unsigned long long)arg2;
@property(readonly, nonatomic) MSLayer *coordinateSpace;
- (struct CGRect)boundsRect;
@property(readonly, nonatomic) struct CGRect rectForSnapping;
- (struct CGAffineTransform)textCorrectionTransform;
@property(readonly, nonatomic) id <MSSnappable> snapItemForDrawing;
@property(readonly, nonatomic) MSLayoutPosition *midXHeightAnchor;
@property(readonly, nonatomic) MSLayoutPosition *baselineAnchor;
@property(readonly, nonatomic) MSLayoutAnchor *heightAnchor;
@property(readonly, nonatomic) MSLayoutAnchor *widthAnchor;
@property(readonly, nonatomic) MSLayoutPosition *centerYAnchor;
@property(readonly, nonatomic) MSLayoutPosition *centerXAnchor;
@property(readonly, nonatomic) MSLayoutPosition *bottomAnchor;
@property(readonly, nonatomic) MSLayoutPosition *topAnchor;
@property(readonly, nonatomic) MSLayoutPosition *rightAnchor;
@property(readonly, nonatomic) MSLayoutPosition *leftAnchor;
@property(readonly, nonatomic) NSArray *anchorsForSnapping;
- (Class)snapItemClass;
- (id)hudDescription;
- (BOOL)booleanOperationCanBeReset;
- (id)replaceWithInstanceOfSymbol:(id)arg1;
@property(readonly, nonatomic) BOOL isExportableViaDragAndDrop;
- (id)cloneDictionaryReplacingImages:(id)arg1;
- (void)addMastersForInstancesToDocument:(id)arg1;
- (void)moveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)isMasked;
- (void)handleBadgeClickWithAltState:(BOOL)arg1;
@property(readonly, nonatomic) unsigned long long badgeType;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)canMoveToLayer:(id)arg1 beforeLayer:(id)arg2;
@property(readonly, nonatomic) BOOL selectedInLayerList;
@property(readonly, nonatomic) BOOL expandableInLayerList;
- (BOOL)validateNodeName:(id *)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSString *nodeName;
@property(readonly, nonatomic) unsigned long long selectedBadgeMenuItem;
@property(readonly, nonatomic) NSMenu *badgeMenu;
@property(readonly, nonatomic) NSDictionary *previewImages;
@property(readonly, nonatomic) NSDictionary *badgeMap;
@property(readonly, nonatomic) BOOL hasHighlight;
@property(readonly, nonatomic) BOOL isActive;
@property(readonly, nonatomic) unsigned long long filterType;
@property(readonly, nonatomic) unsigned long long displayType;
- (id)lastLayer;
- (id)firstLayer;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 classFilter:(Class)arg2 block:(CDUnknownBlockType)arg3;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (BOOL)containsLayers;
- (BOOL)containsNoOrOneLayers;
- (BOOL)canBeContainedByDocument;
- (BOOL)canBeContainedByGroup;
- (BOOL)canContainLayer:(id)arg1;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (void)setIsVisible:(BOOL)arg1;
- (void)followMaskChainForLayerAtIndex:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)closestClippingLayer;
- (id)candidatesForMasking;
- (BOOL)isPartOfClippingMask;
- (BOOL)hasClippingMask;
@property(nonatomic) __weak MSSharedStyle *sharedStyle;
- (id)foreignSharedStyles;
- (id)localSharedStyles;
- (void)updateSharedStyleToMatchSelf;
- (void)resetSharedStyle;
@property(readonly, nonatomic) BOOL isSharedStyleOutOfSync;
- (void)resetConstraints;
- (void)changeValueForKeysInBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL hasFixedEdges;
- (void)setFixed:(BOOL)arg1 forEdge:(unsigned long long)arg2;
@property(nonatomic) BOOL hasFixedHeight;
@property(nonatomic) BOOL hasFixedWidth;
@property(nonatomic) BOOL hasFixedBottom;
@property(nonatomic) BOOL hasFixedTop;
@property(nonatomic) BOOL hasFixedRight;
@property(nonatomic) BOOL hasFixedLeft;
- (BOOL)hasFixedEdge:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL canFixHeight;
@property(readonly, nonatomic) BOOL canFixWidth;
@property(readonly, nonatomic) BOOL canFixBottom;
@property(readonly, nonatomic) BOOL canFixTop;
@property(readonly, nonatomic) BOOL canFixRight;
@property(readonly, nonatomic) BOOL canFixLeft;
- (id)resizingConstraintKeys;
- (id)parentRootForAbsoluteRect;
- (void)replaceFonts:(id)arg1;
- (void)applyUserVisibleRotation:(double)arg1 explicitRotationCenter:(id)arg2;
- (void)applyRotation:(double)arg1 explicitRotationCenter:(id)arg2;
@property(readonly, nonatomic) double userVisibleRotation;
- (void)applyOverride:(id)arg1 toPoint:(id)arg2;
- (void)applyOverrides:(id)arg1;
- (id)overridePointsWithParent:(id)arg1;
@property(readonly, nonatomic) NSArray *overridePoints;
- (id)CSSAttributes;
- (id)CSSRotationString;
- (id)CSSAttributeString;
- (long long)layoutDirection;
- (id)setupWithLayerBuilderDictionary:(id)arg1;
- (void)configureBackgroundOfRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *objectID;
@property(readonly, nonatomic) MSPath *pathInBounds;
@property(readonly, nonatomic) double rotation;
@property(readonly) Class superclass;

@end

