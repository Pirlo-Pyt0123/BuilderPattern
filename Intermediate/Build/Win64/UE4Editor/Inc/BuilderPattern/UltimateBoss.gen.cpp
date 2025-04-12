// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderPattern/UltimateBoss.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUltimateBoss() {}
// Cross Module References
	BUILDERPATTERN_API UClass* Z_Construct_UClass_AUltimateBoss_NoRegister();
	BUILDERPATTERN_API UClass* Z_Construct_UClass_AUltimateBoss();
	BUILDERPATTERN_API UClass* Z_Construct_UClass_AEnemy();
	UPackage* Z_Construct_UPackage__Script_BuilderPattern();
// End Cross Module References
	void AUltimateBoss::StaticRegisterNativesAUltimateBoss()
	{
	}
	UClass* Z_Construct_UClass_AUltimateBoss_NoRegister()
	{
		return AUltimateBoss::StaticClass();
	}
	struct Z_Construct_UClass_AUltimateBoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUltimateBoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUltimateBoss_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UltimateBoss.h" },
		{ "ModuleRelativePath", "UltimateBoss.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUltimateBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUltimateBoss>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUltimateBoss_Statics::ClassParams = {
		&AUltimateBoss::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUltimateBoss_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUltimateBoss_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUltimateBoss()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUltimateBoss_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUltimateBoss, 868226940);
	template<> BUILDERPATTERN_API UClass* StaticClass<AUltimateBoss>()
	{
		return AUltimateBoss::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUltimateBoss(Z_Construct_UClass_AUltimateBoss, &AUltimateBoss::StaticClass, TEXT("/Script/BuilderPattern"), TEXT("AUltimateBoss"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUltimateBoss);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
