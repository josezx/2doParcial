// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/MuroPegajoso.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroPegajoso() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroPegajoso_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroPegajoso();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void AMuroPegajoso::StaticRegisterNativesAMuroPegajoso()
	{
	}
	UClass* Z_Construct_UClass_AMuroPegajoso_NoRegister()
	{
		return AMuroPegajoso::StaticClass();
	}
	struct Z_Construct_UClass_AMuroPegajoso_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DuracionEfecto_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DuracionEfecto;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactorRalentizacion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FactorRalentizacion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dano_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Dano;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroPegajoso_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroPegajoso_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MuroPegajoso.h" },
		{ "ModuleRelativePath", "MuroPegajoso.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_DuracionEfecto_MetaData[] = {
		{ "Category", "Pegajoso" },
		{ "Comment", "// Duraci?n del efecto de ralentizaci?n\n" },
		{ "ModuleRelativePath", "MuroPegajoso.h" },
		{ "ToolTip", "Duraci?n del efecto de ralentizaci?n" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_DuracionEfecto = { "DuracionEfecto", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroPegajoso, DuracionEfecto), METADATA_PARAMS(Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_DuracionEfecto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_DuracionEfecto_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_FactorRalentizacion_MetaData[] = {
		{ "Category", "Pegajoso" },
		{ "Comment", "// Factor de ralentizaci?n (0.7 = 70% de la velocidad normal)\n" },
		{ "ModuleRelativePath", "MuroPegajoso.h" },
		{ "ToolTip", "Factor de ralentizaci?n (0.7 = 70% de la velocidad normal)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_FactorRalentizacion = { "FactorRalentizacion", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroPegajoso, FactorRalentizacion), METADATA_PARAMS(Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_FactorRalentizacion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_FactorRalentizacion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_Dano_MetaData[] = {
		{ "Category", "Pegajoso" },
		{ "Comment", "// Da?o m?nimo\n" },
		{ "ModuleRelativePath", "MuroPegajoso.h" },
		{ "ToolTip", "Da?o m?nimo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_Dano = { "Dano", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroPegajoso, Dano), METADATA_PARAMS(Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_Dano_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_Dano_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuroPegajoso_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_DuracionEfecto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_FactorRalentizacion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroPegajoso_Statics::NewProp_Dano,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroPegajoso_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroPegajoso>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroPegajoso_Statics::ClassParams = {
		&AMuroPegajoso::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMuroPegajoso_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMuroPegajoso_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroPegajoso_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroPegajoso_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroPegajoso()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroPegajoso_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroPegajoso, 3832637683);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AMuroPegajoso>()
	{
		return AMuroPegajoso::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroPegajoso(Z_Construct_UClass_AMuroPegajoso, &AMuroPegajoso::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AMuroPegajoso"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroPegajoso);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
