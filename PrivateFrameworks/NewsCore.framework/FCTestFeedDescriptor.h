/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTestFeedDescriptor : FCSingleTagFeedDescriptor {
    BOOL  _disableFiltering;
    BOOL  _disableGroupMerging;
    BOOL  _enableSingletonGroups;
}

@property (nonatomic) BOOL disableFiltering;
@property (nonatomic) BOOL disableGroupMerging;
@property (nonatomic) BOOL enableSingletonGroups;

- (BOOL)disableFiltering;
- (BOOL)disableGroupMerging;
- (BOOL)enableSingletonGroups;
- (id)feedGroupEmitters;
- (id)initWithContext:(id)arg1 identifier:(id)arg2 tag:(id)arg3;
- (void)setDisableFiltering:(BOOL)arg1;
- (void)setDisableGroupMerging:(BOOL)arg1;
- (void)setEnableSingletonGroups:(BOOL)arg1;

@end
