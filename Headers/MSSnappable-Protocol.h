//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSLayer, MSLayoutAnchor, MSLayoutPosition, NSArray, NSString;

@protocol MSSnappable <NSObject>
@property(readonly, nonatomic) NSString *name;
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
@property(readonly, nonatomic) MSLayer *coordinateSpace;
@property(readonly, nonatomic) struct CGRect rectForSnapping;
- (struct CGAffineTransform)textCorrectionTransform;
- (void)concatAncestorsAndSelfTransforms;
- (void)refreshOverlayWithAbsoluteMargins:(struct CGSize)arg1;
- (struct CGRect)distanceRectangleToItem:(id <MSSnappable>)arg1 axis:(unsigned long long)arg2;
- (struct CGRect)alignmentRectInLayer:(MSLayer *)arg1 options:(unsigned long long)arg2;
- (struct CGRect)boundsRect;
@end

