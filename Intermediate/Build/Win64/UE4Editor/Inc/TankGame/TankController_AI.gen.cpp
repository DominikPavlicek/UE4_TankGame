// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TankController_AI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankController_AI() {}
// Cross Module References
	TANKGAME_API UClass* Z_Construct_UClass_ATankController_AI_NoRegister();
	TANKGAME_API UClass* Z_Construct_UClass_ATankController_AI();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_TankGame();
	TANKGAME_API UFunction* Z_Construct_UFunction_ATankController_AI_OnAITankDeath();
// End Cross Module References
	void ATankController_AI::StaticRegisterNativesATankController_AI()
	{
		UClass* Class = ATankController_AI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAITankDeath", &ATankController_AI::execOnAITankDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ATankController_AI_OnAITankDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "TankController_AI.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankController_AI, "OnAITankDeath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATankController_AI_NoRegister()
	{
		return ATankController_AI::StaticClass();
	}
	UClass* Z_Construct_UClass_ATankController_AI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AAIController,
				(UObject* (*)())Z_Construct_UPackage__Script_TankGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ATankController_AI_OnAITankDeath, "OnAITankDeath" }, // 1896613544
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "TankController_AI.h" },
				{ "ModuleRelativePath", "TankController_AI.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "TankController_AI.h" },
				{ "ToolTip", "Distance from which AI tank stops movement and start firing at Player" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptanceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(ATankController_AI, AcceptanceRadius), METADATA_PARAMS(NewProp_AcceptanceRadius_MetaData, ARRAY_COUNT(NewProp_AcceptanceRadius_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptanceRadius,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATankController_AI>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATankController_AI::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
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
	IMPLEMENT_CLASS(ATankController_AI, 998921390);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankController_AI(Z_Construct_UClass_ATankController_AI, &ATankController_AI::StaticClass, TEXT("/Script/TankGame"), TEXT("ATankController_AI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankController_AI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
