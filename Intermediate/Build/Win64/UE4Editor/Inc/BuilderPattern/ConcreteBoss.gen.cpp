// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuilderPattern/ConcreteBoss.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcreteBoss() {}
// Cross Module References
	BUILDERPATTERN_API UClass* Z_Construct_UClass_AConcreteBoss_NoRegister();
	BUILDERPATTERN_API UClass* Z_Construct_UClass_AConcreteBoss();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuilderPattern();
	BUILDERPATTERN_API UClass* Z_Construct_UClass_AUltimateBoss_NoRegister();
	BUILDERPATTERN_API UClass* Z_Construct_UClass_UBuildBoss_NoRegister();
// End Cross Module References
	void AConcreteBoss::StaticRegisterNativesAConcreteBoss()
	{
	}
	UClass* Z_Construct_UClass_AConcreteBoss_NoRegister()
	{
		return AConcreteBoss::StaticClass();
	}
	struct Z_Construct_UClass_AConcreteBoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BossActual_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BossActual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConcreteBoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuilderPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcreteBoss_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConcreteBoss.h" },
		{ "ModuleRelativePath", "ConcreteBoss.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcreteBoss_Statics::NewProp_BossActual_MetaData[] = {
		{ "ModuleRelativePath", "ConcreteBoss.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConcreteBoss_Statics::NewProp_BossActual = { "BossActual", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConcreteBoss, BossActual), Z_Construct_UClass_AUltimateBoss_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcreteBoss_Statics::NewProp_BossActual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcreteBoss_Statics::NewProp_BossActual_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConcreteBoss_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcreteBoss_Statics::NewProp_BossActual,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConcreteBoss_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuildBoss_NoRegister, (int32)VTABLE_OFFSET(AConcreteBoss, IBuildBoss), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConcreteBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConcreteBoss>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConcreteBoss_Statics::ClassParams = {
		&AConcreteBoss::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConcreteBoss_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConcreteBoss_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConcreteBoss_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConcreteBoss_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConcreteBoss()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConcreteBoss_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConcreteBoss, 1388485863);
	template<> BUILDERPATTERN_API UClass* StaticClass<AConcreteBoss>()
	{
		return AConcreteBoss::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConcreteBoss(Z_Construct_UClass_AConcreteBoss, &AConcreteBoss::StaticClass, TEXT("/Script/BuilderPattern"), TEXT("AConcreteBoss"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConcreteBoss);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
