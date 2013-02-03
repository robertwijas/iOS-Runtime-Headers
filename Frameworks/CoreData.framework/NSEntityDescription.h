/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSEntityDescription, NSMutableDictionary, NSString, NSData, NSManagedObjectModel;

@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration> {
    struct __entityDescriptionFlags { 
        unsigned int _isAbstract : 1; 
        unsigned int _shouldValidateOnSave : 1; 
        unsigned int _isImmutable : 1; 
        unsigned int _isFlattened : 1; 
        unsigned int _skipValidation : 1; 
        unsigned int _hasPropertiesIndexedBySpotlight : 1; 
        unsigned int _hasPropertiesStoredInTruthFile : 1; 
        unsigned int _rangesAreInDataBlob : 1; 
        unsigned int _hasAttributesWithExternalDataReferences : 1; 
        unsigned int _reservedEntityDescription : 23; 
    int _cd_rc;
    NSString *_classNameForEntity;
    } _entityDescriptionFlags;
    void *_extraIvars;
    id _flattenedSubentities;
    Class _instanceClass;
    id **_kvcPropertyAccessors;
    NSManagedObjectModel *_model;
    long _modelsReferenceIDForEntity;
    NSString *_name;
    NSMutableDictionary *_properties;
    id _propertyMapping;
    struct _NSRange { unsigned int x1; unsigned int x2; } *_propertyRanges;
    id _reserved1;
    NSEntityDescription *_rootentity;
    NSMutableDictionary *_subentities;
    NSEntityDescription *_superentity;
    NSMutableDictionary *_userInfo;
    NSData *_versionHash;
    NSString *_versionHashModifier;
}

+ (id)_MOClassName;
+ (id)entityForName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)initialize;
+ (id)insertNewObjectForEntityForName:(id)arg1 inManagedObjectContext:(id)arg2;

- (void)_addProperty:(id)arg1;
- (void)_addSubentity:(id)arg1;
- (id)_allPropertyNames;
- (id)_attributeNamed:(id)arg1;
- (struct __CFSet { }*)_collectSubentities;
- (void)_createCachesAndOptimizeState;
- (Class)_entityClass;
- (void)_flattenProperties;
- (BOOL)_hasAttributesWithExternalDataReferences;
- (BOOL)_hasPropertiesIndexedBySpotlight;
- (BOOL)_hasPropertiesStoredInTruthFile;
- (id)_initWithName:(id)arg1;
- (BOOL)_isEditable;
- (BOOL)_isFlattened;
- (BOOL)_isInheritedPropertyNamed:(id)arg1;
- (void*)_leopardStyleAttributesByName;
- (void*)_leopardStyleRelationshipsByName;
- (id)_localRelationshipNamed:(id)arg1;
- (long)_modelsReferenceID;
- (id)_newDictionaryContainingPropertiesOfType:(unsigned int)arg1;
- (id)_newMappingForPropertiesOfRange:(unsigned int)arg1;
- (id)_new_implicitlyObservedKeys;
- (unsigned long)_offsetRelationshipIndex:(unsigned long)arg1 fromSuperEntity:(id)arg2 andIsToMany:(BOOL)arg3;
- (id)_propertiesOfType:(unsigned int)arg1;
- (id)_propertyNamed:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; }*)_propertyRangesByType;
- (id)_propertySearchMapping;
- (id)_relationshipNamed:(id)arg1;
- (id)_relationshipNamesByType:(BOOL)arg1;
- (void)_removeProperty:(id)arg1;
- (void)_removePropertyNamed:(id)arg1;
- (void)_removeSubentity:(id)arg1;
- (void)_restoreValidation;
- (id)_rootEntity;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_setIsFlattened:(BOOL)arg1;
- (void)_setManagedObjectModel:(id)arg1;
- (void)_setModelsReferenceID:(long)arg1;
- (void)_setSuperentity:(id)arg1;
- (BOOL)_skipValidation;
- (id)_sortedSubentities;
- (void)_stripForMigration;
- (BOOL)_subentitiesIncludes:(id)arg1;
- (id)_subentityNamed:(id)arg1;
- (void)_throwIfNotEditable;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;
- (id)attributeKeys;
- (id)attributesByName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)description;
- (id)elementID;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)inverseForRelationshipKey:(id)arg1;
- (BOOL)isAbstract;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKindOfEntity:(id)arg1;
- (id)knownKeysMappingStrategy;
- (id)managedObjectClassName;
- (id)managedObjectModel;
- (id)name;
- (id)properties;
- (id)propertiesByName;
- (id)relationshipsByName;
- (id)relationshipsWithDestinationEntity:(id)arg1;
- (void)release;
- (id)renamingIdentifier;
- (id)retain;
- (unsigned int)retainCount;
- (void)setAbstract:(BOOL)arg1;
- (void)setElementID:(id)arg1;
- (void)setManagedObjectClassName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setRenamingIdentifier:(id)arg1;
- (void)setSubentities:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVersionHashModifier:(id)arg1;
- (id)subentities;
- (id)subentitiesByName;
- (id)superentity;
- (id)toManyRelationshipKeys;
- (id)toOneRelationshipKeys;
- (id)userInfo;
- (id)versionHash;
- (id)versionHashModifier;

@end