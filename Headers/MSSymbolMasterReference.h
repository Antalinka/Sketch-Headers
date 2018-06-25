//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSShareableObjectReference.h"

@class MSSymbolMaster, MSSymbolMasterReferenceDescriptor;

@interface MSSymbolMasterReference : MSShareableObjectReference
{
}

- (id)localLocationPath;
- (id)foreignObjectCollectionInDocument:(id)arg1;
- (unsigned long long)shareableObjectType;
- (id)sharedObjectID;
@property(readonly, nonatomic) MSSymbolMasterReferenceDescriptor *descriptor;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) MSSymbolMaster *symbolMaster;
- (id)addToDocument:(id)arg1 withAssetLibraryController:(id)arg2;

@end

