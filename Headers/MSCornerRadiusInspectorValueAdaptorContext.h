//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface MSCornerRadiusInspectorValueAdaptorContext : NSObject
{
    unsigned long long _mode;
    NSString *_componentString;
    NSString *_mathOperator;
    NSNumber *_value;
}

@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *mathOperator; // @synthesize mathOperator=_mathOperator;
@property(retain, nonatomic) NSString *componentString; // @synthesize componentString=_componentString;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)componentStringWithMathValueForModel:(id)arg1;

@end

