// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFiringState : uint8;
class UTankTurret;
class UTankBarrel;
#ifdef TANKGAME_TankAimingComponent_generated_h
#error "TankAimingComponent.generated.h already included, missing '#pragma once' in TankAimingComponent.h"
#endif
#define TANKGAME_TankAimingComponent_generated_h

#define TankGame_Source_TankGame_TankAimingComponent_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFiringState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EFiringState*)Z_Param__Result=P_THIS->GetFiringState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UTankTurret,Z_Param_TurretToSet); \
		P_GET_OBJECT(UTankBarrel,Z_Param_BarrelToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialise(Z_Param_TurretToSet,Z_Param_BarrelToSet); \
		P_NATIVE_END; \
	}


#define TankGame_Source_TankGame_TankAimingComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFiringState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EFiringState*)Z_Param__Result=P_THIS->GetFiringState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UTankTurret,Z_Param_TurretToSet); \
		P_GET_OBJECT(UTankBarrel,Z_Param_BarrelToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialise(Z_Param_TurretToSet,Z_Param_BarrelToSet); \
		P_NATIVE_END; \
	}


#define TankGame_Source_TankGame_TankAimingComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankAimingComponent(); \
	friend TANKGAME_API class UClass* Z_Construct_UClass_UTankAimingComponent(); \
public: \
	DECLARE_CLASS(UTankAimingComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TankGame"), NO_API) \
	DECLARE_SERIALIZER(UTankAimingComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TankGame_Source_TankGame_TankAimingComponent_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUTankAimingComponent(); \
	friend TANKGAME_API class UClass* Z_Construct_UClass_UTankAimingComponent(); \
public: \
	DECLARE_CLASS(UTankAimingComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TankGame"), NO_API) \
	DECLARE_SERIALIZER(UTankAimingComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TankGame_Source_TankGame_TankAimingComponent_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankAimingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankAimingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankAimingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankAimingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankAimingComponent(UTankAimingComponent&&); \
	NO_API UTankAimingComponent(const UTankAimingComponent&); \
public:


#define TankGame_Source_TankGame_TankAimingComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankAimingComponent(UTankAimingComponent&&); \
	NO_API UTankAimingComponent(const UTankAimingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankAimingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankAimingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTankAimingComponent)


#define TankGame_Source_TankGame_TankAimingComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FiringState() { return STRUCT_OFFSET(UTankAimingComponent, FiringState); } \
	FORCEINLINE static uint32 __PPO__ProjectileBlueprint() { return STRUCT_OFFSET(UTankAimingComponent, ProjectileBlueprint); } \
	FORCEINLINE static uint32 __PPO__LaunchSpeed() { return STRUCT_OFFSET(UTankAimingComponent, LaunchSpeed); } \
	FORCEINLINE static uint32 __PPO__ReloadTime() { return STRUCT_OFFSET(UTankAimingComponent, ReloadTime); } \
	FORCEINLINE static uint32 __PPO__Ammo() { return STRUCT_OFFSET(UTankAimingComponent, Ammo); }


#define TankGame_Source_TankGame_TankAimingComponent_h_26_PROLOG
#define TankGame_Source_TankGame_TankAimingComponent_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Source_TankGame_TankAimingComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	TankGame_Source_TankGame_TankAimingComponent_h_29_RPC_WRAPPERS \
	TankGame_Source_TankGame_TankAimingComponent_h_29_INCLASS \
	TankGame_Source_TankGame_TankAimingComponent_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGame_Source_TankGame_TankAimingComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Source_TankGame_TankAimingComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	TankGame_Source_TankGame_TankAimingComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGame_Source_TankGame_TankAimingComponent_h_29_INCLASS_NO_PURE_DECLS \
	TankGame_Source_TankGame_TankAimingComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGame_Source_TankGame_TankAimingComponent_h


#define FOREACH_ENUM_EFIRINGSTATE(op) \
	op(EFiringState::E_Reloading) \
	op(EFiringState::E_Aiming) \
	op(EFiringState::E_Ready) \
	op(EFiringState::E_NoAmmo) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
