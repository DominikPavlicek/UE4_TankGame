// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TankAimingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankAimingComponent() {}
// Cross Module References
	TANKGAME_API UEnum* Z_Construct_UEnum_TankGame_EFiringState();
	UPackage* Z_Construct_UPackage__Script_TankGame();
	TANKGAME_API UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister();
	TANKGAME_API UClass* Z_Construct_UClass_UTankAimingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TANKGAME_API UFunction* Z_Construct_UFunction_UTankAimingComponent_Fire();
	TANKGAME_API UFunction* Z_Construct_UFunction_UTankAimingComponent_GetAmmo();
	TANKGAME_API UFunction* Z_Construct_UFunction_UTankAimingComponent_GetFiringState();
	TANKGAME_API UFunction* Z_Construct_UFunction_UTankAimingComponent_Initialise();
	TANKGAME_API UClass* Z_Construct_UClass_UTankBarrel_NoRegister();
	TANKGAME_API UClass* Z_Construct_UClass_UTankTurret_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TANKGAME_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	static UEnum* EFiringState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TankGame_EFiringState, Z_Construct_UPackage__Script_TankGame(), TEXT("EFiringState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFiringState(EFiringState_StaticEnum, TEXT("/Script/TankGame"), TEXT("EFiringState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TankGame_EFiringState_CRC() { return 450102059U; }
	UEnum* Z_Construct_UEnum_TankGame_EFiringState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TankGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFiringState"), 0, Get_Z_Construct_UEnum_TankGame_EFiringState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFiringState::E_Reloading", (int64)EFiringState::E_Reloading },
				{ "EFiringState::E_Aiming", (int64)EFiringState::E_Aiming },
				{ "EFiringState::E_Ready", (int64)EFiringState::E_Ready },
				{ "EFiringState::E_NoAmmo", (int64)EFiringState::E_NoAmmo },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E_Aiming.DisplayName", "Aiming" },
				{ "E_NoAmmo.DisplayName", "Out of Ammo" },
				{ "E_Ready.DisplayName", "Aimed" },
				{ "E_Reloading.DisplayName", "Reloading" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
				{ "ToolTip", "General Aiming Component For AI & Player's Tank" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TankGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFiringState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFiringState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UTankAimingComponent::StaticRegisterNativesUTankAimingComponent()
	{
		UClass* Class = UTankAimingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &UTankAimingComponent::execFire },
			{ "GetAmmo", &UTankAimingComponent::execGetAmmo },
			{ "GetFiringState", &UTankAimingComponent::execGetFiringState },
			{ "Initialise", &UTankAimingComponent::execInitialise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTankAimingComponent_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankAimingComponent, "Fire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankAimingComponent_GetAmmo()
	{
		struct TankAimingComponent_eventGetAmmo_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TankAimingComponent_eventGetAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankAimingComponent, "GetAmmo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(TankAimingComponent_eventGetAmmo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankAimingComponent_GetFiringState()
	{
		struct TankAimingComponent_eventGetFiringState_Parms
		{
			EFiringState ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TankAimingComponent_eventGetFiringState_Parms, ReturnValue), Z_Construct_UEnum_TankGame_EFiringState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankAimingComponent, "GetFiringState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(TankAimingComponent_eventGetFiringState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankAimingComponent_Initialise()
	{
		struct TankAimingComponent_eventInitialise_Parms
		{
			UTankTurret* TurretToSet;
			UTankBarrel* BarrelToSet;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrelToSet_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarrelToSet = { UE4CodeGen_Private::EPropertyClass::Object, "BarrelToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TankAimingComponent_eventInitialise_Parms, BarrelToSet), Z_Construct_UClass_UTankBarrel_NoRegister, METADATA_PARAMS(NewProp_BarrelToSet_MetaData, ARRAY_COUNT(NewProp_BarrelToSet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretToSet_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretToSet = { UE4CodeGen_Private::EPropertyClass::Object, "TurretToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TankAimingComponent_eventInitialise_Parms, TurretToSet), Z_Construct_UClass_UTankTurret_NoRegister, METADATA_PARAMS(NewProp_TurretToSet_MetaData, ARRAY_COUNT(NewProp_TurretToSet_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BarrelToSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TurretToSet,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankAimingComponent, "Initialise", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TankAimingComponent_eventInitialise_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister()
	{
		return UTankAimingComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankAimingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_TankGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTankAimingComponent_Fire, "Fire" }, // 2459025907
				{ &Z_Construct_UFunction_UTankAimingComponent_GetAmmo, "GetAmmo" }, // 25639106
				{ &Z_Construct_UFunction_UTankAimingComponent_GetFiringState, "GetFiringState" }, // 2066569688
				{ &Z_Construct_UFunction_UTankAimingComponent_Initialise, "Initialise" }, // 2105649617
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "TankComponents" },
				{ "IncludePath", "TankAimingComponent.h" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ammo = { UE4CodeGen_Private::EPropertyClass::Int, "Ammo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UTankAimingComponent, Ammo), METADATA_PARAMS(NewProp_Ammo_MetaData, ARRAY_COUNT(NewProp_Ammo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTime = { UE4CodeGen_Private::EPropertyClass::Float, "ReloadTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UTankAimingComponent, ReloadTime), METADATA_PARAMS(NewProp_ReloadTime_MetaData, ARRAY_COUNT(NewProp_ReloadTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchSpeed_MetaData[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "LaunchSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UTankAimingComponent, LaunchSpeed), METADATA_PARAMS(NewProp_LaunchSpeed_MetaData, ARRAY_COUNT(NewProp_LaunchSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileBlueprint_MetaData[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileBlueprint = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000010001, 1, nullptr, STRUCT_OFFSET(UTankAimingComponent, ProjectileBlueprint), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ProjectileBlueprint_MetaData, ARRAY_COUNT(NewProp_ProjectileBlueprint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringState_MetaData[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FiringState = { UE4CodeGen_Private::EPropertyClass::Enum, "FiringState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UTankAimingComponent, FiringState), Z_Construct_UEnum_TankGame_EFiringState, METADATA_PARAMS(NewProp_FiringState_MetaData, ARRAY_COUNT(NewProp_FiringState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FiringState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Ammo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReloadTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaunchSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileBlueprint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FiringState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FiringState_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTankAimingComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTankAimingComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UTankAimingComponent, 3311633207);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankAimingComponent(Z_Construct_UClass_UTankAimingComponent, &UTankAimingComponent::StaticClass, TEXT("/Script/TankGame"), TEXT("UTankAimingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankAimingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
