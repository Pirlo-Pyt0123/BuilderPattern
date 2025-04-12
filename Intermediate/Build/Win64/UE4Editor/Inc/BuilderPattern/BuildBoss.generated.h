// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDERPATTERN_BuildBoss_generated_h
#error "BuildBoss.generated.h already included, missing '#pragma once' in BuildBoss.h"
#endif
#define BUILDERPATTERN_BuildBoss_generated_h

#define BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_SPARSE_DATA
#define BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_RPC_WRAPPERS
#define BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BUILDERPATTERN_API UBuildBoss(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildBoss) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BUILDERPATTERN_API, UBuildBoss); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildBoss); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BUILDERPATTERN_API UBuildBoss(UBuildBoss&&); \
	BUILDERPATTERN_API UBuildBoss(const UBuildBoss&); \
public:


#define BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BUILDERPATTERN_API UBuildBoss(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BUILDERPATTERN_API UBuildBoss(UBuildBoss&&); \
	BUILDERPATTERN_API UBuildBoss(const UBuildBoss&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BUILDERPATTERN_API, UBuildBoss); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildBoss); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildBoss)


#define BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBuildBoss(); \
	friend struct Z_Construct_UClass_UBuildBoss_Statics; \
public: \
	DECLARE_CLASS(UBuildBoss, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BuilderPattern"), BUILDERPATTERN_API) \
	DECLARE_SERIALIZER(UBuildBoss)


#define BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_GENERATED_UINTERFACE_BODY() \
	BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_GENERATED_UINTERFACE_BODY() \
	BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBuildBoss() {} \
public: \
	typedef UBuildBoss UClassType; \
	typedef IBuildBoss ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IBuildBoss() {} \
public: \
	typedef UBuildBoss UClassType; \
	typedef IBuildBoss ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BuilderPattern_Source_BuilderPattern_BuildBoss_h_10_PROLOG
#define BuilderPattern_Source_BuilderPattern_BuildBoss_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_SPARSE_DATA \
	BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_RPC_WRAPPERS \
	BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuilderPattern_Source_BuilderPattern_BuildBoss_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_SPARSE_DATA \
	BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BuilderPattern_Source_BuilderPattern_BuildBoss_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDERPATTERN_API UClass* StaticClass<class UBuildBoss>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuilderPattern_Source_BuilderPattern_BuildBoss_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
