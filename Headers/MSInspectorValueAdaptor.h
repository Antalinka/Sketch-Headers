//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSArrayController, NSNumberFormatter, NSString, NSView;

@interface MSInspectorValueAdaptor : NSObject
{
    BOOL _clampsValues;
    BOOL _adjustIndividually;
    BOOL _showsDefaultAlerts;
    id <MSInspectorValueAdaptorDelegate> _delegate;
    NSNumberFormatter *_numberFormatter;
    CDUnknownBlockType _valueGetter;
    CDUnknownBlockType _valueSetter;
    NSArrayController *_modelsController;
    NSView *_view;
    NSArray *_keyPathsToWatch;
}

@property(retain, nonatomic) NSArray *keyPathsToWatch; // @synthesize keyPathsToWatch=_keyPathsToWatch;
@property(nonatomic) __weak NSView *view; // @synthesize view=_view;
@property(nonatomic) BOOL showsDefaultAlerts; // @synthesize showsDefaultAlerts=_showsDefaultAlerts;
@property(nonatomic) BOOL adjustIndividually; // @synthesize adjustIndividually=_adjustIndividually;
@property(nonatomic) BOOL clampsValues; // @synthesize clampsValues=_clampsValues;
@property(retain, nonatomic) NSArrayController *modelsController; // @synthesize modelsController=_modelsController;
@property(copy, nonatomic) CDUnknownBlockType valueSetter; // @synthesize valueSetter=_valueSetter;
@property(copy, nonatomic) CDUnknownBlockType valueGetter; // @synthesize valueGetter=_valueGetter;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) __weak id <MSInspectorValueAdaptorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleInvalidInputError:(id)arg1;
- (void)presentError:(id)arg1;
- (id)checkAndAdjustValues:(id)arg1 contexts:(id)arg2 withNumberFormatter:(id)arg3 error:(id *)arg4;
- (id)transformValueString:(id)arg1 forModel:(id)arg2 context:(id *)arg3 error:(id *)arg4;
- (unsigned long long)currentAdjustOptions;
- (id)transformedValuesFromString:(id)arg1 contexts:(id *)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSString *value;
@property(readonly, nonatomic) BOOL allowsFloat;
@property(readonly, nonatomic) NSNumberFormatter *actualNumberFormatter;
- (void)valuesDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithModelsController:(id)arg1 valueGetter:(CDUnknownBlockType)arg2 valueSetter:(CDUnknownBlockType)arg3 modelKeyPathsToWatch:(id)arg4;
- (id)initWithModelsController:(id)arg1 valueGetter:(CDUnknownBlockType)arg2 valueSetter:(CDUnknownBlockType)arg3;
- (id)initWithModelsController:(id)arg1 modelKeyPath:(id)arg2;

@end

