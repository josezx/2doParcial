// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/MuroLadrillos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroLadrillos() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroLadrillos_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroLadrillos();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void AMuroLadrillos::StaticRegisterNativesAMuroLadrillos()
	{
	}
	UClass* Z_Construct_UClass_AMuroLadrillos_NoRegister()
	{
		return AMuroLadrillos::StaticClass();
	}
	struct Z_Construct_UClass_AMuroLadrillos_Statics
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
	UObject* (*const Z_Construct_UClass_AMuroLadrillos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroLadrillos_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MuroLadrillos.h" },
		{ "ModuleRelativePath", "MuroLadrillos.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroLadrillos_Statics::NewProp_Dano_MetaData[] = {
		{ "Category", "Ladrillos" },
		{ "Comment", "// Da?o m?nimo\n" },
		{ "ModuleRelativePath", "MuroLadrillos.h" },
		{ "ToolTip", "Da?o m?nimo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMuroLadrillos_Statics::NewProp_Dano = { "Dano", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroLadrillos, Dano), METADATA_PARAMS(Z_Construct_UClass_AMuroLadrillos_Statics::NewProp_Dano_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroLadrillos_Statics::NewProp_Dano_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuroLadrillos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroLadrillos_Statics::NewProp_Dano,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroLadrillos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroLadrillos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroLadrillos_Statics::ClassParams = {
		&AMuroLadrillos::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMuroLadrillos_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMuroLadrillos_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroLadrillos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroLadrillos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroLadrillos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroLadrillos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroLadrillos, 2223649942);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AMuroLadrillos>()
	{
		return AMuroLadrillos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroLadrillos(Z_Construct_UClass_AMuroLadrillos, &AMuroLadrillos::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AMuroLadrillos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroLadrillos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
