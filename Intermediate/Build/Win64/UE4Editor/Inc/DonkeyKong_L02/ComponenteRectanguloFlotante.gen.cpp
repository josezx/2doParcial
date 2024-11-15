// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/ComponenteRectanguloFlotante.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteRectanguloFlotante() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AComponenteRectanguloFlotante_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AComponenteRectanguloFlotante();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AComponenteRectanguloFlotante::StaticRegisterNativesAComponenteRectanguloFlotante()
	{
	}
	UClass* Z_Construct_UClass_AComponenteRectanguloFlotante_NoRegister()
	{
		return AComponenteRectanguloFlotante::StaticClass();
	}
	struct Z_Construct_UClass_AComponenteRectanguloFlotante_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RectanguloMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RectanguloMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComponenteRectanguloFlotante_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponenteRectanguloFlotante_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ComponenteRectanguloFlotante.h" },
		{ "ModuleRelativePath", "ComponenteRectanguloFlotante.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponenteRectanguloFlotante_Statics::NewProp_RectanguloMesh_MetaData[] = {
		{ "Category", "ComponenteRectanguloFlotante" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ComponenteRectanguloFlotante.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComponenteRectanguloFlotante_Statics::NewProp_RectanguloMesh = { "RectanguloMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComponenteRectanguloFlotante, RectanguloMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComponenteRectanguloFlotante_Statics::NewProp_RectanguloMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComponenteRectanguloFlotante_Statics::NewProp_RectanguloMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AComponenteRectanguloFlotante_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComponenteRectanguloFlotante_Statics::NewProp_RectanguloMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComponenteRectanguloFlotante_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComponenteRectanguloFlotante>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComponenteRectanguloFlotante_Statics::ClassParams = {
		&AComponenteRectanguloFlotante::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AComponenteRectanguloFlotante_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AComponenteRectanguloFlotante_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AComponenteRectanguloFlotante_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComponenteRectanguloFlotante_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComponenteRectanguloFlotante()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComponenteRectanguloFlotante_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComponenteRectanguloFlotante, 422804446);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AComponenteRectanguloFlotante>()
	{
		return AComponenteRectanguloFlotante::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComponenteRectanguloFlotante(Z_Construct_UClass_AComponenteRectanguloFlotante, &AComponenteRectanguloFlotante::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AComponenteRectanguloFlotante"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComponenteRectanguloFlotante);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
