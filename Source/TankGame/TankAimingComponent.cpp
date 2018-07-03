// Copyrigth Dominik Pavlíèek.

#include "TankAimingComponent.h"
#include "TankBarrel.h"
#include "TankTurret.h"
#include "Projectile.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Engine/World.h"

UTankAimingComponent::UTankAimingComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTankAimingComponent::BeginPlay()
{
	Super::BeginPlay();
	// Set introductory fireTime
	lastTimeFired = FPlatformTime::Seconds();
}

void UTankAimingComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	SetFiringState(); //<--|| each frame find out the FiringState
}

void UTankAimingComponent::Initialise(UTankTurret* TurretToSet, UTankBarrel* BarrelToSet)
{
	if (!ensure(BarrelToSet || TurretToSet))
	{
		UE_LOG(LogTemp, Warning, TEXT("AIMING COMPONENT || void Initialise() || NO BARREL ASSIGNED"))
		return;
	}
	if (!ensure(TurretToSet))
	{
		UE_LOG(LogTemp, Warning, TEXT("AIMING COMPONENT || void Initialise() || NO TURRET ASSIGNED"))
		return;
	}
	Turret = TurretToSet;
	Barrel = BarrelToSet;
}

void UTankAimingComponent::Fire()
{
	if (FiringState == EFiringState::E_Ready)
	{
		if (!ensure(Barrel))
		{
			UE_LOG(LogTemp, Warning, TEXT("AIMING COMPONENT || void Fire() || NO BARREL ASSIGNED"))
			return;
		}
		if (!ensure(ProjectileBlueprint))
		{
			UE_LOG(LogTemp, Warning, TEXT("AIMING COMPONENT || void Fire() || NO PROJECTILE ASSIGNED"))

			return;
		}
		AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileBlueprint, Barrel->GetSocketLocation(FName("Launcher")), Barrel->GetSocketRotation(FName("Launcher")));
		if (Projectile)
		{
			Projectile->LaunchProjectile(LaunchSpeed);
		}
		lastTimeFired = FPlatformTime::Seconds();
		Ammo--;
	}
	else
	{
		// Tank is not ready to fire yet
		return;
	}
}

void UTankAimingComponent::SetFiringState()
{
	if (Ammo == 0)
	{
		FiringState = EFiringState::E_NoAmmo;
	}
	else if(FPlatformTime::Seconds() - lastTimeFired < ReloadTime)
	{
		FiringState = EFiringState::E_Reloading;
	}
	else if (IsBarrelMoving())
	{
		FiringState = EFiringState::E_Aiming;
	}
	
	else
	{
		FiringState = EFiringState::E_Ready;	}
}

bool UTankAimingComponent::IsBarrelMoving()
{
	if (!ensure(Barrel))
	{
		UE_LOG(LogTemp, Warning, TEXT("AIMING COMPONENT || bool IsBarrelMoving() || NO BARREL ASSIGNED"))
		return false;
	}

	FVector BarrelForward = Barrel->GetForwardVector();
	return (!BarrelForward.Equals(AimDirection, 0.01)); //<------------------------|| return wheter BarrelForward equals or not +/- 0.01 AimDirection
}

void UTankAimingComponent::AimAt(FVector WordSpaceAim) 
{
	if (!ensure(Barrel))
	{
		UE_LOG(LogTemp, Warning, TEXT("AIMING COMPONENT || void AimAt() || NO BARREL ASSIGNED"))
		return;
	}
	else
	{
		FVector OutLaunchVelocity;
		FVector StartLocation = Barrel->GetSocketLocation(FName("Launcher")); //<--|| find Location of Socket called "Launcher"

		if (UGameplayStatics::SuggestProjectileVelocity(this, OutLaunchVelocity, StartLocation, WordSpaceAim, LaunchSpeed, false, 0, 0, ESuggestProjVelocityTraceOption::DoNotTrace))
		{
			AimDirection = OutLaunchVelocity.GetSafeNormal(); //<------------------|| calculate AimDirection
			MoveBarrelAndTurret(AimDirection);
		}
	}
}

void UTankAimingComponent::MoveBarrelAndTurret(FVector Direction)
{
	if (!ensure(Barrel))
	{
		UE_LOG(LogTemp, Warning, TEXT("AIMING COMPONENT || void MoveBarrelAndTurret() || NO BARREL ASSIGNED"))
		return;
	}
	if (!ensure(Turret))
	{
		UE_LOG(LogTemp, Warning, TEXT("AIMING COMPONENT || void MoveBarrelAndTurret() || NO TURRET ASSIGNED"))
		return;
	}

	FRotator BarrelRotation = Barrel->GetForwardVector().Rotation(); //<----------|| actual rotation
	FRotator AimRotation = Direction.Rotation(); //<------------------------------|| rotation of aiming direction
	FRotator DeltaAngle = AimRotation - BarrelRotation; //<-----------------------|| Difference between angles
	
	Barrel->Elevate(DeltaAngle.Pitch); //<----------------------------------------|| send amount of rotation
	if (DeltaAngle.Yaw <= 180)
	{
		Turret->Rotate(DeltaAngle.Yaw); //<---------------------------------------|| the same
	}
	else
	{
		Turret->Rotate(-(DeltaAngle.Yaw));
	}
}

int32 UTankAimingComponent::GetAmmo() const
{
	return Ammo;
}

EFiringState UTankAimingComponent::GetFiringState() const
{
	return FiringState;
}
