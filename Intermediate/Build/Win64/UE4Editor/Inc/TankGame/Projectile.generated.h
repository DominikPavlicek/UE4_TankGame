// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef TANKGAME_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define TANKGAME_Projectile_generated_h

#define TankGame_Source_TankGame_Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCollisionMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetCollisionMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(); \
		P_NATIVE_END; \
	}


#define TankGame_Source_TankGame_Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCollisionMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetCollisionMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(); \
		P_NATIVE_END; \
	}


#define TankGame_Source_TankGame_Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend TANKGAME_API class UClass* Z_Construct_UClass_AProjectile(); \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TankGame"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TankGame_Source_TankGame_Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend TANKGAME_API class UClass* Z_Construct_UClass_AProjectile(); \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TankGame"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TankGame_Source_TankGame_Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define TankGame_Source_TankGame_Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define TankGame_Source_TankGame_Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__CollisionMesh() { return STRUCT_OFFSET(AProjectile, CollisionMesh); } \
	FORCEINLINE static uint32 __PPO__LaunchBlast() { return STRUCT_OFFSET(AProjectile, LaunchBlast); } \
	FORCEINLINE static uint32 __PPO__ImpactBlast() { return STRUCT_OFFSET(AProjectile, ImpactBlast); } \
	FORCEINLINE static uint32 __PPO__ImpactForce() { return STRUCT_OFFSET(AProjectile, ImpactForce); } \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(AProjectile, BaseDamage); }


#define TankGame_Source_TankGame_Projectile_h_12_PROLOG
#define TankGame_Source_TankGame_Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Source_TankGame_Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TankGame_Source_TankGame_Projectile_h_15_RPC_WRAPPERS \
	TankGame_Source_TankGame_Projectile_h_15_INCLASS \
	TankGame_Source_TankGame_Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGame_Source_TankGame_Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Source_TankGame_Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TankGame_Source_TankGame_Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGame_Source_TankGame_Projectile_h_15_INCLASS_NO_PURE_DECLS \
	TankGame_Source_TankGame_Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGame_Source_TankGame_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
