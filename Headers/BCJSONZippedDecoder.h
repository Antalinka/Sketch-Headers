//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCFoundation/BCJSONDecoder.h>

@interface BCJSONZippedDecoder : BCJSONDecoder
{
    void *_zip;
}

@property(nonatomic) void *zip; // @synthesize zip=_zip;
- (id)decodeFileAtSubpath:(id)arg1 error:(id *)arg2;
- (id)rawDataAtSubpath:(id)arg1 error:(id *)arg2;
- (BOOL)containsFileAtSubpath:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

