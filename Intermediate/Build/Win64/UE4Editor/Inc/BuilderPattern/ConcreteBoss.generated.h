// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDERPATTERN_ConcreteBoss_generated_h
#error "ConcreteBoss.generated.h already included, missing '#pragma once' in ConcreteBoss.h"
#endif
#define BUILDERPATTERN_ConcreteBoss_generated_h

#define BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_SPARSE_DATA
#define BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_RPC_WRAPPERS
#define BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAConcreteBoss(); \
	friend struct Z_Construct_UClass_AConcreteBoss_Statics; \
public: \
	DECLARE_CLASS(AConcreteBoss, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuilderPattern"), NO_API) \
	DECLARE_SERIALIZER(AConcreteBoss) \
	virtual UObject* _getUObject() const override { return const_cast<AConcreteBoss*>(this); }


#define BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAConcreteBoss(); \
	friend struct Z_Construct_UClass_AConcreteBoss_Statics; \
public: \
	DECLARE_CLASS(AConcreteBoss, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuilderPattern"), NO_API) \
	DECLARE_SERIALIZER(AConcreteBoss) \
	virtual UObject* _getUObject() const override { return const_cast<AConcreteBoss*>(this); }


#define BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AConcreteBoss(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AConcreteBoss) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConcreteBoss); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConcreteBoss); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AConcreteBoss(AConcreteBoss&&); \
	NO_API AConcreteBoss(const AConcreteBoss&); \
public:


#define BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AConcreteBoss(AConcreteBoss&&); \
	NO_API AConcreteBoss(const AConcreteBoss&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConcreteBoss); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConcreteBoss); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AConcreteBoss)


#define BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BossActual() { return STRUCT_OFFSET(AConcreteBoss, BossActual); }


#define BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_11_PROLOG
#define BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_PRIVATE_PROPERTY_OFFSET \
	BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_SPARSE_DATA \
	BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_RPC_WRAPPERS \
	BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_INCLASS \
	BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_PRIVATE_PROPERTY_OFFSET \
	BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_SPARSE_DATA \
	BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_INCLASS_NO_PURE_DECLS \
	BuilderPattern_Source_BuilderPattern_ConcreteBoss_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDERPATTERN_API UClass* StaticClass<class AConcreteBoss>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuilderPattern_Source_BuilderPattern_ConcreteBoss_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
