//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MSRotationGestureInterpreter : NSObject
{
    double _rotation;
    double _rotationOffset;
    NSArray *_initialRotations;
    struct CGPoint _centerPoint;
}

@property(copy, nonatomic) NSArray *initialRotations; // @synthesize initialRotations=_initialRotations;
@property(nonatomic) struct CGPoint centerPoint; // @synthesize centerPoint=_centerPoint;
- (void).cxx_destruct;
- (double)convertRotation:(double)arg1 toLayer:(id)arg2;
- (double)angleOfPoint:(struct CGPoint)arg1 inLayer:(id)arg2;
- (double)rotationInDegreesInLayer:(id)arg1;
- (double)rotationInLayer:(id)arg1;
- (void)updateWithLocation:(struct CGPoint)arg1;
- (void)updateWithDragRecognizer:(id)arg1;

@end

