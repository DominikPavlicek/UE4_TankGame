// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Projectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectile() {}
// Cross Module References
	TANKGAME_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	TANKGAME_API UClass* Z_Construct_UClass_AProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TankGame();
	TANKGAME_API UFunction* Z_Construct_UFunction_AProjectile_GetCollisionMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TANKGAME_API UFunction* Z_Construct_UFunction_AProjectile_OnHit();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void AProjectile::StaticRegisterNativesAProjectile()
	{
		UClass* Class = AProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCollisionMesh", &AProjectile::execGetCollisionMesh },
			{ "OnHit", &AProjectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AProjectile_GetCollisionMesh()
	{
		struct Projectile_eventGetCollisionMesh_Parms
		{
			UStaticMeshComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(Projectile_eventGetCollisionMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "Projectile.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile, "GetCollisionMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Projectile_eventGetCollisionMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AProjectile_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "Projectile.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile, "OnHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProjectile_NoRegister()
	{
		return AProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_TankGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AProjectile_GetCollisionMesh, "GetCollisionMesh" }, // 2697634669
				{ &Z_Construct_UFunction_AProjectile_OnHit, "OnHit" }, // 2747846307
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Projectile.h" },
				{ "ModuleRelativePath", "Projectile.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
				{ "Category", "Components" },
				{ "ModuleRelativePath", "Projectile.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDamage = { UE4CodeGen_Private::EPropertyClass::Float, "BaseDamage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AProjectile, BaseDamage), METADATA_PARAMS(NewProp_BaseDamage_MetaData, ARRAY_COUNT(NewProp_BaseDamage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactForce_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Projectile.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactForce = { UE4CodeGen_Private::EPropertyClass::Object, "ImpactForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AProjectile, ImpactForce), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(NewProp_ImpactForce_MetaData, ARRAY_COUNT(NewProp_ImpactForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactBlast_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Projectile.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactBlast = { UE4CodeGen_Private::EPropertyClass::Object, "ImpactBlast", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AProjectile, ImpactBlast), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(NewProp_ImpactBlast_MetaData, ARRAY_COUNT(NewProp_ImpactBlast_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchBlast_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Projectile.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaunchBlast = { UE4CodeGen_Private::EPropertyClass::Object, "LaunchBlast", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AProjectile, LaunchBlast), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(NewProp_LaunchBlast_MetaData, ARRAY_COUNT(NewProp_LaunchBlast_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMesh_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Projectile.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionMesh = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AProjectile, CollisionMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_CollisionMesh_MetaData, ARRAY_COUNT(NewProp_CollisionMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Projectile.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(NewProp_ProjectileMovement_MetaData, ARRAY_COUNT(NewProp_ProjectileMovement_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseDamage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactBlast,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaunchBlast,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileMovement,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AProjectile>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AProjectile::StaticClass,
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
	IMPLEMENT_CLASS(AProjectile, 1558269554);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectile(Z_Construct_UClass_AProjectile, &AProjectile::StaticClass, TEXT("/Script/TankGame"), TEXT("AProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
