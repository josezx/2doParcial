// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/componenteRectangulo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecomponenteRectangulo() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AcomponenteRectangulo_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AcomponenteRectangulo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AcomponenteRectangulo::StaticRegisterNativesAcomponenteRectangulo()
	{
	}
	UClass* Z_Construct_UClass_AcomponenteRectangulo_NoRegister()
	{
		return AcomponenteRectangulo::StaticClass();
	}
	struct Z_Construct_UClass_AcomponenteRectangulo_Statics
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
	UObject* (*const Z_Construct_UClass_AcomponenteRectangulo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcomponenteRectangulo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "componenteRectangulo.h" },
		{ "ModuleRelativePath", "componenteRectangulo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcomponenteRectangulo_Statics::NewProp_RectanguloMesh_MetaData[] = {
		{ "Category", "componenteRectangulo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "componenteRectangulo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcomponenteRectangulo_Statics::NewProp_RectanguloMesh = { "RectanguloMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcomponenteRectangulo, RectanguloMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcomponenteRectangulo_Statics::NewProp_RectanguloMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcomponenteRectangulo_Statics::NewProp_RectanguloMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AcomponenteRectangulo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcomponenteRectangulo_Statics::NewProp_RectanguloMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AcomponenteRectangulo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AcomponenteRectangulo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AcomponenteRectangulo_Statics::ClassParams = {
		&AcomponenteRectangulo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AcomponenteRectangulo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AcomponenteRectangulo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AcomponenteRectangulo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AcomponenteRectangulo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AcomponenteRectangulo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AcomponenteRectangulo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AcomponenteRectangulo, 3279782148);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AcomponenteRectangulo>()
	{
		return AcomponenteRectangulo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AcomponenteRectangulo(Z_Construct_UClass_AcomponenteRectangulo, &AcomponenteRectangulo::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AcomponenteRectangulo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcomponenteRectangulo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
