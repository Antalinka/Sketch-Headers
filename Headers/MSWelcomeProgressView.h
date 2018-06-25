//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class MSCloudShareCollectionItem, NSColor, NSProgressIndicator;

@interface MSWelcomeProgressView : NSView
{
    NSColor *_backgroundColor;
    MSCloudShareCollectionItem *_collectionItem;
    NSProgressIndicator *_progressIndicator;
}

@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) __weak MSCloudShareCollectionItem *collectionItem; // @synthesize collectionItem=_collectionItem;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

