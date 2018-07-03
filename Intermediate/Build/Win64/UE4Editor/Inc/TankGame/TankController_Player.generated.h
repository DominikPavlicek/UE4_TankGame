// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTankAimingComponent;
#ifdef TANKGAME_TankController_Player_generated_h
#error "TankController_Player.generated.h already included, missing '#pragma once' in TankController_Player.h"
#endif
#define TANKGAME_TankController_Player_generated_h

#define TankGame_Source_TankGame_TankController_Player_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerTankDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPlayerTankDeath(); \
		P_NATIVE_END; \
	}


#define TankGame_Source_TankGame_TankController_Player_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerTankDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPlayerTankDeath(); \
		P_NATIVE_END; \
	}


#define TankGame_Source_TankGame_TankController_Player_h_15_EVENT_PARMS \
	struct TankController_Player_eventFoundAimingComponent_Parms \
	{ \
		UTankAimingComponent* AimingComponentRefernce; \
	};


#define TankGame_Source_TankGame_TankController_Player_h_15_CALLBACK_WRAPPERS
#define TankGame_Source_TankGame_TankController_Player_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankController_Player(); \
	friend TANKGAME_API class UClass* Z_Construct_UClass_ATankController_Player(); \
public: \
	DECLARE_CLASS(ATankController_Player, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/TankGame"), NO_API) \
	DECLARE_SERIALIZER(ATankController_Player) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TankGame_Source_TankGame_TankController_Player_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATankController_Player(); \
	friend TANKGAME_API class UClass* Z_Construct_UClass_ATankController_Player(); \
public: \
	DECLARE_CLASS(ATankController_Player, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/TankGame"), NO_API) \
	DECLARE_SERIALIZER(ATankController_Player) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TankGame_Source_TankGame_TankController_Player_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankController_Player(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankController_Player) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankController_Player); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankController_Player); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankController_Player(ATankController_Player&&); \
	NO_API ATankController_Player(const ATankController_Player&); \
public:


#define TankGame_Source_TankGame_TankController_Player_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankController_Player(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankController_Player(ATankController_Player&&); \
	NO_API ATankController_Player(const ATankController_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankController_Player); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankController_Player); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankController_Player)


#define TankGame_Source_TankGame_TankController_Player_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Range() { return STRUCT_OFFSET(ATankController_Player, Range); } \
	FORCEINLINE static uint32 __PPO__CrosshairX() { return STRUCT_OFFSET(ATankController_Player, CrosshairX); } \
	FORCEINLINE static uint32 __PPO__CrosshairY() { return STRUCT_OFFSET(ATankController_Player, CrosshairY); }


#define TankGame_Source_TankGame_TankController_Player_h_12_PROLOG \
	TankGame_Source_TankGame_TankController_Player_h_15_EVENT_PARMS


#define TankGame_Source_TankGame_TankController_Player_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Source_TankGame_TankController_Player_h_15_PRIVATE_PROPERTY_OFFSET \
	TankGame_Source_TankGame_TankController_Player_h_15_RPC_WRAPPERS \
	TankGame_Source_TankGame_TankController_Player_h_15_CALLBACK_WRAPPERS \
	TankGame_Source_TankGame_TankController_Player_h_15_INCLASS \
	TankGame_Source_TankGame_TankController_Player_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGame_Source_TankGame_TankController_Player_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Source_TankGame_TankController_Player_h_15_PRIVATE_PROPERTY_OFFSET \
	TankGame_Source_TankGame_TankController_Player_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGame_Source_TankGame_TankController_Player_h_15_CALLBACK_WRAPPERS \
	TankGame_Source_TankGame_TankController_Player_h_15_INCLASS_NO_PURE_DECLS \
	TankGame_Source_TankGame_TankController_Player_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGame_Source_TankGame_TankController_Player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
