// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/MuroFuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroFuego() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroFuego_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroFuego();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void AMuroFuego::StaticRegisterNativesAMuroFuego()
	{
	}
	UClass* Z_Construct_UClass_AMuroFuego_NoRegister()
	{
		return AMuroFuego::StaticClass();
	}
	struct Z_Construct_UClass_AMuroFuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dano_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Dano;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroFuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroFuego_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MuroFuego.h" },
		{ "ModuleRelativePath", "MuroFuego.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroFuego_Statics::NewProp_Dano_MetaData[] = {
		{ "Category", "Fuego" },
		{ "Comment", "// Da?o que el fuego le hace al personaje\n" },
		{ "ModuleRelativePath", "MuroFuego.h" },
		{ "ToolTip", "Da?o que el fuego le hace al personaje" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMuroFuego_Statics::NewProp_Dano = { "Dano", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroFuego, Dano), METADATA_PARAMS(Z_Construct_UClass_AMuroFuego_Statics::NewProp_Dano_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroFuego_Statics::NewProp_Dano_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuroFuego_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroFuego_Statics::NewProp_Dano,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroFuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroFuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroFuego_Statics::ClassParams = {
		&AMuroFuego::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMuroFuego_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMuroFuego_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroFuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroFuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroFuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroFuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroFuego, 1300114192);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AMuroFuego>()
	{
		return AMuroFuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroFuego(Z_Construct_UClass_AMuroFuego, &AMuroFuego::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AMuroFuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroFuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
