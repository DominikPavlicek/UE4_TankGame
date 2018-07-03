// Copyrigth Dominik Pavlíèek.

#include "TankController_Player.h"
#include "Engine/World.h"
#include "TankAimingComponent.h"
#include "Tank.h"

#define OUT

void ATankController_Player::BeginPlay()
{
	Super::BeginPlay(); //<--------------------------------------|| insured to call the BeginPlay from inheritance above before
	UTankAimingComponent* AimingComponent = GetPawn()->FindComponentByClass<UTankAimingComponent>();
	if (!ensure(AimingComponent))
	{
		UE_LOG(LogTemp, Warning, TEXT("TANK CONTROLLER PLAYER || void BeginPlay() || NO AIMING COMPONENT FOUND"))
	}
	else
	{
		FoundAimingComponent(AimingComponent);
	}
}

void ATankController_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimTowardsCrosshair();
}

void ATankController_Player::AimTowardsCrosshair()
{
	UTankAimingComponent* AimingComponent = GetPawn()->FindComponentByClass<UTankAimingComponent>();
	if (!ensure(AimingComponent))
	{ 
		UE_LOG(LogTemp, Warning, TEXT("CONTROLLED TANK NOT FOUND"))
		return; 
	}

	FVector HitLocation; //<---------------------------------------------------------------------------------------|| Out parameter
	if (GetAimLocation(HitLocation)) //<---------------------------------------------------------------------------|| Has "side-effect", is going to line trace
	{
		AimingComponent->AimAt(HitLocation);
	}
}

bool ATankController_Player::GetAimLocation(FVector& HitLocation) const 
{
	
	int32 ViewportSizeX, ViewportSizeY;
	GetViewportSize(ViewportSizeX, ViewportSizeY); //<-------------------------------------------------------------|| Find the crosshair position in pixel coordinates
	FVector2D ScreenLocation = FVector2D(ViewportSizeX * CrosshairX, ViewportSizeY * CrosshairY);
	
	FVector LookDirection;
	if (GetLookDirection(ScreenLocation, LookDirection)) //<-------------------------------------------------------|| "De-project" the screen position of the crosshair to a world direction
	{	
		return GetLookVectorHitLocation(LookDirection, HitLocation); //<-------------------------------------------|| Line-trace along that LookDirection, and see what we hit (up to max range)
	}
	return false;
}

bool ATankController_Player::GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const
{
	FHitResult HitResult;

	auto StartLocation = PlayerCameraManager->GetCameraLocation();
	auto EndLocation = StartLocation + (LookDirection * Range);
	if (GetWorld()->LineTraceSingleByChannel(HitResult,	StartLocation, EndLocation, ECollisionChannel::ECC_Camera))
	{
		HitLocation = HitResult.Location;
		return true;
	}
	HitLocation = FVector(0);
	return false;
}

bool ATankController_Player::GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const
{
	FVector CameraWorldLocation; //<-------------------------------------------------------------------------------|| To be discarded
	return  DeprojectScreenPositionToWorld(ScreenLocation.X, ScreenLocation.Y, CameraWorldLocation, LookDirection);
}

void ATankController_Player::SetPawn(APawn* InPawn)
{
	Super::SetPawn(InPawn);
	if (InPawn)
	{
		ATank* PlayerTank = Cast<ATank>(InPawn);
		if (!ensure(PlayerTank))
		{
			UE_LOG(LogTemp, Warning, TEXT("TANK AI CONTROLLER || void SetPawn() || NO POSSESSED TANK"))
		}
		PlayerTank->OnDeath.AddUniqueDynamic(this, &ATankController_Player::OnPlayerTankDeath);
	}
}

void ATankController_Player::OnPlayerTankDeath()
{
	StartSpectatingOnly();
}