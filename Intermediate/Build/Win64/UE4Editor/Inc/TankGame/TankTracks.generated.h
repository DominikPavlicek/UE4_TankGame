// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TANKGAME_TankTracks_generated_h
#error "TankTracks.generated.h already included, missing '#pragma once' in TankTracks.h"
#endif
#define TANKGAME_TankTracks_generated_h

#define TankGame_Source_TankGame_TankTracks_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTracks) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTracks(Z_Param_Speed); \
		P_NATIVE_END; \
	}


#define TankGame_Source_TankGame_TankTracks_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTracks) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTracks(Z_Param_Speed); \
		P_NATIVE_END; \
	}


#define TankGame_Source_TankGame_TankTracks_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankTracks(); \
	friend TANKGAME_API class UClass* Z_Construct_UClass_UTankTracks(); \
public: \
	DECLARE_CLASS(UTankTracks, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TankGame"), NO_API) \
	DECLARE_SERIALIZER(UTankTracks) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TankGame_Source_TankGame_TankTracks_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTankTracks(); \
	friend TANKGAME_API class UClass* Z_Construct_UClass_UTankTracks(); \
public: \
	DECLARE_CLASS(UTankTracks, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TankGame"), NO_API) \
	DECLARE_SERIALIZER(UTankTracks) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TankGame_Source_TankGame_TankTracks_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankTracks(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankTracks) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankTracks); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankTracks); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankTracks(UTankTracks&&); \
	NO_API UTankTracks(const UTankTracks&); \
public:


#define TankGame_Source_TankGame_TankTracks_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankTracks(UTankTracks&&); \
	NO_API UTankTracks(const UTankTracks&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankTracks); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankTracks); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTankTracks)


#define TankGame_Source_TankGame_TankTracks_h_15_PRIVATE_PROPERTY_OFFSET
#define TankGame_Source_TankGame_TankTracks_h_12_PROLOG
#define TankGame_Source_TankGame_TankTracks_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Source_TankGame_TankTracks_h_15_PRIVATE_PROPERTY_OFFSET \
	TankGame_Source_TankGame_TankTracks_h_15_RPC_WRAPPERS \
	TankGame_Source_TankGame_TankTracks_h_15_INCLASS \
	TankGame_Source_TankGame_TankTracks_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGame_Source_TankGame_TankTracks_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Source_TankGame_TankTracks_h_15_PRIVATE_PROPERTY_OFFSET \
	TankGame_Source_TankGame_TankTracks_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGame_Source_TankGame_TankTracks_h_15_INCLASS_NO_PURE_DECLS \
	TankGame_Source_TankGame_TankTracks_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGame_Source_TankGame_TankTracks_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
