// Copyrigth Dominik Pavlíèek.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

class UTankBarrel;
class UTankTurret;
class AProjectile;

// General Aiming Component For AI & Player's Tank


UENUM(BlueprintType)
enum class EFiringState : uint8
{
	E_Reloading 	UMETA(DisplayName = "Reloading"),
	E_Aiming		UMETA(DisplayName = "Aiming"),
	E_Ready			UMETA(DisplayName = "Aimed"),
	E_NoAmmo		UMETA(DisplayName = "Out of Ammo")
};

UCLASS( ClassGroup=(TankComponents), meta=(BlueprintSpawnableComponent) )
class TANKGAME_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UTankAimingComponent();
	UFUNCTION(BlueprintCallable, Category = Setup)
		void Initialise(UTankTurret* TurretToSet, UTankBarrel* BarrelToSet);
	UFUNCTION(BlueprintCallable, Category = Setup)
		void Fire();
	void AimAt(FVector WordSpaceAim);
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable, Category = Setup)
		int32 GetAmmo() const;
	UFUNCTION(BlueprintCallable, Category = Setup)
		EFiringState GetFiringState() const;

protected:
	UPROPERTY(EditDefaultsOnly, Category = Firing)
		EFiringState FiringState = EFiringState::E_Reloading;

private:
	void MoveBarrelAndTurret(FVector Direction);
	void SetFiringState();
	bool IsBarrelMoving();
	double lastTimeFired = 0;
	FVector AimDirection;
	UTankBarrel* Barrel = nullptr;
	UTankTurret* Turret = nullptr;
	
	UPROPERTY(EditDefaultsOnly, Category = Firing)
		TSubclassOf<AProjectile> ProjectileBlueprint;
	UPROPERTY(EditDefaultsOnly, Category = Firing)
		float LaunchSpeed = 10000;
	UPROPERTY(EditDefaultsOnly, Category = Firing)
		float ReloadTime = 2.5;
	UPROPERTY(EditDefaultsOnly, Category = Firing)
		int32 Ammo = 7;
};
