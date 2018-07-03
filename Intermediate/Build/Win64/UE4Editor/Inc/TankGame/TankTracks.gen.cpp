// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TankTracks.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankTracks() {}
// Cross Module References
	TANKGAME_API UClass* Z_Construct_UClass_UTankTracks_NoRegister();
	TANKGAME_API UClass* Z_Construct_UClass_UTankTracks();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_TankGame();
	TANKGAME_API UFunction* Z_Construct_UFunction_UTankTracks_OnHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TANKGAME_API UFunction* Z_Construct_UFunction_UTankTracks_SetTracks();
// End Cross Module References
	void UTankTracks::StaticRegisterNativesUTankTracks()
	{
		UClass* Class = UTankTracks::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &UTankTracks::execOnHit },
			{ "SetTracks", &UTankTracks::execSetTracks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTankTracks_OnHit()
	{
		struct TankTracks_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(TankTracks_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_Hit_MetaData, ARRAY_COUNT(NewProp_Hit_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalImpulse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TankTracks_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TankTracks_eventOnHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComponent_MetaData, ARRAY_COUNT(NewProp_OtherComponent_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TankTracks_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent = { UE4CodeGen_Private::EPropertyClass::Object, "HitComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TankTracks_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_HitComponent_MetaData, ARRAY_COUNT(NewProp_HitComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalImpulse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "TankTracks.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankTracks, "OnHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(TankTracks_eventOnHit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankTracks_SetTracks()
	{
		struct TankTracks_eventSetTracks_Parms
		{
			float Speed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed = { UE4CodeGen_Private::EPropertyClass::Float, "Speed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TankTracks_eventSetTracks_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Speed,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "TankTracks.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankTracks, "SetTracks", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TankTracks_eventSetTracks_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankTracks_NoRegister()
	{
		return UTankTracks::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankTracks()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_TankGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTankTracks_OnHit, "OnHit" }, // 4029250343
				{ &Z_Construct_UFunction_UTankTracks_SetTracks, "SetTracks" }, // 4164861891
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "TankTracks.h" },
				{ "ModuleRelativePath", "TankTracks.h" },
				{ "ToolTip", "Holds Tank Tracks Properties" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDrivingForce_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "TankTracks.h" },
				{ "ToolTip", "Max force in Newtons per track" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDrivingForce = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDrivingForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UTankTracks, MaxDrivingForce), METADATA_PARAMS(NewProp_MaxDrivingForce_MetaData, ARRAY_COUNT(NewProp_MaxDrivingForce_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDrivingForce,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTankTracks>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTankTracks::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankTracks, 3035042063);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankTracks(Z_Construct_UClass_UTankTracks, &UTankTracks::StaticClass, TEXT("/Script/TankGame"), TEXT("UTankTracks"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankTracks);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
