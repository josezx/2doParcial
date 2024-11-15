// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/DonkeyKong_L02GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonkeyKong_L02GameMode() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_ADonkeyKong_L02GameMode_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_ADonkeyKong_L02GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AGameFacade_NoRegister();
// End Cross Module References
	void ADonkeyKong_L02GameMode::StaticRegisterNativesADonkeyKong_L02GameMode()
	{
	}
	UClass* Z_Construct_UClass_ADonkeyKong_L02GameMode_NoRegister()
	{
		return ADonkeyKong_L02GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerPawnClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameFacade_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameFacade;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DonkeyKong_L02GameMode.h" },
		{ "ModuleRelativePath", "DonkeyKong_L02GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::NewProp_PlayerPawnClass_MetaData[] = {
		{ "Category", "Player" },
		{ "Comment", "// Declarar la segunda compuerta\n// Nueva variable para almacenar la clase del Blueprint del personaje\n" },
		{ "ModuleRelativePath", "DonkeyKong_L02GameMode.h" },
		{ "ToolTip", "Declarar la segunda compuerta\nNueva variable para almacenar la clase del Blueprint del personaje" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::NewProp_PlayerPawnClass = { "PlayerPawnClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_L02GameMode, PlayerPawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::NewProp_PlayerPawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::NewProp_PlayerPawnClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::NewProp_GameFacade_MetaData[] = {
		{ "Comment", "// Instancia de la fachada\n" },
		{ "ModuleRelativePath", "DonkeyKong_L02GameMode.h" },
		{ "ToolTip", "Instancia de la fachada" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::NewProp_GameFacade = { "GameFacade", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_L02GameMode, GameFacade), Z_Construct_UClass_AGameFacade_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::NewProp_GameFacade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::NewProp_GameFacade_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::NewProp_PlayerPawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::NewProp_GameFacade,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADonkeyKong_L02GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::ClassParams = {
		&ADonkeyKong_L02GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADonkeyKong_L02GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADonkeyKong_L02GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADonkeyKong_L02GameMode, 727498270);
	template<> DONKEYKONG_L02_API UClass* StaticClass<ADonkeyKong_L02GameMode>()
	{
		return ADonkeyKong_L02GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADonkeyKong_L02GameMode(Z_Construct_UClass_ADonkeyKong_L02GameMode, &ADonkeyKong_L02GameMode::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("ADonkeyKong_L02GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADonkeyKong_L02GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
