// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Tank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTank() {}
// Cross Module References
	TANKGAME_API UFunction* Z_Construct_UDelegateFunction_TankGame_TankDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TankGame();
	TANKGAME_API UClass* Z_Construct_UClass_ATank_NoRegister();
	TANKGAME_API UClass* Z_Construct_UClass_ATank();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	TANKGAME_API UFunction* Z_Construct_UFunction_ATank_GetHealthPercentage();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_TankGame_TankDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Tank.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TankGame, "TankDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void ATank::StaticRegisterNativesATank()
	{
		UClass* Class = ATank::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHealthPercentage", &ATank::execGetHealthPercentage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ATank_GetHealthPercentage()
	{
		struct Tank_eventGetHealthPercentage_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Tank_eventGetHealthPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Tank.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATank, "GetHealthPercentage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(Tank_eventGetHealthPercentage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATank_NoRegister()
	{
		return ATank::StaticClass();
	}
	UClass* Z_Construct_UClass_ATank()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_TankGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ATank_GetHealthPercentage, "GetHealthPercentage" }, // 645617962
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Tank.h" },
				{ "ModuleRelativePath", "Tank.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankHealth_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Tank.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TankHealth = { UE4CodeGen_Private::EPropertyClass::Int, "TankHealth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ATank, TankHealth), METADATA_PARAMS(NewProp_TankHealth_MetaData, ARRAY_COUNT(NewProp_TankHealth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankBaseHealth_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Tank.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TankBaseHealth = { UE4CodeGen_Private::EPropertyClass::Int, "TankBaseHealth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(ATank, TankBaseHealth), METADATA_PARAMS(NewProp_TankBaseHealth_MetaData, ARRAY_COUNT(NewProp_TankBaseHealth_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TankHealth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TankBaseHealth,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATank>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATank::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ATank, 3186673779);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATank(Z_Construct_UClass_ATank, &ATank::StaticClass, TEXT("/Script/TankGame"), TEXT("ATank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
