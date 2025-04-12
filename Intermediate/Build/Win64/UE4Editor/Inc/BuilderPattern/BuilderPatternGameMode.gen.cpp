// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderPattern/BuilderPatternGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderPatternGameMode() {}
// Cross Module References
	BUILDERPATTERN_API UClass* Z_Construct_UClass_ABuilderPatternGameMode_NoRegister();
	BUILDERPATTERN_API UClass* Z_Construct_UClass_ABuilderPatternGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BuilderPattern();
// End Cross Module References
	void ABuilderPatternGameMode::StaticRegisterNativesABuilderPatternGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABuilderPatternGameMode_NoRegister()
	{
		return ABuilderPatternGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABuilderPatternGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilderPatternGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderPatternGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BuilderPatternGameMode.h" },
		{ "ModuleRelativePath", "BuilderPatternGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilderPatternGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilderPatternGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilderPatternGameMode_Statics::ClassParams = {
		&ABuilderPatternGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABuilderPatternGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderPatternGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilderPatternGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilderPatternGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilderPatternGameMode, 1205775838);
	template<> BUILDERPATTERN_API UClass* StaticClass<ABuilderPatternGameMode>()
	{
		return ABuilderPatternGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilderPatternGameMode(Z_Construct_UClass_ABuilderPatternGameMode, &ABuilderPatternGameMode::StaticClass, TEXT("/Script/BuilderPattern"), TEXT("ABuilderPatternGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilderPatternGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
