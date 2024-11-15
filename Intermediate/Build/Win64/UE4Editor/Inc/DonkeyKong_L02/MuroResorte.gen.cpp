// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/MuroResorte.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroResorte() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroResorte_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroResorte();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void AMuroResorte::StaticRegisterNativesAMuroResorte()
	{
	}
	UClass* Z_Construct_UClass_AMuroResorte_NoRegister()
	{
		return AMuroResorte::StaticClass();
	}
	struct Z_Construct_UClass_AMuroResorte_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FuerzaImpulso_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FuerzaImpulso;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroResorte_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroResorte_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MuroResorte.h" },
		{ "ModuleRelativePath", "MuroResorte.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroResorte_Statics::NewProp_FuerzaImpulso_MetaData[] = {
		{ "Category", "Resorte" },
		{ "Comment", "// Fuerza con la que el resorte empuja al personaje\n" },
		{ "ModuleRelativePath", "MuroResorte.h" },
		{ "ToolTip", "Fuerza con la que el resorte empuja al personaje" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMuroResorte_Statics::NewProp_FuerzaImpulso = { "FuerzaImpulso", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroResorte, FuerzaImpulso), METADATA_PARAMS(Z_Construct_UClass_AMuroResorte_Statics::NewProp_FuerzaImpulso_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroResorte_Statics::NewProp_FuerzaImpulso_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuroResorte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroResorte_Statics::NewProp_FuerzaImpulso,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroResorte_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroResorte>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroResorte_Statics::ClassParams = {
		&AMuroResorte::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMuroResorte_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMuroResorte_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroResorte_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroResorte_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroResorte()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroResorte_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroResorte, 3498414636);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AMuroResorte>()
	{
		return AMuroResorte::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroResorte(Z_Construct_UClass_AMuroResorte, &AMuroResorte::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AMuroResorte"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroResorte);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
