//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseBlurInspectorItem.h"

@class NSButton;

@interface MSZoomBlurInspectorItem : MSBaseBlurInspectorItem
{
    NSButton *_editOriginButton;
}

@property(retain, nonatomic) NSButton *editOriginButton; // @synthesize editOriginButton=_editOriginButton;
- (void).cxx_destruct;
- (void)editZoomCenter:(id)arg1;
- (void)updateDisplayedValues;
- (void)handlerFocusDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

