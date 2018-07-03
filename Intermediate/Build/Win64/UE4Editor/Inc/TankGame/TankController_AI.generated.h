// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKGAME_TankController_AI_generated_h
#error "TankController_AI.generated.h already included, missing '#pragma once' in TankController_AI.h"
#endif
#define TANKGAME_TankController_AI_generated_h

#define TankGame_Source_TankGame_TankController_AI_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAITankDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAITankDeath(); \
		P_NATIVE_END; \
	}


#define TankGame_Source_TankGame_TankController_AI_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAITankDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAITankDeath(); \
		P_NATIVE_END; \
	}


#define TankGame_Source_TankGame_TankController_AI_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankController_AI(); \
	friend TANKGAME_API class UClass* Z_Construct_UClass_ATankController_AI(); \
public: \
	DECLARE_CLASS(ATankController_AI, AAIController, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TankGame"), NO_API) \
	DECLARE_SERIALIZER(ATankController_AI) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TankGame_Source_TankGame_TankController_AI_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATankController_AI(); \
	friend TANKGAME_API class UClass* Z_Construct_UClass_ATankController_AI(); \
public: \
	DECLARE_CLASS(ATankController_AI, AAIController, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TankGame"), NO_API) \
	DECLARE_SERIALIZER(ATankController_AI) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TankGame_Source_TankGame_TankController_AI_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankController_AI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankController_AI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankController_AI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankController_AI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankController_AI(ATankController_AI&&); \
	NO_API ATankController_AI(const ATankController_AI&); \
public:


#define TankGame_Source_TankGame_TankController_AI_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankController_AI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankController_AI(ATankController_AI&&); \
	NO_API ATankController_AI(const ATankController_AI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankController_AI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankController_AI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankController_AI)


#define TankGame_Source_TankGame_TankController_AI_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AcceptanceRadius() { return STRUCT_OFFSET(ATankController_AI, AcceptanceRadius); }


#define TankGame_Source_TankGame_TankController_AI_h_9_PROLOG
#define TankGame_Source_TankGame_TankController_AI_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Source_TankGame_TankController_AI_h_12_PRIVATE_PROPERTY_OFFSET \
	TankGame_Source_TankGame_TankController_AI_h_12_RPC_WRAPPERS \
	TankGame_Source_TankGame_TankController_AI_h_12_INCLASS \
	TankGame_Source_TankGame_TankController_AI_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGame_Source_TankGame_TankController_AI_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Source_TankGame_TankController_AI_h_12_PRIVATE_PROPERTY_OFFSET \
	TankGame_Source_TankGame_TankController_AI_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGame_Source_TankGame_TankController_AI_h_12_INCLASS_NO_PURE_DECLS \
	TankGame_Source_TankGame_TankController_AI_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGame_Source_TankGame_TankController_AI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
