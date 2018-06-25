//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTouchBarDelegate.h"

@class MSDocument, MSExportInspectorViewController, MSLayerArray, MSNormalInspector, MSPersistentAssetCollection, NSLayoutConstraint, NSString, NSView, NSViewController<MSInspectorChildController>;

@interface MSInspectorController : NSViewController <NSTouchBarDelegate>
{
    BOOL _alignmentBarHidden;
    BOOL _exportPanelHidden;
    NSViewController<MSInspectorChildController> *_currentController;
    MSDocument *_document;
    MSPersistentAssetCollection *_globalAssets;
    MSExportInspectorViewController *_bottomExporter;
    MSLayerArray *_selectedLayers;
    NSView *_alignmentView;
    NSView *_contentContainerView;
    NSView *_exportPanelContainerView;
    NSLayoutConstraint *_exportPanelHeightConstraint;
    MSNormalInspector *_normalInspector;
}

@property(retain, nonatomic) MSNormalInspector *normalInspector; // @synthesize normalInspector=_normalInspector;
@property(retain, nonatomic) NSLayoutConstraint *exportPanelHeightConstraint; // @synthesize exportPanelHeightConstraint=_exportPanelHeightConstraint;
@property(retain, nonatomic) NSView *exportPanelContainerView; // @synthesize exportPanelContainerView=_exportPanelContainerView;
@property(retain, nonatomic) NSView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) NSView *alignmentView; // @synthesize alignmentView=_alignmentView;
@property(retain, nonatomic) MSLayerArray *selectedLayers; // @synthesize selectedLayers=_selectedLayers;
@property(nonatomic) BOOL exportPanelHidden; // @synthesize exportPanelHidden=_exportPanelHidden;
@property(nonatomic) BOOL alignmentBarHidden; // @synthesize alignmentBarHidden=_alignmentBarHidden;
@property(retain, nonatomic) MSExportInspectorViewController *bottomExporter; // @synthesize bottomExporter=_bottomExporter;
@property(retain, nonatomic) MSPersistentAssetCollection *globalAssets; // @synthesize globalAssets=_globalAssets;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) NSViewController<MSInspectorChildController> *currentController; // @synthesize currentController=_currentController;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL sharedStyleInspectorVisible;
- (void)reloadTouchBars;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)closeAnyColorPopover;
- (void)adjustInspectorToColorPopover:(id)arg1 sender:(id)arg2;
- (void)openPopoverForStylePart:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id)inspectorController;
- (void)recursivelyDismissAllPresentedViewControllersOfViewController:(id)arg1;
- (void)viewWillDisappear;
- (void)showBorderOptionsAction:(id)arg1;
- (void)showFillOptionsAction:(id)arg1;
- (id)handlerManager;
- (void)focusOnTextFieldWithIdentifier:(id)arg1;
- (id)findFirstTextFieldInView:(id)arg1;
- (void)focusOnFirstTextField;
- (void)reload;
- (id)inspectorForLayers:(id)arg1 eventHandler:(id)arg2;
- (void)refreshCurrentController;
- (void)layoutContentView;
- (void)reloadSharedObjectsSection;
- (void)layerWithSharedStyleDidChange;
- (void)beginRenameSharedObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)changeTextLayerFont:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)layoutExportPanel;
- (void)prepareForDisplay;
- (void)currentHandlerChanged;
- (void)layerPositionPossiblyChanged;
- (void)selectionDidChangeTo:(id)arg1;
- (void)viewDidResize;
- (void)validateAlignmentButtons;
- (void)connectAlignmentButtons;
- (void)dealloc;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

