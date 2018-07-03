// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTankTracks;
#ifdef TANKGAME_TankMovementComponent_generated_h
#error "TankMovementComponent.generated.h already included, missing '#pragma once' in TankMovementComponent.h"
#endif
#define TANKGAME_TankMovementComponent_generated_h

#define TankGame_Source_TankGame_TankMovementComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UTankTracks,Z_Param_OUTLeftTrack); \
		P_GET_OBJECT(UTankTracks,Z_Param_OUTRigthTrack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialise(Z_Param_OUTLeftTrack,Z_Param_OUTRigthTrack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntendMoveLeft) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntendMoveLeft(Z_Param_Throw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntendMoveRigth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntendMoveRigth(Z_Param_Throw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntendMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntendMoveForward(Z_Param_Throw); \
		P_NATIVE_END; \
	}


#define TankGame_Source_TankGame_TankMovementComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UTankTracks,Z_Param_OUTLeftTrack); \
		P_GET_OBJECT(UTankTracks,Z_Param_OUTRigthTrack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialise(Z_Param_OUTLeftTrack,Z_Param_OUTRigthTrack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntendMoveLeft) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntendMoveLeft(Z_Param_Throw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntendMoveRigth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntendMoveRigth(Z_Param_Throw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntendMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntendMoveForward(Z_Param_Throw); \
		P_NATIVE_END; \
	}


#define TankGame_Source_TankGame_TankMovementComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankMovementComponent(); \
	friend TANKGAME_API class UClass* Z_Construct_UClass_UTankMovementComponent(); \
public: \
	DECLARE_CLASS(UTankMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/TankGame"), NO_API) \
	DECLARE_SERIALIZER(UTankMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TankGame_Source_TankGame_TankMovementComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTankMovementComponent(); \
	friend TANKGAME_API class UClass* Z_Construct_UClass_UTankMovementComponent(); \
public: \
	DECLARE_CLASS(UTankMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/TankGame"), NO_API) \
	DECLARE_SERIALIZER(UTankMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TankGame_Source_TankGame_TankMovementComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankMovementComponent(UTankMovementComponent&&); \
	NO_API UTankMovementComponent(const UTankMovementComponent&); \
public:


#define TankGame_Source_TankGame_TankMovementComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankMovementComponent(UTankMovementComponent&&); \
	NO_API UTankMovementComponent(const UTankMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankMovementComponent)


#define TankGame_Source_TankGame_TankMovementComponent_h_17_PRIVATE_PROPERTY_OFFSET
#define TankGame_Source_TankGame_TankMovementComponent_h_14_PROLOG
#define TankGame_Source_TankGame_TankMovementComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Source_TankGame_TankMovementComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	TankGame_Source_TankGame_TankMovementComponent_h_17_RPC_WRAPPERS \
	TankGame_Source_TankGame_TankMovementComponent_h_17_INCLASS \
	TankGame_Source_TankGame_TankMovementComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGame_Source_TankGame_TankMovementComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGame_Source_TankGame_TankMovementComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	TankGame_Source_TankGame_TankMovementComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGame_Source_TankGame_TankMovementComponent_h_17_INCLASS_NO_PURE_DECLS \
	TankGame_Source_TankGame_TankMovementComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGame_Source_TankGame_TankMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
