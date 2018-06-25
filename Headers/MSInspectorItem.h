//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MSInspectorValueAdaptorDelegate.h"
#import "MSUpDownTextFieldDelegate.h"

@class MSDocument, MSLayerArray, NSArrayController, NSString;

@interface MSInspectorItem : NSViewController <MSInspectorValueAdaptorDelegate, MSUpDownTextFieldDelegate>
{
    id <MSInspectorItemDelegate> _delegate;
    MSLayerArray *_layers;
    NSArrayController *_layersController;
}

+ (BOOL)canHandleSomeLayersOfSelection:(id)arg1;
+ (id)filterSelection:(id)arg1;
+ (id)itemForSection:(id)arg1;
@property(retain, nonatomic) NSArrayController *layersController; // @synthesize layersController=_layersController;
@property(retain, nonatomic) MSLayerArray *layers; // @synthesize layers=_layers;
@property(nonatomic) __weak id <MSInspectorItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) MSDocument *document;
- (void)updateDisplayedValues;
- (void)selectionDidChangeTo:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)inspectorValueAdaptorDidChangeValue:(id)arg1;
- (void)refreshAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

