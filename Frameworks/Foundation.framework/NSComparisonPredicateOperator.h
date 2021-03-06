/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSComparisonPredicateOperator : NSPredicateOperator {
    unsigned int  _options;
    unsigned int  _variant;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 variant:(unsigned int)arg3;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 variant:(unsigned int)arg3 options:(unsigned int)arg4;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)options;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)predicateFormat;
- (unsigned int)variant;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (id)minimalFormInContext:(id)arg1 ofPredicate:(id)arg2;

@end
