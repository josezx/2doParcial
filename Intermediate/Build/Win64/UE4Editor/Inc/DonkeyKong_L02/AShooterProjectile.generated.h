// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef DONKEYKONG_L02_AShooterProjectile_generated_h
#error "AShooterProjectile.generated.h already included, missing '#pragma once' in AShooterProjectile.h"
#endif
#define DONKEYKONG_L02_AShooterProjectile_generated_h

#define DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_SPARSE_DATA
#define DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAShooterProjectile(); \
	friend struct Z_Construct_UClass_AAShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AAShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_L02"), NO_API) \
	DECLARE_SERIALIZER(AAShooterProjectile)


#define DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAShooterProjectile(); \
	friend struct Z_Construct_UClass_AAShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AAShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_L02"), NO_API) \
	DECLARE_SERIALIZER(AAShooterProjectile)


#define DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAShooterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAShooterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAShooterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAShooterProjectile(AAShooterProjectile&&); \
	NO_API AAShooterProjectile(const AAShooterProjectile&); \
public:


#define DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAShooterProjectile(AAShooterProjectile&&); \
	NO_API AAShooterProjectile(const AAShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAShooterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAShooterProjectile)


#define DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AAShooterProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMaterial() { return STRUCT_OFFSET(AAShooterProjectile, ProjectileMaterial); }


#define DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_11_PROLOG
#define DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_SPARSE_DATA \
	DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_RPC_WRAPPERS \
	DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_INCLASS \
	DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_SPARSE_DATA \
	DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_INCLASS_NO_PURE_DECLS \
	DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_L02_API UClass* StaticClass<class AAShooterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DonkeyKong_L02parcial_Source_DonkeyKong_L02_AShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
