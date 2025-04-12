// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderPattern/BuildBoss.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildBoss() {}
// Cross Module References
	BUILDERPATTERN_API UClass* Z_Construct_UClass_UBuildBoss_NoRegister();
	BUILDERPATTERN_API UClass* Z_Construct_UClass_UBuildBoss();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BuilderPattern();
// End Cross Module References
	void UBuildBoss::StaticRegisterNativesUBuildBoss()
	{
	}
	UClass* Z_Construct_UClass_UBuildBoss_NoRegister()
	{
		return UBuildBoss::StaticClass();
	}
	struct Z_Construct_UClass_UBuildBoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuildBoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildBoss_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BuildBoss.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuildBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBuildBoss>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBuildBoss_Statics::ClassParams = {
		&UBuildBoss::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBuildBoss_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildBoss_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuildBoss()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBuildBoss_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuildBoss, 3449758540);
	template<> BUILDERPATTERN_API UClass* StaticClass<UBuildBoss>()
	{
		return UBuildBoss::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuildBoss(Z_Construct_UClass_UBuildBoss, &UBuildBoss::StaticClass, TEXT("/Script/BuilderPattern"), TEXT("UBuildBoss"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildBoss);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
