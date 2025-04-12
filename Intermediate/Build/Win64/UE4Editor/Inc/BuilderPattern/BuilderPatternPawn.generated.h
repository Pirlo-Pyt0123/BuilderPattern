// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDERPATTERN_BuilderPatternPawn_generated_h
#error "BuilderPatternPawn.generated.h already included, missing '#pragma once' in BuilderPatternPawn.h"
#endif
#define BUILDERPATTERN_BuilderPatternPawn_generated_h

#define BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_SPARSE_DATA
#define BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_RPC_WRAPPERS
#define BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuilderPatternPawn(); \
	friend struct Z_Construct_UClass_ABuilderPatternPawn_Statics; \
public: \
	DECLARE_CLASS(ABuilderPatternPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuilderPattern"), NO_API) \
	DECLARE_SERIALIZER(ABuilderPatternPawn)


#define BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABuilderPatternPawn(); \
	friend struct Z_Construct_UClass_ABuilderPatternPawn_Statics; \
public: \
	DECLARE_CLASS(ABuilderPatternPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuilderPattern"), NO_API) \
	DECLARE_SERIALIZER(ABuilderPatternPawn)


#define BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuilderPatternPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuilderPatternPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuilderPatternPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuilderPatternPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuilderPatternPawn(ABuilderPatternPawn&&); \
	NO_API ABuilderPatternPawn(const ABuilderPatternPawn&); \
public:


#define BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuilderPatternPawn(ABuilderPatternPawn&&); \
	NO_API ABuilderPatternPawn(const ABuilderPatternPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuilderPatternPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuilderPatternPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuilderPatternPawn)


#define BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(ABuilderPatternPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ABuilderPatternPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABuilderPatternPawn, CameraBoom); }


#define BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_9_PROLOG
#define BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_SPARSE_DATA \
	BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_RPC_WRAPPERS \
	BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_INCLASS \
	BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_SPARSE_DATA \
	BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_INCLASS_NO_PURE_DECLS \
	BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDERPATTERN_API UClass* StaticClass<class ABuilderPatternPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuilderPattern_Source_BuilderPattern_BuilderPatternPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
