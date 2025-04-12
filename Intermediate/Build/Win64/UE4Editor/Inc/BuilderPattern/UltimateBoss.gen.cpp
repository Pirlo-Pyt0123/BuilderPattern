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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmaActual_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmaActual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscudoActual_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscudoActual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VidaBoss_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VidaBoss;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IA_Comportamiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IA_Comportamiento;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipoMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TipoMovimiento;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuntoArmaIzquierda_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PuntoArmaIzquierda;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuntoArmaDerecha_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PuntoArmaDerecha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuntoEscudoFrontal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PuntoEscudoFrontal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUltimateBoss_Statics::NewProp_ArmaActual_MetaData[] = {
		{ "Category", "Composici?n" },
		{ "Comment", "// Atributos configurables por el builder\n" },
		{ "ModuleRelativePath", "UltimateBoss.h" },
		{ "ToolTip", "Atributos configurables por el builder" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUltimateBoss_Statics::NewProp_ArmaActual = { "ArmaActual", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUltimateBoss, ArmaActual), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUltimateBoss_Statics::NewProp_ArmaActual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUltimateBoss_Statics::NewProp_ArmaActual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUltimateBoss_Statics::NewProp_EscudoActual_MetaData[] = {
		{ "Category", "Composici?n" },
		{ "ModuleRelativePath", "UltimateBoss.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUltimateBoss_Statics::NewProp_EscudoActual = { "EscudoActual", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUltimateBoss, EscudoActual), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUltimateBoss_Statics::NewProp_EscudoActual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUltimateBoss_Statics::NewProp_EscudoActual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUltimateBoss_Statics::NewProp_VidaBoss_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "UltimateBoss.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUltimateBoss_Statics::NewProp_VidaBoss = { "VidaBoss", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUltimateBoss, VidaBoss), METADATA_PARAMS(Z_Construct_UClass_AUltimateBoss_Statics::NewProp_VidaBoss_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUltimateBoss_Statics::NewProp_VidaBoss_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUltimateBoss_Statics::NewProp_IA_Comportamiento_MetaData[] = {
		{ "Category", "IA" },
		{ "ModuleRelativePath", "UltimateBoss.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AUltimateBoss_Statics::NewProp_IA_Comportamiento = { "IA_Comportamiento", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUltimateBoss, IA_Comportamiento), METADATA_PARAMS(Z_Construct_UClass_AUltimateBoss_Statics::NewProp_IA_Comportamiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUltimateBoss_Statics::NewProp_IA_Comportamiento_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUltimateBoss_Statics::NewProp_TipoMovimiento_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "UltimateBoss.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AUltimateBoss_Statics::NewProp_TipoMovimiento = { "TipoMovimiento", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUltimateBoss, TipoMovimiento), METADATA_PARAMS(Z_Construct_UClass_AUltimateBoss_Statics::NewProp_TipoMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUltimateBoss_Statics::NewProp_TipoMovimiento_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUltimateBoss_Statics::NewProp_PuntoArmaIzquierda_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// Puntos de montaje\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UltimateBoss.h" },
		{ "ToolTip", "Puntos de montaje" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUltimateBoss_Statics::NewProp_PuntoArmaIzquierda = { "PuntoArmaIzquierda", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUltimateBoss, PuntoArmaIzquierda), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUltimateBoss_Statics::NewProp_PuntoArmaIzquierda_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUltimateBoss_Statics::NewProp_PuntoArmaIzquierda_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUltimateBoss_Statics::NewProp_PuntoArmaDerecha_MetaData[] = {
		{ "Category", "Componentes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UltimateBoss.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUltimateBoss_Statics::NewProp_PuntoArmaDerecha = { "PuntoArmaDerecha", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUltimateBoss, PuntoArmaDerecha), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUltimateBoss_Statics::NewProp_PuntoArmaDerecha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUltimateBoss_Statics::NewProp_PuntoArmaDerecha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUltimateBoss_Statics::NewProp_PuntoEscudoFrontal_MetaData[] = {
		{ "Category", "Componentes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UltimateBoss.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUltimateBoss_Statics::NewProp_PuntoEscudoFrontal = { "PuntoEscudoFrontal", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUltimateBoss, PuntoEscudoFrontal), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUltimateBoss_Statics::NewProp_PuntoEscudoFrontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUltimateBoss_Statics::NewProp_PuntoEscudoFrontal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUltimateBoss_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUltimateBoss_Statics::NewProp_ArmaActual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUltimateBoss_Statics::NewProp_EscudoActual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUltimateBoss_Statics::NewProp_VidaBoss,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUltimateBoss_Statics::NewProp_IA_Comportamiento,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUltimateBoss_Statics::NewProp_TipoMovimiento,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUltimateBoss_Statics::NewProp_PuntoArmaIzquierda,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUltimateBoss_Statics::NewProp_PuntoArmaDerecha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUltimateBoss_Statics::NewProp_PuntoEscudoFrontal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUltimateBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUltimateBoss>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUltimateBoss_Statics::ClassParams = {
		&AUltimateBoss::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUltimateBoss_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUltimateBoss_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AUltimateBoss, 1086564797);
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
