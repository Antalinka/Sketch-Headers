//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableModelObject.h"

@class MSImmutableGraphicsContextSettings, MSImmutableStyleBlur, MSImmutableStyleBorderOptions, MSImmutableStyleColorControls, MSImmutableTextStyle, NSArray, NSString;

@interface _MSImmutableStyle : MSImmutableModelObject
{
    unsigned long long _endMarkerType;
    long long _miterLimit;
    NSString *_sharedObjectID;
    unsigned long long _startMarkerType;
    unsigned long long _windingRule;
    MSImmutableStyleBlur *_blur;
    MSImmutableStyleBorderOptions *_borderOptions;
    NSArray *_borders;
    MSImmutableStyleColorControls *_colorControls;
    MSImmutableGraphicsContextSettings *_contextSettings;
    NSArray *_fills;
    NSArray *_innerShadows;
    NSArray *_shadows;
    MSImmutableTextStyle *_textStyle;
}

+ (Class)mutableClass;
@property(retain, nonatomic) MSImmutableTextStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) NSArray *shadows; // @synthesize shadows=_shadows;
@property(retain, nonatomic) NSArray *innerShadows; // @synthesize innerShadows=_innerShadows;
@property(retain, nonatomic) NSArray *fills; // @synthesize fills=_fills;
@property(retain, nonatomic) MSImmutableGraphicsContextSettings *contextSettings; // @synthesize contextSettings=_contextSettings;
@property(retain, nonatomic) MSImmutableStyleColorControls *colorControls; // @synthesize colorControls=_colorControls;
@property(retain, nonatomic) NSArray *borders; // @synthesize borders=_borders;
@property(retain, nonatomic) MSImmutableStyleBorderOptions *borderOptions; // @synthesize borderOptions=_borderOptions;
@property(retain, nonatomic) MSImmutableStyleBlur *blur; // @synthesize blur=_blur;
@property(nonatomic) unsigned long long windingRule; // @synthesize windingRule=_windingRule;
@property(nonatomic) unsigned long long startMarkerType; // @synthesize startMarkerType=_startMarkerType;
@property(retain, nonatomic) NSString *sharedObjectID; // @synthesize sharedObjectID=_sharedObjectID;
@property(nonatomic) long long miterLimit; // @synthesize miterLimit=_miterLimit;
@property(nonatomic) unsigned long long endMarkerType; // @synthesize endMarkerType=_endMarkerType;
- (void).cxx_destruct;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)objectDidInit;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

