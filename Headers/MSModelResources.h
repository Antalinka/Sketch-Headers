//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCFoundation/BCSingleton.h>

@class NSArray, NSBitmapImageRep, NSBundle;

@interface MSModelResources : BCSingleton
{
    NSBundle *_bundle;
    NSArray *_noiseImages;
    NSBitmapImageRep *_errorPattern;
}

@property(copy, nonatomic) NSBitmapImageRep *errorPattern; // @synthesize errorPattern=_errorPattern;
@property(copy, nonatomic) NSArray *noiseImages; // @synthesize noiseImages=_noiseImages;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (id)resourcesNeedingMigration;
- (id)loadNoiseImageWithIndex:(long long)arg1;
- (id)loadImageWithName:(id)arg1;
- (void)preloadResources;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForImageResource:(id)arg1;

@end

