// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TankController_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankController_Player() {}
// Cross Module References
	TANKGAME_API UClass* Z_Construct_UClass_ATankController_Player_NoRegister();
	TANKGAME_API UClass* Z_Construct_UClass_ATankController_Player();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TankGame();
	TANKGAME_API UFunction* Z_Construct_UFunction_ATankController_Player_FoundAimingComponent();
	TANKGAME_API UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister();
	TANKGAME_API UFunction* Z_Construct_UFunction_ATankController_Player_OnPlayerTankDeath();
// End Cross Module References
	static FName NAME_ATankController_Player_FoundAimingComponent = FName(TEXT("FoundAimingComponent"));
	void ATankController_Player::FoundAimingComponent(UTankAimingComponent* AimingComponentRefernce)
	{
		TankController_Player_eventFoundAimingComponent_Parms Parms;
		Parms.AimingComponentRefernce=AimingComponentRefernce;
		ProcessEvent(FindFunctionChecked(NAME_ATankController_Player_FoundAimingComponent),&Parms);
	}
	void ATankController_Player::StaticRegisterNativesATankController_Player()
	{
		UClass* Class = ATankController_Player::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerTankDeath", &ATankController_Player::execOnPlayerTankDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ATankController_Player_FoundAimingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingComponentRefernce_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimingComponentRefernce = { UE4CodeGen_Private::EPropertyClass::Object, "AimingComponentRefernce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TankController_Player_eventFoundAimingComponent_Parms, AimingComponentRefernce), Z_Construct_UClass_UTankAimingComponent_NoRegister, METADATA_PARAMS(NewProp_AimingComponentRefernce_MetaData, ARRAY_COUNT(NewProp_AimingComponentRefernce_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AimingComponentRefernce,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "TankController_Player.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankController_Player, "FoundAimingComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(TankController_Player_eventFoundAimingComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATankController_Player_OnPlayerTankDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "TankController_Player.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankController_Player, "OnPlayerTankDeath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATankController_Player_NoRegister()
	{
		return ATankController_Player::StaticClass();
	}
	UClass* Z_Construct_UClass_ATankController_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_TankGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ATankController_Player_FoundAimingComponent, "FoundAimingComponent" }, // 1274016946
				{ &Z_Construct_UFunction_ATankController_Player_OnPlayerTankDeath, "OnPlayerTankDeath" }, // 1607141438
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "TankController_Player.h" },
				{ "ModuleRelativePath", "TankController_Player.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairY_MetaData[] = {
				{ "Category", "TankController_Player" },
				{ "ModuleRelativePath", "TankController_Player.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairY = { UE4CodeGen_Private::EPropertyClass::Float, "CrosshairY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(ATankController_Player, CrosshairY), METADATA_PARAMS(NewProp_CrosshairY_MetaData, ARRAY_COUNT(NewProp_CrosshairY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairX_MetaData[] = {
				{ "Category", "TankController_Player" },
				{ "ModuleRelativePath", "TankController_Player.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairX = { UE4CodeGen_Private::EPropertyClass::Float, "CrosshairX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(ATankController_Player, CrosshairX), METADATA_PARAMS(NewProp_CrosshairX_MetaData, ARRAY_COUNT(NewProp_CrosshairX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
				{ "Category", "TankController_Player" },
				{ "ModuleRelativePath", "TankController_Player.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range = { UE4CodeGen_Private::EPropertyClass::Float, "Range", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ATankController_Player, Range), METADATA_PARAMS(NewProp_Range_MetaData, ARRAY_COUNT(NewProp_Range_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrosshairY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrosshairX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Range,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATankController_Player>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATankController_Player::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankController_Player, 3118051625);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankController_Player(Z_Construct_UClass_ATankController_Player, &ATankController_Player::StaticClass, TEXT("/Script/TankGame"), TEXT("ATankController_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankController_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
