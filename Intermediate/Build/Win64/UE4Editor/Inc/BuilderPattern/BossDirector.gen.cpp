// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderPattern/BossDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossDirector() {}
// Cross Module References
	BUILDERPATTERN_API UClass* Z_Construct_UClass_ABossDirector_NoRegister();
	BUILDERPATTERN_API UClass* Z_Construct_UClass_ABossDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuilderPattern();
// End Cross Module References
	void ABossDirector::StaticRegisterNativesABossDirector()
	{
	}
	UClass* Z_Construct_UClass_ABossDirector_NoRegister()
	{
		return ABossDirector::StaticClass();
	}
	struct Z_Construct_UClass_ABossDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABossDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABossDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BossDirector.h" },
		{ "ModuleRelativePath", "BossDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABossDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABossDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABossDirector_Statics::ClassParams = {
		&ABossDirector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABossDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABossDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABossDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABossDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABossDirector, 3440403321);
	template<> BUILDERPATTERN_API UClass* StaticClass<ABossDirector>()
	{
		return ABossDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABossDirector(Z_Construct_UClass_ABossDirector, &ABossDirector::StaticClass, TEXT("/Script/BuilderPattern"), TEXT("ABossDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABossDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
