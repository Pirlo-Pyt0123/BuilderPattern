// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef BUILDERPATTERN_BuilderPatternProjectile_generated_h
#error "BuilderPatternProjectile.generated.h already included, missing '#pragma once' in BuilderPatternProjectile.h"
#endif
#define BUILDERPATTERN_BuilderPatternProjectile_generated_h

#define BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_SPARSE_DATA
#define BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuilderPatternProjectile(); \
	friend struct Z_Construct_UClass_ABuilderPatternProjectile_Statics; \
public: \
	DECLARE_CLASS(ABuilderPatternProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuilderPattern"), NO_API) \
	DECLARE_SERIALIZER(ABuilderPatternProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABuilderPatternProjectile(); \
	friend struct Z_Construct_UClass_ABuilderPatternProjectile_Statics; \
public: \
	DECLARE_CLASS(ABuilderPatternProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuilderPattern"), NO_API) \
	DECLARE_SERIALIZER(ABuilderPatternProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuilderPatternProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuilderPatternProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuilderPatternProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuilderPatternProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuilderPatternProjectile(ABuilderPatternProjectile&&); \
	NO_API ABuilderPatternProjectile(const ABuilderPatternProjectile&); \
public:


#define BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuilderPatternProjectile(ABuilderPatternProjectile&&); \
	NO_API ABuilderPatternProjectile(const ABuilderPatternProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuilderPatternProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuilderPatternProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuilderPatternProjectile)


#define BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ABuilderPatternProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABuilderPatternProjectile, ProjectileMovement); }


#define BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_12_PROLOG
#define BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_SPARSE_DATA \
	BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_RPC_WRAPPERS \
	BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_INCLASS \
	BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_SPARSE_DATA \
	BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_INCLASS_NO_PURE_DECLS \
	BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDERPATTERN_API UClass* StaticClass<class ABuilderPatternProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuilderPattern_Source_BuilderPattern_BuilderPatternProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
