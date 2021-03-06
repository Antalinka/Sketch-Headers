//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSEventHandler.h"

#import "MSGestureRecognizerDelegate-Protocol.h"
#import "MSVectorCanvasDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSTextDelegate-Protocol.h"

@class MSEditShapeInspectorViewController, MSPathController, MSShapeEditingBehavior, MSVectorCanvas, NSArray, NSString;

@interface MSShapeEventHandler : MSEventHandler <MSVectorCanvasDelegate, NSTextDelegate, NSMenuDelegate, MSGestureRecognizerDelegate>
{
    unsigned long long _ignoreSelectionChangesCount;
    MSEditShapeInspectorViewController *_inspectorViewController;
    NSArray *_layers;
    MSVectorCanvas *_canvasHandler;
    MSPathController *_pathController;
    MSShapeEditingBehavior *_editingBehavior;
}

@property(retain, nonatomic) MSShapeEditingBehavior *editingBehavior; // @synthesize editingBehavior=_editingBehavior;
@property(readonly, nonatomic) MSPathController *pathController; // @synthesize pathController=_pathController;
@property(readonly, nonatomic) MSVectorCanvas *canvasHandler; // @synthesize canvasHandler=_canvasHandler;
@property(readonly, copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (void)vectorCanvasDidEditPoints:(id)arg1;
- (void)vectorCanvas:(id)arg1 didSelectLayers:(id)arg2;
- (void)vectorCanvasDidFinishInteractiveSelection:(id)arg1;
- (void)vectorCanvas:(id)arg1 didDeselectHandlesAtIndexPaths:(id)arg2;
- (void)vectorCanvas:(id)arg1 didSelectHandlesAtIndexPaths:(id)arg2;
- (void)vectorCanvas:(id)arg1 didUnhighlightHandleAtIndexPath:(id)arg2;
- (void)vectorCanvas:(id)arg1 didHighlightHandleAtIndexPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)performPathControllerUpdate:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL ignorePathController;
- (void)refreshCloseOrOpenPathUI;
- (void)pathDidOpenOrClose;
- (id)makeTouchBar;
- (BOOL)inspectorShouldShowPositions;
@property(readonly, nonatomic) MSEditShapeInspectorViewController *inspectorViewController; // @synthesize inspectorViewController=_inspectorViewController;
- (unsigned long long)inspectorLocation;
- (id)inspectorViewControllersForLayers:(id)arg1 standardControllers:(id)arg2;
- (id)toolbarIdentifier;
- (void)changeColor:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 context:(id)arg2;
- (void)didMoveThroughHistory:(id)arg1;
- (void)delete:(id)arg1;
- (long long)curveModeForPressedKey:(long long)arg1;
- (void)flagsChanged:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)duplicate:(id)arg1;
- (id)layersToCopy;
- (BOOL)updateCursor;
- (void)trackMouse:(id)arg1;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (id)parentGroupForInserting;
- (void)insertNewShapeForEditingAtPoint:(struct CGPoint)arg1;
- (BOOL)mouseDownEvent:(id)arg1;
- (struct CGRect)selectedRect;
- (void)zoomToSelection;
- (void)updateToolButton;
- (void)setAllowSelectionOnly:(BOOL)arg1;
- (void)toggleForceSelection:(id)arg1;
- (void)forceSelection:(id)arg1;
- (void)markLayer:(id)arg1 asEditing:(BOOL)arg2;
- (void)setLayers:(id)arg1;
- (void)resetWithOptions:(unsigned long long)arg1;
- (void)layerListSelectionDidChange:(id)arg1;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (void)dealloc;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

