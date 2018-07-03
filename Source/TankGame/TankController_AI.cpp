// Copyrigth Dominik Pavlíèek.

#include "TankController_AI.h"
#include "Engine/World.h"
#include "Tank.h"
#include "TankAimingComponent.h"

void ATankController_AI::BeginPlay()
{
	Super::BeginPlay(); //<--------------------------------------|| insured to call the BeginPlay from inheritance above before
	UTankAimingComponent* AimingComponent = GetPawn()->FindComponentByClass<UTankAimingComponent>();
	if (!ensure(AimingComponent))
	{
		UE_LOG(LogTemp, Warning, TEXT("TANK AI CONTROLLER || void BeginPlay() || NO AIMING COMPONENT ASSIGNED"))
		return;
	}
	if (!GetWorld()->GetFirstPlayerController()->GetPawn())
	{
		UE_LOG(LogTemp, Error, TEXT("TANK AI CONTROLLER || void BeginPlay() || AI CANNOT SEE PLAYER"))
	}
}

void ATankController_AI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UTankAimingComponent* AimingComponent = GetPawn()->FindComponentByClass<UTankAimingComponent>();

	if (!ensure(AimingComponent))
	{
		UE_LOG(LogTemp, Warning, TEXT("TANK AI CONTROLLER || void Tick() || NO AIMING COMPONENT ASSIGNED"))
	}
	else
	{
		MoveToActor(GetWorld()->GetFirstPlayerController()->GetPawn(), AcceptanceRadius);
		AimingComponent->AimAt(GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation()); //<----|| aim towards player
		AimingComponent->Fire();
	}
}

void ATankController_AI::SetPawn(APawn* InPawn)
{
	Super::SetPawn(InPawn);
	if (InPawn)
	{
		ATank* PossessedTank = Cast<ATank>(InPawn);
		if (!ensure(PossessedTank))
		{
			UE_LOG(LogTemp, Warning, TEXT("TANK AI CONTROLLER || void SetPawn() || NO POSSESSED TANK"))
		}
		PossessedTank->OnDeath.AddUniqueDynamic(this, &ATankController_AI::OnAITankDeath);
	}
}

void ATankController_AI::OnAITankDeath()
{
	if (!GetPawn())
	{
		UE_LOG(LogTemp, Warning, TEXT("TANK AI CONTROLLER || void OnAITankDeath() || NO POSSESSED TANK"))
		return;
	}
	GetPawn()->DetachFromControllerPendingDestroy(); //<-------------|| removes AI from Pawn
}
