/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIAccessibilityElement : NSObject {
    id _storage;
}

@property id accessibilityContainer;
@property id accessibilityDelegate;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } accessibilityFrame;
@property(retain) NSString * accessibilityHint;
@property(retain) NSString * accessibilityLabel;
@property unsigned long long accessibilityTraits;
@property(retain) NSString * accessibilityValue;
@property BOOL isAccessibilityElement;

+ (void)_initializeSafeCategory;

- (id)_accessibilityAutomaticIdentifier;
- (BOOL)_accessibilityProvidesOwnFrame;
- (void)_accessibilitySetValue:(id)arg1;
- (BOOL)_accessibilitySupportsActivateAction;
- (void)accessibilityActivate;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (id)accessibilityDelegate;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (void)delegateSpecificsForAttribute:(int)arg1 delegate:(id*)arg2 selector:(SEL*)arg3;
- (id)description;
- (BOOL)elementMatchesSubview:(id)arg1;
- (id)init;
- (id)initWithAccessibilityContainer:(id)arg1;
- (float)initialYOffset;
- (BOOL)representsSubview;
- (void)setAccessibilityContainer:(id)arg1;
- (void)setAccessibilityDelegate:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setDelegate:(id)arg1 forAttribute:(int)arg2 withSelector:(SEL)arg3;
- (void)setTableCellYOffset:(float)arg1;
- (void)setTableCellYOffset:(float)arg1;
- (void)storeSubviewData:(id)arg1;

@end