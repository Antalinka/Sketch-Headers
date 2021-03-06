//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSNormalBaseEventHandler.h"

@class MSNormalEventData, MSSnapper, NSArray, NSDictionary;

@interface MSNormalMultipleResizeEventHandler : MSNormalBaseEventHandler
{
    NSArray *_layers;
    long long _resizingCorner;
    MSSnapper *_layerSnapper;
    MSNormalEventData *_eventData;
    double _originalProportions;
    NSDictionary *_layerFramesBeforeResize;
    NSDictionary *_absoluteLayerFramesBeforeResize;
    struct CGPoint _midPoint;
    struct CGPoint _oppositePoint;
    struct CGRect _originalRect;
}

@property(nonatomic) struct CGPoint oppositePoint; // @synthesize oppositePoint=_oppositePoint;
@property(nonatomic) struct CGPoint midPoint; // @synthesize midPoint=_midPoint;
@property(retain, nonatomic) NSDictionary *absoluteLayerFramesBeforeResize; // @synthesize absoluteLayerFramesBeforeResize=_absoluteLayerFramesBeforeResize;
@property(retain, nonatomic) NSDictionary *layerFramesBeforeResize; // @synthesize layerFramesBeforeResize=_layerFramesBeforeResize;
@property(nonatomic) double originalProportions; // @synthesize originalProportions=_originalProportions;
@property(nonatomic) struct CGRect originalRect; // @synthesize originalRect=_originalRect;
@property(retain, nonatomic) MSNormalEventData *eventData; // @synthesize eventData=_eventData;
@property(retain, nonatomic) MSSnapper *layerSnapper; // @synthesize layerSnapper=_layerSnapper;
@property(nonatomic) long long resizingCorner; // @synthesize resizingCorner=_resizingCorner;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (long long)oppositeCorner;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (struct CGRect)placeRectInOppositeCorner:(struct CGRect)arg1;
- (struct CGRect)makeRectConform:(struct CGRect)arg1 toProportions:(BOOL)arg2;
- (unsigned long long)validSnapEdgesForResizingCorner;
- (struct CGRect)snapRect:(struct CGRect)arg1;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)calculateOppositePoint;
- (void)calculateMidPoint;
- (void)displayResizeCursor;
- (void)storeCurrentLayerFrame;
- (void)flattenSubpathsIfNecessary:(id)arg1;
- (void)flattenRotatedShapes;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;

@end

