//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorValueAdaptor.h"

#import "MSIncrementDecrementDelegate-Protocol.h"

@interface MSMathInspectorValueAdaptor : MSInspectorValueAdaptor <MSIncrementDecrementDelegate>
{
    BOOL _forcePrefixMath;
    unsigned long long _operation;
}

@property(nonatomic) BOOL forcePrefixMath; // @synthesize forcePrefixMath=_forcePrefixMath;
@property(nonatomic) unsigned long long operation; // @synthesize operation=_operation;
- (void)forceRelativeMathForBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)currentAdjustOptions;
- (id)errorWithUnparsableString:(id)arg1;
- (id)valueFromPrefixStrippedString:(id)arg1 forModel:(id)arg2 originalString:(id)arg3 error:(id *)arg4;
- (id)transformValueString:(id)arg1 forModel:(id)arg2 context:(id *)arg3 error:(id *)arg4;
- (id)trimValueString:(id)arg1 getMathPrefix:(id *)arg2;
- (id)transformedValuesFromString:(id)arg1 contexts:(id *)arg2 error:(id *)arg3;
- (void)incrementBy:(double)arg1;

@end

