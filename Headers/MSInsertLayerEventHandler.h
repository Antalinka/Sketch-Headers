//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDragRectEventHandler.h"

@class MSLayer;

@interface MSInsertLayerEventHandler : MSDragRectEventHandler
{
    BOOL _shouldApplyDefaultStyle;
    MSLayer *_prototypeLayer;
    CDUnknownBlockType _completionBlock;
    MSLayer *_insertedLayer;
}

@property(retain, nonatomic) MSLayer *insertedLayer; // @synthesize insertedLayer=_insertedLayer;
@property(nonatomic) BOOL shouldApplyDefaultStyle; // @synthesize shouldApplyDefaultStyle=_shouldApplyDefaultStyle;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MSLayer *prototypeLayer; // @synthesize prototypeLayer=_prototypeLayer;
- (void).cxx_destruct;
- (BOOL)allowsSwitchToInsertAction;
- (void)resizeLayer:(id)arg1 toRect:(struct CGRect)arg2;
- (id)currentGroup;
- (void)insertNewLayerInCurrentGroup:(id)arg1;
- (id)insertAsNewLayer:(struct CGRect)arg1;
- (id)performActionWithRect:(struct CGRect)arg1 fromLayer:(id)arg2 constrainProportions:(BOOL)arg3;
- (void)drawRectPreview;
- (id)imageName;
- (void)handlerWillLoseFocus;
- (id)initWithManager:(id)arg1;

@end

