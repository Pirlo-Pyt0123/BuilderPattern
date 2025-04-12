// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderPattern/C_Armas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Armas() {}
// Cross Module References
	BUILDERPATTERN_API UClass* Z_Construct_UClass_AC_Armas_NoRegister();
	BUILDERPATTERN_API UClass* Z_Construct_UClass_AC_Armas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuilderPattern();
// End Cross Module References
	void AC_Armas::StaticRegisterNativesAC_Armas()
	{
	}
	UClass* Z_Construct_UClass_AC_Armas_NoRegister()
	{
		return AC_Armas::StaticClass();
	}
	struct Z_Construct_UClass_AC_Armas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_Armas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Armas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "C_Armas.h" },
		{ "ModuleRelativePath", "C_Armas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_Armas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Armas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_Armas_Statics::ClassParams = {
		&AC_Armas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AC_Armas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Armas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_Armas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_Armas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_Armas, 739721694);
	template<> BUILDERPATTERN_API UClass* StaticClass<AC_Armas>()
	{
		return AC_Armas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_Armas(Z_Construct_UClass_AC_Armas, &AC_Armas::StaticClass, TEXT("/Script/BuilderPattern"), TEXT("AC_Armas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Armas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
