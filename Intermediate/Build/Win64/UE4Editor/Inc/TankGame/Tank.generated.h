// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKGAME_Tank_generated_h
#error "Tank.generated.h already included, missing '#pragma once' in Tank.h"
#endif
#define TANKGAME_Tank_generated_h

#define TankGame_Source_TankGame_Tank_h_9_DELEGATE \
static inline void FTankDelegate_DelegateWrapper(const FMulticastScriptDelegate& TankDelegate) \
{ \
	TankDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TankGame_Source_TankGame_Tank_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHealthPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealthPercentage(); \
		P_NATIVE_END; \
	}


#define TankGame_Source_TankGame_Tank_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHealthPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealthPercentage(); \
		P_NATIVE_END; \
	}


#define TankGame_Source_TankGame_Tank_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATank(); \
	friend TANKGAME_API class UClass* Z_Construct_UClass_ATank(); \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TankGame"), NO_API) \
	DECLARE_SERIALIZER(ATank) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TankGame_Source_TankGame_Tank_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATank(); \
	friend TANKGAME_API class UClass* Z_Construct_UClass_ATank(); \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TankGame"), NO_API) \
	DECLARE_SERIALIZER(ATank) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TankGame_Source_TankGame_Tank_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATank(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public:


#define TankGame_Source_TankGame_Tank_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATank)


#define TankGame_Source_TankGame_Tank_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TankBaseHealth() { return STRUCT_OFFSET(ATank, TankBaseHealth); } \
	FORCEINLINE static uint32 __PPO__TankHealth() { return STRUCT_OFFSET(ATank, TankHealth); }


#define TankGame_Source_TankGame_Tank_h_11_PROLOG
#define TankGame_Source_TankGame_Tank_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Source_TankGame_Tank_h_14_PRIVATE_PROPERTY_OFFSET \
	TankGame_Source_TankGame_Tank_h_14_RPC_WRAPPERS \
	TankGame_Source_TankGame_Tank_h_14_INCLASS \
	TankGame_Source_TankGame_Tank_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGame_Source_TankGame_Tank_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Source_TankGame_Tank_h_14_PRIVATE_PROPERTY_OFFSET \
	TankGame_Source_TankGame_Tank_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGame_Source_TankGame_Tank_h_14_INCLASS_NO_PURE_DECLS \
	TankGame_Source_TankGame_Tank_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGame_Source_TankGame_Tank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
