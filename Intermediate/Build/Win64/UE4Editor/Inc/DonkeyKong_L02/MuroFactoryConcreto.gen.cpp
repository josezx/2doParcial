// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/MuroFactoryConcreto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroFactoryConcreto() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroFactoryConcreto_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroFactoryConcreto();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroFactory();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void AMuroFactoryConcreto::StaticRegisterNativesAMuroFactoryConcreto()
	{
	}
	UClass* Z_Construct_UClass_AMuroFactoryConcreto_NoRegister()
	{
		return AMuroFactoryConcreto::StaticClass();
	}
	struct Z_Construct_UClass_AMuroFactoryConcreto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroFactoryConcreto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuroFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroFactoryConcreto_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MuroFactoryConcreto.h" },
		{ "ModuleRelativePath", "MuroFactoryConcreto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroFactoryConcreto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroFactoryConcreto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroFactoryConcreto_Statics::ClassParams = {
		&AMuroFactoryConcreto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroFactoryConcreto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroFactoryConcreto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroFactoryConcreto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroFactoryConcreto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroFactoryConcreto, 3953973800);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AMuroFactoryConcreto>()
	{
		return AMuroFactoryConcreto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroFactoryConcreto(Z_Construct_UClass_AMuroFactoryConcreto, &AMuroFactoryConcreto::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AMuroFactoryConcreto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroFactoryConcreto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
