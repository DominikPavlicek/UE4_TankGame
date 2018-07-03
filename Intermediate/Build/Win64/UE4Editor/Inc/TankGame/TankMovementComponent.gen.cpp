// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TankMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankMovementComponent() {}
// Cross Module References
	TANKGAME_API UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister();
	TANKGAME_API UClass* Z_Construct_UClass_UTankMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent();
	UPackage* Z_Construct_UPackage__Script_TankGame();
	TANKGAME_API UFunction* Z_Construct_UFunction_UTankMovementComponent_Initialise();
	TANKGAME_API UClass* Z_Construct_UClass_UTankTracks_NoRegister();
	TANKGAME_API UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward();
	TANKGAME_API UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveLeft();
	TANKGAME_API UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveRigth();
// End Cross Module References
	void UTankMovementComponent::StaticRegisterNativesUTankMovementComponent()
	{
		UClass* Class = UTankMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialise", &UTankMovementComponent::execInitialise },
			{ "IntendMoveForward", &UTankMovementComponent::execIntendMoveForward },
			{ "IntendMoveLeft", &UTankMovementComponent::execIntendMoveLeft },
			{ "IntendMoveRigth", &UTankMovementComponent::execIntendMoveRigth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTankMovementComponent_Initialise()
	{
		struct TankMovementComponent_eventInitialise_Parms
		{
			UTankTracks* OUTLeftTrack;
			UTankTracks* OUTRigthTrack;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OUTRigthTrack_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OUTRigthTrack = { UE4CodeGen_Private::EPropertyClass::Object, "OUTRigthTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TankMovementComponent_eventInitialise_Parms, OUTRigthTrack), Z_Construct_UClass_UTankTracks_NoRegister, METADATA_PARAMS(NewProp_OUTRigthTrack_MetaData, ARRAY_COUNT(NewProp_OUTRigthTrack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OUTLeftTrack_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OUTLeftTrack = { UE4CodeGen_Private::EPropertyClass::Object, "OUTLeftTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TankMovementComponent_eventInitialise_Parms, OUTLeftTrack), Z_Construct_UClass_UTankTracks_NoRegister, METADATA_PARAMS(NewProp_OUTLeftTrack_MetaData, ARRAY_COUNT(NewProp_OUTLeftTrack_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OUTRigthTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OUTLeftTrack,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "TankMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, "Initialise", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(TankMovementComponent_eventInitialise_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward()
	{
		struct TankMovementComponent_eventIntendMoveForward_Parms
		{
			float Throw;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throw = { UE4CodeGen_Private::EPropertyClass::Float, "Throw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TankMovementComponent_eventIntendMoveForward_Parms, Throw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Throw,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "TankMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, "IntendMoveForward", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(TankMovementComponent_eventIntendMoveForward_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveLeft()
	{
		struct TankMovementComponent_eventIntendMoveLeft_Parms
		{
			float Throw;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throw = { UE4CodeGen_Private::EPropertyClass::Float, "Throw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TankMovementComponent_eventIntendMoveLeft_Parms, Throw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Throw,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "TankMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, "IntendMoveLeft", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(TankMovementComponent_eventIntendMoveLeft_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveRigth()
	{
		struct TankMovementComponent_eventIntendMoveRigth_Parms
		{
			float Throw;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throw = { UE4CodeGen_Private::EPropertyClass::Float, "Throw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TankMovementComponent_eventIntendMoveRigth_Parms, Throw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Throw,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "TankMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, "IntendMoveRigth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(TankMovementComponent_eventIntendMoveRigth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister()
	{
		return UTankMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UNavMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_TankGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTankMovementComponent_Initialise, "Initialise" }, // 933881932
				{ &Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward, "IntendMoveForward" }, // 4177213903
				{ &Z_Construct_UFunction_UTankMovementComponent_IntendMoveLeft, "IntendMoveLeft" }, // 1149540362
				{ &Z_Construct_UFunction_UTankMovementComponent_IntendMoveRigth, "IntendMoveRigth" }, // 2302236816
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "TankComponents" },
				{ "IncludePath", "TankMovementComponent.h" },
				{ "ModuleRelativePath", "TankMovementComponent.h" },
				{ "ToolTip", "Holds Tank Movement Properties" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTankMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTankMovementComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00084u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankMovementComponent, 4278922221);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankMovementComponent(Z_Construct_UClass_UTankMovementComponent, &UTankMovementComponent::StaticClass, TEXT("/Script/TankGame"), TEXT("UTankMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
