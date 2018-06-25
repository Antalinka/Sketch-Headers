//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class MSMouseTracker, NSArray, NSTextField<MSUpDownProtocol>;

@interface MSTextLabelForUpDownField : NSTextField
{
    NSTextField<MSUpDownProtocol> *_upDownTextField;
    NSArray *_textFields;
    id _flagsMonitor;
    MSMouseTracker *_mouseTracker;
}

+ (id)resizeCursorForFlags:(unsigned long long)arg1;
@property(retain, nonatomic) MSMouseTracker *mouseTracker; // @synthesize mouseTracker=_mouseTracker;
@property(retain, nonatomic) id flagsMonitor; // @synthesize flagsMonitor=_flagsMonitor;
@property(copy, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property(nonatomic) __weak NSTextField<MSUpDownProtocol> *upDownTextField; // @synthesize upDownTextField=_upDownTextField;
- (void).cxx_destruct;
- (BOOL)canScrub;
- (BOOL)trackMouseDraggingWithDownEvent:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)mouseDown:(id)arg1;
- (id)textField;
- (void)cursorUpdate:(id)arg1;
- (void)updateCursor;
- (void)trackMouse:(id)arg1;
- (void)awakeFromNib;
- (void)setShouldTrackFlags:(BOOL)arg1;
- (void)dealloc;
- (BOOL)clickShouldDismissPopover:(id)arg1;

@end

